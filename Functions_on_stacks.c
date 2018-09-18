#include<stdio.h>


//These are the functions of the stacks..you can call every and each of following functions in main function to work..
	int stack[8];
	int top=-1;
	int x;
	int max=8;
	int count = 0;
	int top;

int isEmpty(int x);
int isFull(int x);
int peek(int x);
int pop(int x);
int push(int x);
int getSize(int x);
int outPut(int x);


	


int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);



	isEmpty(x);



}


int isEmpty(int x)
{
	if(top==-1){
		printf("Stack is Empty:\n");
	}

	else{
		printf("Stack is not empty");
	}
}


int isFull(int x)
{
	if(top==top-1)
	{
		printf("Stack is full:\n");
	}

	else
	{
		printf("Satck is not full:\n");
	}
}

int peek(int x)
{
	if(top==-1)
	{
		printf("Stack is empty:");
	}

	else
	{
		printf("The value is:\t");
			{
				printf("%d\n",stack[top]);
			}	
	}
}


int pop(int x)
{
	if(top==-1)
	{
		printf("Stack under flow:\n");
	}

	else
	{
		int num=stack[top];
		printf("popped element is %d",stack[top]);
		top=top-1;
	}
}


int push(int x)
{
	if(top==max-1)
	{
		printf("Stack is overflow:\n");
	}

	else
	{
		top=top+1;
		stack[top] = x;
		printf("The pushed number is %d\n",stack[top]);
	}
}


int getSize(int x)
{
	
	for (int i = 0; i < top; ++i)
	{
		count=count+1; 
	}

	printf("size of the stack is %d\n",count);

}

int outPut(int x)
{
	for (int i = 0; i < top; ++i)
	{
		printf("stack element %d is %d",i+1,stack[i]);
	}
}
