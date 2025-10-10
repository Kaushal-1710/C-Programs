#include<stdio.h>

int factorial(int n);
void main()
{

    int x,y;
    printf ("\n enter a value:");
    scanf("%d", &x);


    y=factorial(x);


    printf("\n factorial is: %d", y);

}

 int factorial (int x)

 {
     int f;
     if(x==1)
         return 1;

     else
        f=x*factorial(x-1);
     return f;
 }
