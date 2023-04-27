#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float cel,fah;

	printf("celsius tem. =");
	scanf("%f",&cel);

	fah= (cel*9/5)+32;

	printf("celsius to fahren.=%.2f",fah);
	getch();
	}
