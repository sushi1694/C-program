#include <stdio.h>
int main()
{
	int n,i;
	float n[100],sum=0.0,avg;
	
	printrf("Enter the numbers of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d.-Enter the number:",i+1);
		scanf("%f",&num[i]);
		sum = sum + num[i]; 
    }
    
    avg=sum/n;
    printf("Average=%.2f",avg);
    return 0;
}
