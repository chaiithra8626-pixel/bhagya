//1
/*
#include <stdio.h>
void main()
{
int a,b,sum;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
sum=a+b;
printf("The sum of two numbes is: %d",sum);
}
*/

//2

/*
#include<stdio.h>
void main()
{
float area,r;
printf("Enter the radius of circle");
scanf("%f",r);
area=3.14*r*r;
printf("The radius of the circle is: %f",r);
printf("The area is: %f",area);
return 0;
}
*/

//3

/*
#include<stdio.h>
int factorial(int n)
{
if(n==1)
return 1;
else
return (n*factorial(n-1));
}
void main()
{
int n,fact;
printf("Enter a number:");
scanf("%d",&n);
fact = factorial(n);
printf("/nfactorial of given number=%d",fact);
}
*/

//4

#include<stdio.h>
void main()
{
int age;
printf("Enter the age:");
scanf("%d",&age);
if(age>=18)
printf("Eligible of voting");
else
printf("Not eligible");
}
