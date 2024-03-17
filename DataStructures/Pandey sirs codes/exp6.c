#include<stdio.h>
#include<stdlib.h>
int choice,val1,val2;
struct node
{
    int data;
    struct node*next;
};
struct node *start=NULL;
void createsll(int val)
{
    struct node *nn,*tn;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=val;
    nn->next=NULL;
    if(start==NULL)
    start=nn;
    else
    {
        tn=start;
        while(tn->next!=NULL)
        tn=tn->next;
        tn->next=nn;
    }
}
void insertbeg(int val)
{
    struct node *nn,*tn;
    if(start==NULL)
    printf("No linkedlist \n");
    else
    {
        nn=(struct node*)malloc(sizeof(struct node));
        nn->data=val;
        nn->next=start;
        start=nn;
    }
}
void display()
{
    struct node *tn,*nn;
    if(start==NULL)
    printf("No linkedlist \n");
    else
    {
        int i=1;
        tn=start;
        while(tn!=NULL)
        {
            printf("The value at the %d position is %d \n",i++,tn->data);
            tn=tn->next;
        }
    }
}
int main()
{
    while(choice!=4)
    {
        printf("Enter Your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter the value to be entered in the linkedlist \n");
            scanf("%d",&val1);
            createsll(val1);
            break;
            case 2:
            printf("Enter the value to be entered at the beginning of the linkedlist \n");
            scanf("%d",&val2);
            insertbeg(val2);
            break;
            case 3:
            display();
            break;
            case 4:
            break;
        }
    }
    return 0;
}

