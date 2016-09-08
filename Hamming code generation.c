/*In telecommunication, a Hamming code is a linear error-correcting code named after its
inventor, Richard Hamming. Hamming codes can detect up to two simultaneous bit
errors, and correct single-bit errors; thus, reliable communication is possible when the
Hamming distance between the transmitted and received bit patterns is less than or
equal to one. By contrast, the simple parity code cannot correct errors, and can only
detect an odd number of errors.*/

#include<stdio.h>

	char data[5];
	int encoded[8],edata[7],syndrome[3];
	int hmatrix[3][7]={1,0,0,0,1,1,1,0,1,0,1,0,1,1,0,0,1,1,1,0,1}; 
		
		char gmatrix[4][8]={"0111000","1010100","1100010","1110001"};
		int main()
		{
			int i,j;
			printf("Hamming Code --- Encoding\n");
			printf("\nEnter 4 bit data: ");
			scanf("%s",data);
			printf("\nGenerator Matrix\n ");
			for(i=0;i<4;i++)
			printf("\t %s \n",gmatrix[i]);
			printf("\nEncoded data: ");
			for(i=0;i<7;i++)
			{
				for(j=0;j<4;j++)
				encoded[i]+=((data[j]-'0')*(gmatrix[j][i]-'0'));
				encoded[i]=encoded[i]%2;
				printf("\n%d",encoded[i]);
			}
			printf("\nHamming Code ----Decoding\n");
			printf("\nEnter encoded bits as received: ");
			for(i=0;i<7;i++)
			scanf("%d",&edata[i]);
			/*for(i=0;i<3;i++)
			{
				for(j=0;j<7;j++)
				{
				syndrome[i]=syndrome[i]+(edata[j]*hmatrix[i][j]);
				syndrome[i]=syndrome[i]%2;
			}
			}*/
			for(j=0;j<7;j++)
			if((syndrome[0]==hmatrix[0][j]) && (syndrome[i]==hmatrix[1][j]) && (syndrome[2]==hmatrix[2][j]))
			break;
			if(j==7)
			{
				printf("\nData is error free!");
			}
				else
				{
					printf("\nError received at bit number %d of the data",j+1);
					edata[j]=!edata[j];
					printf("\nThe correct data should be: "); 		
					for(i=0;i<7;i++)
					printf("%d",edata[i]);
				}	
			}
