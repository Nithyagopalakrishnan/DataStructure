#include<stdio.h>
int q[10],siz,front=-1,rear=-1,ch,data,i;
void enqueue();
void dequeue();
void display();
void main()
{
printf("enter the size");
scanf("%d",&siz);
printf("enter the choice\n1.Enqueue\n2.Dequeue\n3.Disply\n$.Exit");
do
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
 	break;
case 2:dequeue();
	break;
case 3:display();
	break;
case 4:printf("Exit");
	break;
default:printf("Invalid choice");
}
}
while(ch!=4);
}
void enqueue()
{
if(rear==siz-1)
{
printf("Queue is full");
}
else
{
printf("enter the data");
scanf("%d",&data);
rear++;
q[rear]=data;
}
}
void dequeue()
{
if(front==-1)
{
printf("Queue is empty");
}
else
{
printf("deleted data is:%d",q[front]);
front++;
}
}
void display()
{
if(rear==-1)
{
printf("Queue is empty");
}
else
{
printf("elements in queue:");
for(i=front;i<=rear;i++)
{
printf("\n %d",q[i]);
}
}
}

