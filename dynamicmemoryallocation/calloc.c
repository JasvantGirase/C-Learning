// Dynamic Memory Allocation (DMA) for Array of Structures

// #include <stdio.h>
// #include <stdlib.h>

// // Structure definition
// typedef struct student
// {
//     int roll;          // Student Roll Number
//     char name[10];     // Student Name (Maximum 9 characters + '\0')

// } stu;

// int main()
// {
//     int n = 3;   // Number of students

//     // Allocate memory for 3 student structures.
//     // calloc(number_of_elements, size_of_each_element)
//     // Here:
//     // number_of_elements = n = 3
//     // size_of_each_element = sizeof(stu)
//     // calloc() initializes all memory with 0.
//     stu *ptr = (stu *)calloc(n, sizeof(stu));

//     // Check whether memory allocation is successful
//     if (ptr == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     else
//     {
//         printf("Memory allocation successful\n");
//     }
// }

    