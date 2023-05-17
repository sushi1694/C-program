#include <stdio.h>
struct Avalue
{
	char name[100];
	
}v;

int main()
{
	printf("Enter your name:  ");
	fgets(v.name,sizeof(v.name),stdin);

	//Displaying A-Value
	printf("\n Your name is :");
	printf("%s",v.name);
	return 0;
}
