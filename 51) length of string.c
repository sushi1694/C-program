#include <stdio.h>
int main() {
    char s[100];
    int i;
    printf("Enter the string: ");
    fgets(s,sizeof(s),stdin);

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
