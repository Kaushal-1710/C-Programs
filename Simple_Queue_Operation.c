#include <stdio.h>
#define MAX 5
int front=-1,rear=-1;
int queue[MAX];

void insert();
void delete_ele();
void display();

void main()
{

    int op;
    do
    {
        printf("\n 1. insert");
        printf("\n 2. delete");
        printf("\n 3. display");
        printf("\n 4. exit");



            printf("\n enter your choice : ");
            scanf("%d" ,&op);


        switch (op)
        {


        case 1:
            insert();
            break;
        case 2:
            delete_ele();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n we are exited....");
            break;
        default :
            printf("\n invalid choice has entered....");
            break;
}

    }   while (op!=4);
    }
    void insert()
    {

        int num;
        printf("\n enter value: ");
        scanf("%d",&num);

        if (rear==MAX-1)
        {
            printf("\n queue is overflow....");
            return;
        }
        else if(front==-1 && rear==-1)
        {
            front=rear=0;

        }
        else
        {
            rear++;

        }
        queue[rear]=num;
        printf("\ value enter is : %d",num);

        }

        void delete_ele()
        {


         int val;
         if (front==-1)
         {

             printf("\n queue is underflow...");
             return;

         }
            val=queue[front];
            printf("\n deleted value is : %d",val);

            if(front==rear)
            {

                front=rear=-1;
            }
            else
            {
                front++;
            }


        }
        void display()
        {

        if (front==-1)
        {
            printf("\n queue is empty...");
            return;

        }
        for (int i=front;i<=rear;i++)
        {

            printf("\t %d",queue[i]);
        }
        }
