  #include<stdio.h>
  #include<string.h>
  #include<ctype.h>
  int l,x,y,a,b,temp,c,top=-1,size=20,STK[20],i;
  char PO[20];
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
    printf("Stack is full\n");
    else
    {
        top++;
        STK[top]=n;
    }
}
int pop()
{
    int x;
    if(empty())
    printf("Stack is empty\n");
    else
    {
      
         
         x=STK[top];
         top--;
         return x;
    }
}
int main()
{
    printf("Enter your Postfix expression\n");
    scanf("%s",PO);
    l=strlen(PO);
    for(i=0;i<l;i++)
    {
        x=PO[i];
        if(isdigit(x))
        {
          y=(x-48);
            push(y);
            
        }
        else
        {
      a=pop();
        b=pop();
            switch(x)
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
               case'%':
             temp=b%a;
             push(temp);
             break;  
            }
        }
    }
    printf("The evalluated value of Postfix expression is : %d\n",pop());
    return 0;
}
