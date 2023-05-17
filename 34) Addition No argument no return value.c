#include <stdio.h>
#include <conio.h>

void sum(int a,int b);
void diff(int c,int d);
void prod(int e,int f);
void div(int g,int h);

int main()
{
	sum(25,33);
	diff(44,22);
	prod(26,89);
	div(45,9);
	return 0;
}

void sum(int a,int b)
{
	int sum;
	sum=a+b;
	printf("Sum = %d",sum);
}
void diff(int c,int d)
{
	int diff;
	diff=c-d;
	printf("Difference = %d",diff);
}
void prod(int e,int f)
{
	int prod;
	prod=e*f;
	printf("Product = %d",prod);
}
void div(int g,int h)
{
	int div;
	div=g/h;
	printf("Division = %d",div);
}
