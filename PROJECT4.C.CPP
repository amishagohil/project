#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float bs,hra,da,ta,gs;
	printf("enter bs=");
	scanf("%f",&bs);

	printf("enter hra=");
	scanf("%f",&hra);
	hra=bs*hra/100;

	printf("enter da=");
	scanf("%f",&da);
	da=bs*da/100;

	printf("enter ta=");
	scanf("%f",&ta);
	ta=bs*ta/100;

	gs=bs+hra+da+ta;
	printf("\ngross salary =%f",gs);

	getch();
	}