#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int e){
	if(top+1==N){
		printf("\n STACK is full");
	}
	else{
		top=top+1;
		stack[top]=e;
	}
}

void pop(){
	if(top==-1){
		printf("\n Stack is empty");
	}
	else{
		printf("\n Pop %d",stack[top]);
		top=top-1;
	}
}

void peek(){
	if(top==-1){
		printf("\n STACK is empty");
	}
	else{
		printf("\n Top element %d",stack[top]);
	}
}

void main(){
	push(10);
	push(20);
	push(30);
	pop();
	peak();
	pop();
	pop();
	
}
