#include<stdio.h>
int a[10],max,choice,data,top=-1,i;
void push();
void pop();
void display();
void main()
{
printf("enter the size");
scanf("%d",&max);
printf("OPERATIONS ARE:\n 1.PUSH \n 2.POP \n 3.Display \n 4.Exit");
do
{
printf("\nenter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:{
       push();
       break;
       }
case 2:
{
       pop();
       break;
       }
case 3:
	{
	display();
       break; 
}
case 4:{
	printf("exit");
       break;
       } 
default:
      printf("invalid choice");       
}
}
while(choice!=4);
}
void push()
{
if(top==max-1)
{
  printf("stack overflow");
  }
else
{
printf("enter the data");
scanf("%d",&data);
top++;
a[top]=data;
 }}           
 void pop()
 {
 if(top<=-1)
 {
 printf("stack is underflow");
 }
 else
 {
 printf("the deleted data is:%d",a[top]);
 top=top-1;
 }
 }
 void display()
 {
 if(top>=0)
 {
 printf("element in stack");
 for(i=top;i>=0;i--)
 {
 printf("\n%d",a[i]);
 }
 }
 }
