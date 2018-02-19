#include<stdio.h>
int main()
{
int num;
printf("Enter any number:\n");
scanf("%d",&num);
if(num>0)
{
printf("positive number");
}
else if(num<0)
{
printf("negative number");
}
else
   printf("number is zero");
return 0;
}
