#include <stdio.h>
#include <conio.h>
int ar(float ra);
int circ(float rc);

int main()
{
	float ra,rc;
	ar(ra);
	circ(rc);
	return 0;
}

	int ar(float ra)
	{
	float Area;
	printf("Enter The Radius:");
	scanf("%f",&ra);
	Area=3.14*ra*ra;
	printf("Area=%.2fcm\n",Area);
	return 0;
    }
    
    int circ(float rc)
	{
	float circ;
	printf("Enter the radius:");
	scanf("%f",&rc);
	circ=2*3.14*rc;
	printf("Circumference=%.2fcm\n",circ);
	return 0;
    }
    
