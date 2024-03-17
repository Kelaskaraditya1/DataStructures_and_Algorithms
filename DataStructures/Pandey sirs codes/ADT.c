#include<stdio.h>
#include<stdlib.h>
int i,f=-1,r=-1,size=20,Q[20],choice,a,k,J,n;
int full()
{
	if(r==(size-1))
	return 1;
	else
	return 0;
}
int empty()
{
	if(f==-1&&r==-1)
	return 1;
	else
	return 0;
}
int enque(int n)
{
	
		printf("Enter the value to be entered in the Queue\n");
		scanf("%d",&n);
	if(full())
	printf("Queue is full\n");
	else
	Q[++r]=n;
}
int deque()
{
	int n;
	if(empty())
	printf("Queue is empty\n");
	else
	{
		n=Q[++f];
		return n;
	}
}
void display()
{
	for(i=0;i<=r;i++)
	{
		printf("%d\n",Q[i]);
	}
}
int main()
{
    	printf("\n1.enque\n2.deque\n3.is Queue Full\n4.is Queue Empty\n5.Display\n6.Exit\n");
do
{
		printf("Enter your choice\n");
			scanf("%d",&choice);
	switch(choice)
	{
		case'1':
		enque(n);
		break;
		case'2':
		a=deque();
		printf("The dequed value from the Queue is: %d\n",a);
		break;
		case'3':
		k=full();
		if(k==1)
		printf("Queue is Full\n");
		else
		printf("Queue is not Full\n");
		break;
		case'4':
		J=empty();
		if(J==1)
		printf("Queue is Empty\n");
		else
		printf("Queue is not Empty\n");
		break;
		case'5':
		display();
		break;
		case'6':
		break;
}
}
while(choice!=7);
return 0;
}