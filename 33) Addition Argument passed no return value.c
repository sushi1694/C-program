#include <stdio.h>
#include <conio.h>
void ar(float ra);
void cir(float rc);

int main()
{
	float ra,rc;
	ar(ra);
	cir(rc);
}

void ar(float ra)
{
	float Area;
	printf("Enter The Radius:");
	scanf("%f",&ra);
	Area=3.14*ra*ra;
	
	printf("Area=%.2fcm\n",Area);
}

void cir(float rc)
{
	float circ;
	printf("Enter the radius:");
	scanf("%f",&rc);
	circ=2*3.14*rc;
	
	printf("Circumference=%.2fcm\n",circ);
}
