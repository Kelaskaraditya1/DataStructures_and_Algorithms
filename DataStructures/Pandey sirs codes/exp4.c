#include<stdio.h>
int Q[20],size=20,f=-1,r=-1,i,choice,val,a,b,c;
int empty()
{
    if((r==-1)||(f>r))
    return 1;
    else 
    return 0; 
}
int full()
{
    if(r==(size-1))
    return 1;
    else
    return 0;
}
void enque(int a)
{
    if(full())
    printf("Queue is Full\n");
    else
    {
        if((r==-1)&&(f==-1))
        {
            Q[++r]=a;
            f++;
        }
        else
        Q[++r]=a;
    }
}
int dequeue()
{
    int val;
    if(empty())
    printf("Queue is Empty\n");
    else
    {
        val=Q[f++];
        return val;

    }
}
void display()
{
    if(empty())
    printf("Queue is Empty\n");
 else
    {
        for(i=f;i<=r;i++)
        {
            printf("%d\n",Q[i]);
        }
    }
}
int main()
{
    while(choice!=6)
    {
        printf("Enter Your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the value to be entered in the Queue\n");
            scanf("%d",&val);
            enque(val);
            break;
            case 2:
            a=dequeue();
            printf("The value dequeued from the Queue is %d\n",a);
            break;
            case 3:
            display();
            break;
            case 4:
            b=full();
            if(b==1)
            printf("Queue is Full\n");
            else
            printf("Queue is not Full\n");
            break;
            case 5:
            c=empty();
            if(c==1)
            printf("Queue is Empty\n");
            else
            printf("Queue is not Empty\n");
            break;
            case 6:
            break;
        }
    }
    return 0;
}