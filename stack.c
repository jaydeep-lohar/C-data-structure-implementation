#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define CAPACITY 5
void push();
int is_full();
void display();
int pop();
int peek();
int is_empty();
int stack[CAPACITY],top;
int main()
{

	int ch,i,pop_ele;
	top = -1;
	while(1)
	{
	printf(" \n Input your choice as below\n 1. Push \n 2. Pop \n 3. Peek \n 4. Display full stack \n 5. Isempty \n 6. Isfull \n 7. To exit \n \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
				push();
				display();
				break;
		case 2:
				pop_ele = pop();
				if(pop_ele == true)
				{

				}
				else
				{
					printf("The poped element is as %d \n", pop_ele); 
				}
				display();
				break;
		case 3:
				peek();
				break;
		case 4:
				display();
				break;
		case 5:
				printf("\n The stack is empty \n 1. True \n 0. false\n %d\n",is_empty());
				break;
		case 6:
				printf("\n The stack is full \n 1. True \n 0. false\n %d\n",is_full());
				break;
		case 7:
				exit(0);


		default :
				printf("Invalid option\n\n");
	}
	}
	return 0 ;
}
int peek()
{
	if(is_empty())
		printf("\n The stack is empty \n");
	else
		printf("\n The peek element is as %d \n",stack[top]);

}
int pop()
{
	int ele;
	if(is_empty())
	{
		// printf("%d\n",is_empty() );
		printf("Stack is underflowed\n");
		return true;
	}
	else
	{
		// printf("%d\n",is_empty() );
		ele = stack[top--];
		printf ("Top = %d \n", top);
		return ele;
	}
}
int is_empty()
{
	if(top == -1)
		return true;
	else
		return false;
}
void push( )
{
	int ele;
	if(is_full())
	{
		printf("Stack has been full\n");
	}
	else
	{	
		printf("Enter the element to push on stack\t");
		scanf("%d",&ele);
		top++;
		stack[top] = ele;
		printf("Element %d has been successfully pushed \n",ele);
		printf("top is upgraded to %d \n", top);
	}

}

int is_full()
{
	if(top == (CAPACITY -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void display()
{
	int i;
	if(is_empty())
	{
		printf("Stack is empty\n");
	}
	else
	{
	printf("\n");
	for(i=top+1; i--; i >= 0)
	{
		printf(" %d \n",stack[i]);
	}
	}
}