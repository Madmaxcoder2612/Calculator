#include<stdio.h>
#include<conio.h>
int main()
{
	int a=15;
	int* const p=&a;
	int b=30;
	int* const d=&b;
int	A= *p + *d ;
	printf("\n The value of A is %d",A);
	int *h = &A;
	A= *p + *d +5;
	printf("\n The Value of A is %d",*h);
}
