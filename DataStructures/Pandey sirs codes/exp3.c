#include<stdio.h>
#include<string.h>
#include<ctype.h>
int a,b,temp,top=-1,size=20,l,i;
char po[20],STK[20],ip;
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
int main()
{
    printf("Enter the postfix Expression\n");
    scanf("%s",po);
    l=strlen(po);
    for(i=0;i<l;i++)
    {
        ip=po[i];
        if(isdigit(ip))
        {
            ip=ip-48;
            push(ip);
        }
        else
        {
            a=pop();
            b=pop();
            switch(ip)
            {
                case'+':
                temp=b+a;
                push(temp);
                break;
                case'-':
                temp=b-a;
                push(temp);
                break;
                case'*':
                temp=b*a;
                push(temp);
                break;
                case'/':
                temp=b/a;
                push(temp);
                break;
            }
        }
    }
    printf("The Evaluated value of the Postfix Expression is %d",STK[top]);
    return 0;
}


