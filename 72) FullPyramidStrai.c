#include <stdio.h>
int main()
{
    int i, space, rows, j = 0;
    printf("Enter the number of rows: \n");
    scanf("%d", &rows);
    
    for (i=1;i<=rows;++i)
    {
        for (space=1; space<=rows-i;++space)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}
