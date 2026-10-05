#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop(),opt,item;
void display();
do
{
printf("\n1.push \n2.pop \n3.display \n4.exit \n\n");
printf("your option:");
scanf("%d",&opt);
switch(opt)
{
case1:printf("Enter item:");
scanf("%d",&item);
push(item);
break;
case2:item=pop();
if(item!=-999)
printf("popped value=%d\n",item);
break;
case3:display();
break;
case4:exit(0);
}
}
while(1);
}
void push(int x)
{
if(sp==SIZE-1)
{
printf("stack is full \n");
return;
}
else
{
stk[++sp]=x;
return;
}
}
int pop()
{
if(sp==-1)
{
printf("stack is empty\n");
return-999;
}
else
{
return stk[sp--];
}
}
void display() 
{
if(sp==-1)
printf("The stack is empty:\n");
else
printf("The stack elements are:\n");
for(int i=sp; i>=0; i--)
{
printf("%d \n",stk[i]);
}
}
















