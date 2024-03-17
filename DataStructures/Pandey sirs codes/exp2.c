#include<stdio.h>
#include<string.h>
#include<ctype.h>
int top=-1,size=20,p=0,l,x,y,i;
char in[20],po[20],STK[20],ip,a;
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
void push(char n)
{
    if(full())
    printf("Stack is Full\n");
    else
    {
        STK[++top]=n;
    }
}
char pop()
{
    if(empty())
    printf("Stack is empty\n");
    else
    {
        char n;
        n=STK[top--];
        return n;
    }
}
int priority(char n)
{
    switch(n)
    {
        case'(':
        case')':
        return 0;
        break;
        case'+':
        case'-':
        return 1;
        break;
        case'*':
         case'/':
         case'%':
        return 2;
        break;
    }
}
int main()
{
    printf("Enter Your Infix Expression\n");
    scanf("%s",in);
    l=strlen(in);
    for(i=0;i<l;i++)
    {
        ip=in[i];
        if(isdigit(ip))
        po[p++]=ip;
        else
        {
            switch(ip)
            {
                case'(':
                push(ip);
                break;
                case')':
                while(STK[top]!='(')
                po[p++]=pop();
                break;
                case'+':
                 case'-':
                  case'*':
                   case'/':
                    case'%':
                    if(empty())
                    push(ip);
                    else
                    {
                        x=priority(ip);
                        y=priority(STK[top]);
                        if((!empty())&&(x<y))
                        {
                            po[p++]=pop();
                            push(ip);
                        }
                        if((!empty())&&(x>y))
                        push(ip);
                    }
                    break;
            }
        }
    }
    while(!empty())
    {
        a=pop();
        if(a=='(')
        continue;
        else
        po[p++]=a;
    }
    printf("The Postfix Expression is %s\n",po);
    return 0;
}