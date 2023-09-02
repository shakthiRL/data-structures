#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stk[size],i;
	void push()
	{
		int ele;
		printf("enter the ele");
		scanf("%d",&ele);
		if(top==size-1)
		printf("full");
		else
		top=top+1;
		stk[top]=ele;
}

void pop()
{
	int ele;
	if(top==-1)
	printf("empty");
	else
	ele=stk[top];
	top=top-1;
	printf("%d",ele);
	}
	
	void peek()
	{
		int ele;
	if(top==-1)
	printf("empty");
	else
	printf("enter the %d",stk[top]);
	}

void dis()
{
	int ele;
	if(top==-1)
	printf("empty");
	else{
		for(i=top;i>0;i--)
		printf("%d",stk[i]);
	}
}
	int main()
	{
		int cho;
		do{
			printf("***meanu***");
			printf("\n1.push");
			printf("\n2.pop");
			printf("\n3.peek");
			printf("\n4.dis");
			printf("\n5.exit");
			printf("enter ur choi");
			scanf("%d",&cho);
			
			switch(cho)
			{
				case 1:push(); break;
				case 2:pop(); break;
				case 3:peek(); break;
			 case 4:dis(); break;
			case 5:exit(0); 
			default:
				printf("enter 1to 5");
			}
		}
		while(cho>=0 && cho<=5);
	}

