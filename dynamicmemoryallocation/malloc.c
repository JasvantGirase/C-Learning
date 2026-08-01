//ex1
//Method 1: Using Pointer Arithmetic ((ptr + i)->member)
// DMA Array of Structure using Pointer Arithmetic

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct student
// {
//     int roll;
//     char name[10];

// } stu;

// int main()
// {
//     int n = 3;

//     // Allocate memory for 3 student structures
//     stu *ptr = (stu *)malloc(n * sizeof(stu));

//     if (ptr == NULL)
//     {
//         printf("Memory allocation failed");
//         return 1;
//     }

//     printf("Memory allocation successful\n");

//     // Input
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEnter Roll No: ");
//         scanf("%d", &((ptr + i)->roll));

//         printf("Enter Name: ");
//         scanf("%s", (ptr + i)->name);
//     }

//     // Output
//     printf("\nStudent Details\n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("\nRoll = %d", (ptr + i)->roll);
//         printf("\nName = %s\n", (ptr + i)->name);
//     }

//     free(ptr);

//     return 0;
// }


//ex2
// DMA Array of Structure using Array Indexing

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct student
// {
//     int roll;
//     char name[10];

// } stu;

// int main()
// {
//     int n = 3;

//     // Allocate memory for 3 student structures
//     stu *ptr = (stu *)malloc(n * sizeof(stu));

//     if (ptr == NULL)
//     {
//         printf("Memory allocation failed");
//         return 1;
//     }

//     printf("Memory allocation successful\n");

//     // Input
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEnter Roll No: ");
//         scanf("%d", &ptr[i].roll);

//         printf("Enter Name: ");
//         scanf("%s", ptr[i].name);
//     }

//     // Output
//     printf("\nStudent Details\n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("\nRoll = %d", ptr[i].roll);
//         printf("\nName = %s\n", ptr[i].name);
//     }

//     free(ptr);

//     return 0;
// }