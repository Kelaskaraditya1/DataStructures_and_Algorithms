#include<stdio.h>
int STK[20],size=20,top=-1,choice,val,po,x,y;
int empty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
int full()
{
    if(top==(size-1))
    return 1;
    else 
    return 0;
}
void push(int n)
{
    if(full())
    printf("Stack is empty\n");
    else
    {
        STK[++top]=n;
    }
}
int pop()
{
    int n;
    if(empty())
    printf("Stack is empty\n");
    else
    {
        n=STK[top--];
        return n;
    }
}
void STKTOP()
{
    if(empty())
    printf("Stack is empty\n");
    else
    printf("%d is present at the top of the Stack \n",STK[top]);
}
void display()
{
    int i;
    if(empty())
    printf("Stack is empty\n");
    else
    {
        for(i=top;i>=-1;i--)
        printf("%d\n",STK[i]);
    }
}
int main()
{
    while(choice!=7)
    {
    printf("Enter Your Choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the data to be pushed into the stack\n");
        scanf("%d",&val);
        push(val);
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        STKTOP();
        break;
        case 5:
        x=full();
        if(x==1)
        printf("Stack is Full\n");
        else
        printf("Stack is not Full\n");
        break;
        case 6:
        y=empty();
        if(y==1)
        printf("Stack is empty\n");
        else
        printf("Stack is not empty\n");
        break;
        case 7:
        break;
    }
    }
    return 0;
}