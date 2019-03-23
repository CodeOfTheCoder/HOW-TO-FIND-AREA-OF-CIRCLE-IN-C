//How to find Area Of Circle in C Language.

//There are Two Methods to define pi.

#include<stdio.h>
#include<conio.h>
//#define pi 3.14  //This is the Methods to define pi
void main()
{
	int radius;
	float pi=3.14; //This is the second method to define pi...
	float area_of_circle;
	clrscr();
	printf("\nEnter Radius::");
	scanf("%d",&radius);

	area_of_circle=pi * radius * radius;
	printf("\nArea Of Circle = %f",area_of_circle);

	getch();
}

//Thanks for watching...
//Please Like Share nd Subscribe...