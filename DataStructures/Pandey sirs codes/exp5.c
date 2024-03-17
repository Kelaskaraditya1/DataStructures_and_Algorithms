#include<stdio.h>
int r=-1,f=-1,Q[20],size=20;
int empty()
{
    if((r==-1)&&(f==-1))
    return 1;
    else
    return 0;
}

void enque(int val)
{
    if((r==-1)&&(f==-1))
    {
        r++;
        f++;
        Q[r]=val;
    }
    else if(((r+1)%size)==0)
    printf("Queue is full\n");
    else
    {
        r=(r+1)%size;
        Q[r]=val;
    }
}
int deque()
{
    int val;
    if((r==-1)&&(f==-1))
    printf("Queue is empty\n");
    else if(f==r)
    {
      
        val=Q[0];
        f=-1;
        r=-1;
        return val;
    }
    else
    {
        f=(f+1)%size;
        val=Q[f];
        return val;
    }
}
void display()
{
    if(r==-1)
    printf("queue is empty\n");
     else
     {
         int i;
         printf("The elements in the Queue are\n");
         for(i=f;i<=r;i++)
         {
             printf("%d\n",Q[i]);
         }
     }
}
int main()
{
    int choice,val,a;
    while(choice!=4)
    {
    printf("Enter Your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the value to be entered in the Queue \n");
        scanf("%d",&val);
        enque(val);
        break;
        case 2:
        a=deque();
        printf("The value dequeued from the Queue is %d\n",a);
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