#include<stdio.h>
#include<string.h>
#include<ctype.h>
int i,top=-1,size=20,l,p=0,x,y,b;
char in[20],po[20],STK[20],op,a;
int priority(char n)
{
    switch(n)
    {
        case'+':
        case'-':
        return 1;
        break;
        case'*':
         case'/':
          case'%':
          return 2;
          break;
          case'(':
          case')':
          return 0;
          break;
    }
}
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
    printf(" Stak is full\n");
    else
    {
        top++;
        STK[top]=n;
    }

}
char pop()
{
    char b;
    if(empty())
    printf(" Stack is empty\n");
    else
    {
        b=STK[top];
        top--;
        return b;

    }
}
int main()
{
    printf(" Enter your Infix Expression\n");
    scanf("%s",in);
    l=strlen(in);
    for(i=0;i<l;i++)
    {
        op=in[i];
        if(isdigit(op))
        {
          po[p++]=op;
        }
        else
        {
            switch(op)
            {
                case'+':
                case'-':
                case'*':
                case'/':
                case'%':
                if(empty())
                push(op);
                else
                {
                    x=priority(op);
                    y=priority(STK[top]);
                    if((!empty())&&(x<=y))
                    {
                        po[p++]=pop();
                        push(op);
                    }
                    if((!empty())&&(x>y))
                    push(op);
                }
                break;
                case'(':
                push(op);
                break;
                case')':
             while(STK[top]!='(')
             {
                po[p++]=pop();
             }
            break;
        }

    }
    
}

while(!empty())
{
    b=pop();
    if(b=='(')
    continue;
    else
po[p++]=b;
}
    printf("The Postfix Expression is\n%s",po);
    return 0;
}