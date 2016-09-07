#include<stdio.h>

int main()
{
	int bucketsize,n,packet[10],i;
	
	printf("Enter bucket size: ");
	scanf("%d",&bucketsize);
	printf("\nEnter the number of packets:(max. 10) ");
	scanf("%d",&n);
	printf("Enter the size of each packet: ");
	for(i=1;i<=n;i++)
	{
		printf("\nPacket %d: ",i);
		scanf("%d",&packet[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(bucketsize >= packet[i])
		{
			printf("\nPacket %d will be transmitted over the network ",i);
			bucketsize=bucketsize-packet[i];
		}
		else
		{
			printf("\nPacket %d can't be sent\nRe-initializing the bucketsize....",i);
		}
		bucketsize+=packet[i];
		printf("\n\n%d",bucketsize);
	}
	return 0;
}
			
