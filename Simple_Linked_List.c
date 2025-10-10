#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
void create_ll();
void display();

void main()
{
    int op;
    do
    {
        printf("\n\n***Main Menu***");
        printf("\n 1: Create a list");
        printf("\n 2: Display a list");
        printf("\n 3: Exit..");

        printf("\n\n Enter a option:");
        scanf("%d",&op);

        switch(op)
        {
        case 1:
            create_ll();
            printf("\n Linked list created...");
            break;
        case 2:
            display();
            break;
        case 3:
            printf("\n Exiting...");
            break;
        default:
            printf("\n Invalid Choice...");
            break;
        }
    }while(op!=3);

}
void create_ll()
{
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter a -1 to end.");
    printf("\n Enter a data: ");
    scanf("%d",&num);
    while(num!=-1)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node -> data = num;
        if(st)
    }
}
void display()
{

}
