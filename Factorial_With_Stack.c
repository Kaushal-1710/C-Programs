#include<stdio.h>
#define MAX 30

int stack[MAX];
int top = -1;

void push(int val);
int pop();


void main()
{
   int n,i,fact=1;
   printf("\n Enter a number(up to 30 no): ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       push(i);
   }
   while(top!=-1)
   {
       fact = fact * pop();
   }
   printf("\n Factorial of number %d is : %d",n,fact);
}

void push(int val)
{
    if(top == MAX -1)
    {
        printf("\n Stack Overflow..");
        return;


    }
    top++;
    stack[top] = val;
}

int pop()
{
    if(top == -1)

    {
     printf("\n Stack Underflow..");
     return -1;


    }
    int val = stack[top];
    top=top-1;
    return val;
}




