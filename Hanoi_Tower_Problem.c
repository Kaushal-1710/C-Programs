#include<stdio.h>

void toh(int n,char from,char to,char aux);

void main()
{
    int n;
    printf("\n Enter Disk : ");
    scanf("%d",&n);
    toh(n,'A','C','B');
}
void toh(int n,char from,char to,char aux)
{
    if(n==1)
    {
        printf("\n Move Disk 1 from %c rod to %c rod",from,to);
        return;
    }
    toh(n-1,from,aux,to);
    printf("\n Move Disk %d from %c rod to %c rod",n,from,to);
    toh(n-1,aux,to,from);
}
//1,3,7,15,31
