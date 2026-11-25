#include<stdio.h>
int main()
{
int x,y;
printf("enter number for x variable");
scanf("%d",&x);
printf("enter number for y variable");
scanf("%d",&y);
if(x>y)
printf("the value of x=%d is  greater then y=%d",x,y);
else if(y>x)
printf("the value of y=%d is  greater then x=%d",y,x);
else
printf("The value of x and y is equal");
return 0;
}