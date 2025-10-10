#include<stdio.h>
#include<string.h>

/*void main()
{
    char str[30];
    printf("Enter a name: ");
    scanf("%s",&str);
    strrev(str);
    printf("reverse string is : %s",str);
}*/

#define MAX 30

int stack[MAX];
int top = -1;

void push(char val);
char pop();


void main()
{
   char str[30];
   int i;
   printf("\n Enter string: ");
   gets(str);

   for(i=0;str[i]!='\0';i++)
   {
       push(str[i]);
   }
   printf("\n Reverse String is as follows\n");
   while(top!=-1)
   {
        printf("\n %c",pop());
   }

}

void push(char val)
{
    if(top == MAX -1)
    {
        printf("\n Stack Overflow..");
        return;


    }
    top++;
    stack[top] = val;
}

char pop()
{
    char val;
    if(top == -1)

    {
     printf("\n Stack Underflow..");
     return -1;


    }
    val = stack[top];
    top=top-1;
    return val;
}





