// //ex1(assignment method)
// #include <stdio.h>
// #include <string.h>

// struct info
// {
//     int roll;
//     char name[10];
//     float marks;
// } i1;

// int main()
// {
//     // Assignment method
//     i1.roll = 10;
//     i1.marks = 95.99;
//     strcpy(i1.name, "archana");

//     // Display
//     printf("Roll number of student is: %d\n", i1.roll);
//     printf("Name of student is: %s\n", i1.name);
//     printf("Marks of student is: %.2f\n", i1.marks);

//     return 0;
// }


//ex 2(intializer method)
// #include <stdio.h>

// struct info
// {
//     int roll;
//     char name[10];
//     float marks;
// }i1;

// int main()
// {
//     struct info i1 = {20, "mona", 90.89};//we can declare new i2 or other here itself 

//     printf("Roll: %d\n", i1.roll);
//     printf("Name: %s\n", i1.name);
//     printf("Marks: %.2f\n", i1.marks);

//     return 0;
// }


//ex 3
//user designated method+array of structure 
// #include <stdio.h>

// struct student
// {
//     int roll;
//     char name[20];
//     float marks;
// };

// int main()
// {
//     struct student s[4];

//     printf("Enter the info of students:\n");

//     for (int i = 0; i < 4; i++)
//     {
//         printf("\nEnter the info of %d student\n", i + 1);

//         printf("Enter the roll number of student: ");
//         scanf("%d", &s[i].roll);

//         printf("Enter the name of student: ");
//         scanf("%s", s[i].name);

//         printf("Enter the marks of student: ");
//         scanf("%f", &s[i].marks);
//     }

//     printf("\nInformation of students:\n");

//     for (int i = 0; i < 4; i++)
//     {
//         printf("\nInformation of %d student\n", i + 1);

//         printf("Name of student: %s\n", s[i].name);
//         printf("Roll number of student: %d\n", s[i].roll);
//         printf("Marks of student: %.2f\n", s[i].marks);
//     }

//     return 0;
// }

//ex4
// #include <stdio.h>

// // Structure definition
// struct emp
// {
//     char name[10];   // Character array to store employee name
//     int ID;          // Employee ID
//     int sal;         // Employee salary
// };

// // Function declaration
// // This function accepts one structure variable of type 'struct emp'
// void display(struct emp e);

// int main()
// {
//     // Structure variable 'e1' is created and initialized
//     // "mona" goes to name
//     // 5 goes to ID
//     // 70000 goes to sal
//     struct emp e1 = {"mona", 5, 70000};

//     // Passing the entire structure variable to the function
//     display(e1);

//     return 0;
// }

// // Function definition
// // 'e' is a copy of the structure variable 'e1'
// void display(struct emp e)
// {
//     // Accessing structure members using the dot (.) operator
//     printf("Name of emp : %s\n", e.name);

//     // Printing employee ID
//     printf("ID of emp : %d\n", e.ID);

//     // Printing employee salary
//     printf("Salary of emp : %d\n", e.sal);
// }

//ex5 print data whose salary is more
// #include <stdio.h>

// struct emp
// {
//     char name[20];
//     int ID;
//     int sal;
// };

// void display(struct emp e[3]);

// int main()
// {
//     struct emp e[3];

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter name of employee %d: ", i + 1);
//         scanf("%s", e[i].name);

//         printf("Enter ID: ");
//         scanf("%d", &e[i].ID);

//         printf("Enter salary: ");
//         scanf("%d", &e[i].sal);
//     }

//     display(e);

//     return 0;
// }

// void display(struct emp e[3])
// {
//     int max = e[0].sal;
//     int index = 0;

//     for (int i = 0; i < 3; i++)
//     {
//         if (e[i].sal > max)
//         {
//             max = e[i].sal;
//             index = i;
//         }
//     }

//     printf("\nInformation of employee with highest salary\n");
//     printf("Name of emp is: %s\n", e[index].name);
//     printf("ID of emp is: %d\n", e[index].ID);
//     printf("Salary of emp is: %d\n", e[index].sal);
// }

//ex 6 copy the structure
//structure copy into another structure
// #include <stdio.h>

// struct emp
// {
//     char name[20];
//     int ID;
//     int sal;
// };

// int main()
// {
//     struct emp e1 = {"chandu", 9, 50000};
//     struct emp e2;

//     e2 = e1;   // assign e1 to e2

//     printf("name of emp is : %s\n", e2.name);
//     printf("ID of emp is : %d\n", e2.ID);
//     printf("sal of emp is : %d\n", e2.sal);

//     return 0;
// }


//ex7
//modify(we took same previous example)

// #include <stdio.h>

// struct emp
// {
//     char name[20];
//     int ID;
//     int sal;
// };

// int main()
// {
//     struct emp e1 = {"chandu", 9, 50000};
//     struct emp e2;

//     e2 = e1;   // assign e1 to e2

//     e2.ID = 10;//modify

//     printf("name of emp is : %s\n", e2.name);
//     printf("ID of emp is : %d\n", e2.ID);
//     printf("sal of emp is : %d\n", e2.sal);

//     return 0;
// }

//ex8
//structure padding concept
// #include <stdio.h>
// struct ID
// {
// int a;
// char c;
// } s1;
// int main()
// {
// int s=sizeof(s1);
// printf("%d", s);
// }


//ex9 
//structure padding concept
// #include <stdio.h>
// struct ID
// {
// char s;
// int a;
// char c;
// } s1;
// int main()
// {
// int s=sizeof(s1);
// printf("%d", s);
// }


//ex10
// #include <stdio.h>
// struct ID
// {
// char s;
// double  a;
// char c;
// } s1;
// int main()
// {
// int s=sizeof(s1);
// printf("%d", s);
// }



//ex11
//to minimize padding,we use pragma concept
// #include <stdio.h>
// #pragma pack(1)
// struct ID
// {
// int a;
// char c[6];
// int b;
// } s1;
// int main()
// {
// int s =sizeof(s1);
// printf("%d", s);
// }

//ex12
// #include <stdio.h>
// #pragma pack(2)
// struct ID
// {
// int a;
// char c[7];
// int b;
// } s1;
// int main()
// {
// int s =sizeof(s1);
// printf("%d", s);
// }


//ex13
// #include <stdio.h>

// // Pack the structure with 1-byte alignment.
// // In this program, it does not change the size because
// // all members are of type int.
// #pragma pack(1)

// // Structure definition
// struct ID
// {
//     int x;   // First integer member
//     int y;   // Second integer member
//     int z;   // Third integer member
// };

// int main()
// {
//     // Create a structure variable 's1'
//     // and initialize its members.
//     // x = 78
//     // y = 0
//     // z = 23
//     struct ID s1 = {78, 0, 23};

//     // Access structure members using the dot (.) operator
//     // and print their values.
//     printf("%d %d %d", s1.x, s1.y, s1.z);

//     return 0;
// }


//ex14
// #include <stdio.h>
// #pragma pack(1)
// struct ID
// {
// int x, y, z;
// };
// int main()
// {
    
// struct ID s1 ={.y=78,.z= 0, .x=23};
// printf("%d %d %d ", s1.x, s1.y, s1.z);
// }


//ex15
//structure in structure
// #include <stdio.h>
// struct student
// {
// char n[10];
// struct abc
// {
// int roll;
// char s[5];
// }a1;
// } s1;
// int main()
// {
// s1.a1.roll = 90;
// printf("%d\n", s1.a1.roll);
// printf("%d\n", sizeof(s1));
// }

//note :similarly we can declare sturecture in union,union in sturcturre and union in union

//ex16
// #include <stdio.h>

// struct student
// {
//     short int n[5];

//     union abc
//     {
//         float d;
//         long long int n;
//     } a1;

// } s1;

// int main()
// {
//     printf("%zu\n", sizeof(s1));
//     return 0;
// }

//ex17
//union in sturcture
// #include <stdio.h>

// union abc
// {
//     int a;

//     struct student
//     {
//         int roll;
//         char s;
//     } s1;

// } u1;

// int main()
// {
//     u1.a = 90;
//     u1.s1.roll = 3;
//     u1.s1.s = 'm';

//     printf("%d\n", u1.a);
//     printf("%d\n", u1.s1.roll);
//     printf("%c\n", u1.s1.s);
//     printf("%zu\n", sizeof(u1));

//     return 0;
// }



//ex18
// we declare two diff structure
// #include <stdio.h>

// struct book
// {
//     char author[10];
//     char name[10];
//     int price;
// };

// struct shirt
// {
//     char color[10];
//     int size;
//     int price;
// };

// int main()
// {
//     struct book b1 = {"abc", "xyz", 100};
//     struct shirt s1 = {"white", 40, 500};

//     printf("Shirt info:-\n");
//     printf("Color is: %s\n", s1.color);
//     printf("Size is: %d\n", s1.size);
//     printf("Price is: %d\n\n", s1.price);

//     printf("Book info:-\n");
//     printf("Book name is: %s\n", b1.name);
//     printf("Author name is: %s\n", b1.author);
//     printf("Price is: %d\n", b1.price);

//     return 0;
// }