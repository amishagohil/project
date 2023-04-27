#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float a,b,c;
	printf("the first number=");
	scanf("%f",&a);
	printf("the second number=");
	scanf("%f",&b);

	c=a;
	a=b;
	b=c;

	printf("\nswapping the first number=%f",a);
	printf("\nswapping the second number=%f",b);
	getch();
	}

