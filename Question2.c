#include <stdio.h>

int main()
{
    int department;
    int theory, practical, attendance;
    int theoryRequired, practicalRequired, attendanceRequired;
    int distinction;
    int remainder;

    printf(" UNIVERSITY EXAMINATION RESULT SYSTEM \n");

    printf("\nSelect Department:\n");
    printf("1. Computer Science\n");
    printf("2. Electrical Engineering\n");
    printf("3. Business Administration\n");
    printf("4. Mathematics\n");
    printf("Enter department: ");
    scanf("%d", &department);

    printf("\nEnter Theory Marks: ");
    scanf("%d", &theory);

    printf("Enter Practical Marks: ");
    scanf("%d", &practical);

    printf("Enter Attendance Percentage: ");
    scanf("%d", &attendance);

    switch (department)
    {
        case 1:
            theoryRequired = 50;
            practicalRequired = 40;
            attendanceRequired = 75;
            break;

        case 2:
            theoryRequired = 55;
            practicalRequired = 45;
            attendanceRequired = 75;
            break;

        case 3:
            theoryRequired = 50;
            practicalRequired = 35;
            attendanceRequired = 80;
            break;

        case 4:
            theoryRequired = 60;
            practicalRequired = 40;
            attendanceRequired = 75;
            break;

        default:
            printf("Invalid department.\n");
            return 0;
    }

    if (theory >= 85 && practical >= 80 && attendance >= 90)
    {
        distinction = 1;
    }
    else
    {
        distinction = 0;
    }

    remainder = theory % 3;

    printf("\n FINAL RESULT REPORT \n");

    switch (department)
    {
        case 1:
            printf("Department: Computer Science\n");
            break;

        case 2:
            printf("Department: Electrical Engineering\n");
            break;

        case 3:
            printf("Department: Business Administration\n");
            break;

        case 4:
            printf("Department: Mathematics\n");
            break;
    }

    printf("Theory Marks: %d\n", theory);
    printf("Practical Marks: %d\n", practical);
    printf("Attendance: %d%%\n", attendance);

    printf("\nPassing Requirements:\n");
    printf("Theory: %d\n", theoryRequired);
    printf("Practical: %d\n", practicalRequired);
    printf("Attendance: %d%%\n", attendanceRequired);

    printf("\nDistinction: %s\n",
           distinction ? "Eligible" : "Not Eligible");

    switch (remainder)
    {
        case 0:
            printf("Seat Category: A\n");
            break;

        case 1:
            printf("Seat Category: B\n");
            break;

        case 2:
            printf("Seat Category: C\n");
            break;
    }

    printf("Final Result: %s\n",
           (theory >= theoryRequired &&
            practical >= practicalRequired &&
            attendance >= attendanceRequired)
           ? "Passed" : "Failed");

    return 0;
}