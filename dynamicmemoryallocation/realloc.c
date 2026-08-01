// Simple Example of realloc() with Array of Structure

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct student
// {
//     int roll;
//     char name[20];
// } stu;

// int main()
// {
//     // Allocate memory for 2 students
//     stu *ptr = (stu *)malloc(2 * sizeof(stu));

//     // Assign values
//     ptr[0].roll = 101;
//     sprintf(ptr[0].name, "Rahul");

//     ptr[1].roll = 102;
//     sprintf(ptr[1].name, "Amit");

//     printf("Before realloc()\n");
//     for (int i = 0; i < 2; i++)
//     {
//         printf("Roll = %d\tName = %s\n", ptr[i].roll, ptr[i].name);
//     }

//     // Increase memory from 2 students to 4 students
//     ptr = (stu *)realloc(ptr, 4 * sizeof(stu));

//     // Assign values to new students
//     ptr[2].roll = 103;
//     sprintf(ptr[2].name, "Priya");

//     ptr[3].roll = 104;
//     sprintf(ptr[3].name, "Neha");

//     printf("\nAfter realloc()\n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Roll = %d\tName = %s\n", ptr[i].roll, ptr[i].name);
//     }

//     free(ptr);

//     return 0;
// }