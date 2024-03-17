 #include<stdio.h>
#include<stdlib.h>
int val1,val2,choice;
struct node
{
    int data;
    struct node*next;
};
struct node *start=NULL;
void createcsll(int val)
{
    struct node *nn,*tn;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=val;
    nn->next=start;
    if(start==NULL)
    start=nn;
    else
    {
        tn=start;
        while(tn->next!=NULL)
        tn=tn->next;
        tn->next=nn;
        nn->next=start;
    }
}
void insbeg(int val)
{
    struct node *tn,*nn;
    if(start==NULL)
    printf("No Linkedlist \n");
    else
    {
        nn=(struct node*)malloc(sizeof(struct node));
        nn->data=val;
        nn->next=start;
        while(tn->next!=start)
        tn=tn->next;
        tn->next=nn;
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
        while(tn->next!=start)
        printf("the value at %d postion is %d \n",i++,tn->data);
         printf("the value at %d postion is %d \n",i++,tn->data);
        
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
            createcsll(val1);
            break;
            case 2:
            printf("Enter the value to be entered at the beginning of the linkedlist \n");
            scanf("%d",&val2);
            insbeg(val2);
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
}
}