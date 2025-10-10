#include<stdio.h>
#define MAX 3

int stack[MAX];
int top = -1;

void push(int val);
int pop();
int peek();
void update(int i,int x);
void display();

void main()
{
    int op,val,x,i;

    do
    {
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Peek");
        printf("\n 4. Update");
        printf("\n 5. Display");
        printf("\n 6. Exit");

        printf("\n Enter Your Choice : ");
        scanf("%d",&op);

        switch(op)
        {
        case 1:
            printf("\n Enter Value to be Pushed : ");
            scanf("%d",&val);

            push(val);
            break;
        case 2:
            x=pop();
            if(x!=-1)
            {
                printf("\n Value Deleted is : %d",x);
            }
            break;
        case 3:
            x=peek();
            if(x!=-1)
            {
                printf("\n Topmost Value of Stack is : %d",x);
            }
            break;
        case 4:
            printf("\n Enter Index :");
            scanf("%d",&i);

            printf("\n Enter New value to be updated :");
            scanf("%d",&x);
            update(i,x);
            break;
        case 5:
            display();
            break;
        case 6:
            printf("\n Exiting..");
            break;
        default:
            printf("\n Invalid Choice..");
            break;
        }
    }
    while(op!=6);
}

void push(int val)
{
    if(top == MAX -1)
    {
        printf("\n Stack Overflow..");


    }
    top = top+1;
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
int peek()
{
    if(top == -1)
    {
        printf("\n Stack is Empty..");
        return -1;
    }
        return stack[top];
}
void update(int i, int x)
 {
    if(top-i+1<=-1)
    {
        printf("\n Invalid Index..");
        return;
    }
    stack[top-i+1]=x;

}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\n Stack is Empty..");
        return;
    }
    for(i=top;i>=0;i--)
    {
        printf("\n %d",stack[i]);
    }
}


