#include<stdio.h>
#include<stdlib.h>
#include<maths.h>
#define MAX_SIZE 10

int stack[MAX-SIZE],top=-1;

int isFull(){
//returns 1 if stack is full else return -1
if(!isFull)

	return (TOP==MAX-SIZE-1)?1:-1;
	else 
	return -1;
}

int isEmpty(){
//return 1 if stack is empty else returns -1
if(!isEmpty)
return(TOP==-1)?1:-1;
}

int peek(){
//return element at the top of stack
return stack[top];
}

void push(int e){
//inserts an element into stack
if(whether the stack is not full)
{
	increment the top
	set top of stack equal e
	msg element e successfully inserted
}
else{
	msf stack overflow
}
}

void pop(){
//deletes an element from top of stack
int d;
if(whether the stack is not empty)
{
	d=top of stack
	decrement the top
	msg element d successfully deleted
}
else{
	msg stack underflow
}
}
int main(){
	int choice,e;
	do 
	{
	 display menu 1.peek 2.push 3.pop 4.exit
	 printf("enter your choice");
	 take input in choice variable
	 switch(choice){
		 case 1:
		  //call peek function
		  break;
		 case 2:
		  //call push function
		  break;
		 case 3:
		  //call pop function
		  break;
		 case 4:
		  //call exit(0) function or return 0;
		 default:invalid choice
    }while

