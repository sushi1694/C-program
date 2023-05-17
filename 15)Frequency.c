#include <stdio.h>
int main()
{
    char str[1000],ch,ip;
    int count=0;
    
    printf("Enter a Word:");
    fgets(str,sizeof(str),stdin);

    printf("Enter a character:");
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        {
          count++;
        }
        
    }   
     printf("Frequency = %d",count);
     return 0;

    }
