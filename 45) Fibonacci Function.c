#include<stdio.h>  
  
void fibonacciSeries(int);  
  
int main()  
{  
    int n;  
    printf("Enter the number of terms :\n");  
    scanf("%d", &n);  
    fibonacciSeries(n);  
    return 0;  
}  
  
void fibonacciSeries(int num)  
{  
    int n1=0,n2=1,n3,i;  
  
    printf("\nFibonacci Series: \n");  
    printf("%d\n%d\n",n1,n2);  
  
    for(i=2;i<num;i++)  
    {  
        n3=n1+n2;  
        printf("%d\n", n3);  
        n1 = n2;  
        n2 = n3;  
    }  
}  
