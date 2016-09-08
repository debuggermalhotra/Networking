#include <stdio.h>



void bktInput(int a, int b, int size) {
 if (a > size)
 printf("\tBucket overflow.\n");
 else {
 sleep(1); 
 while (a > b) {

 printf("\t%d Bytes outputted\n", b);
 a -= b;
 sleep(1);
 }

 if (a > 0) printf("\tLast %d bytes sent\n", a);
 printf("\tBucket output successful.\n");
 }
}


int main() {
 int op, pktSize, i, bktsize, n, delay;
 printf("Enter bucket Size : ");
 scanf("%d", &bktsize);
 printf("\nOutput Rate : ");
 scanf("%d", &op);
 printf("\nNo of packets : ");
 scanf("%d", &n);
 for (i = 0; i < n; i++) 
 {
 delay = (rand() % 10); 
 sleep(delay); 
 pktSize = rand() % 1000;

 printf("\nPacket number %d\tPacket size = %d\n", i, pktSize);
 bktInput(pktSize, op, bktsize);
 }
 return 0;
}
