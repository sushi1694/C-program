include <stdio.h>

int main(void) 
{
    int students, teaching_staff, non_teaching_staff, total_users;

    
    printf("Enter the number of student users: ");
    scanf("%d", &students);

   
    printf("Enter the number of teaching staff users: ");
    scanf("%d", &teaching_staff);

   
    non_teaching_staff = teaching_staff / 3;

    
    total_users = students + teaching_staff + non_teaching_staff;

    
    printf("Number of student users: %d\n", students);
    printf("Number of teaching staff users: %d\n", teaching_staff);
    printf("Number of non-teaching staff users: %d\n", non_teaching_staff);
    printf("Total number of users: %d\n", total_users);

    return 0;
}
