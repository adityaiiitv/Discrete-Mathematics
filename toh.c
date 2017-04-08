#include<stdio.h>
void toh(int,int,int,int);
void main()
{
int x;
printf("Enter the no. of disks: ");
scanf("%d",&x);
toh(x,1,3,2);
}

void toh(int n,int frompeg,int topeg,int auxpeg)
{
if(n==1)
printf("\nDisk %d moved from peg %d to peg %d \n",n,frompeg,topeg);
else
{
toh(n-1,frompeg,auxpeg,topeg);
printf("\nDisk %d moved from peg %d to peg %d ",n,frompeg,topeg);
toh(n-1,auxpeg,topeg,frompeg);
}
}
 
