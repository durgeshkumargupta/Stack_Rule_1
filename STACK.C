#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define max 5
int top=-1; /* Global varible */
int stack[max];  /* Global varible */
int push(int top,int data)  /* Push_Data  */
{
   if(top==(max-1))
   {
     printf("Stack is full");
     sleep(2);
   }
   else
   {
      top++;
      stack[top]=data;
   }
   return top;
}
/* POP stack data */
int pop()
{
   int i;
   if(top==-1)
   {
     printf("Stack is empty");
     sleep(2);
   }
   else
   {
     i=stack[top--];
     printf("popped data=%d",i);
   sleep(2);
   }
   return top;
}
/* Display stack data  */
void display(int top)
{
     int i;
    if(top==-1)
    {
      printf("Stack is empty");
      sleep(2);
    }
    else
    {
       for(i=top;i>=0;i--)
       {
	 printf("%3d",stack[i]);
       }
       sleep(2);
    }
}
/* Main Function Definition  */
void main()
{
       int ch,data;
       while(1)
       {
	 clrscr();
	 printf("Stack menu\n");
	 printf("1.push\n");
	 printf("2.pop\n");
	 printf("3.Display\n");
	 printf("0.exit\n");
	 printf("Enter your choice=");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	   case 1:
	     printf("Enter data=");
	     scanf("%d",&data);
	     top=push(top,data);break;
	  case 2:
	      top=pop();
	      break;
	  case 3:
	       display(top);break;
	  case 0:exit(0);
	 default:printf("invalid input plz try again");sleep(3);
	 }
      }
}

