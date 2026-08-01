//ex1
// #include<stdio.h>
// int main()
// {
// int a = 10;
// int *ptr = &a;
// printf("value of a is %d\n", a);
// printf("value of a through pointer is: %d\n", *ptr);
// printf("address of a is: %d\n", &a);
// printf("ptr hold the address of a :- %d\n", ptr);
//}


//ex2
//we can also update the pointer
// #include<stdio.h>
// int main()
// {
// int a = 10;
// int *ptr = &a;
// printf("value of a is %d\n", a);
// printf("value of a through pointer is: %d\n", *ptr);
// printf("address of a is: %d\n", &a);
// printf("ptr hold the address of a :- %d\n", ptr);

// *ptr = 99; /// update the vale of a through pointer
// printf("value of a is: %d\n", a);
// printf("value of a through pointer is: %d\n", *ptr);
// }


//ex3 Call by value
// #include <stdio.h>

// // Function to swap two numbers using Call by Value
// void swap(int a, int b)
// {
//     // These are the copied values received from main()
//     printf("Values before swapping:\n");
//     printf("a: %d\n", a);
//     printf("b: %d\n", b);

//     // Store the value of 'a' in a temporary variable
//     int temp = a;

//     // Copy the value of 'b' into 'a'
//     a = b;

//     // Copy the original value of 'a' (stored in temp) into 'b'
//     b = temp;

//     // Print the swapped values
//     // Swapping is visible only inside this function
//     printf("Values after swapping:\n");
//     printf("a: %d\n", a);
//     printf("b: %d\n", b);
// }

// int main()
// {
//     // Calling the swap() function
//     // Here, 10 and 99 are passed as copies (Call by Value)
//     swap(10, 99);

//     // The original values are not changed because
//     // only copies were swapped inside the function.

//     return 0;
// }


//ex4
// If we print after swapping not immdiate after temp declaration
//so it will not print
// #include <stdio.h>

// void swap(int a, int b)
// {
//     printf("values before swapping:\n");
//     printf("a: %d\n", a);
//     printf("b: %d\n", b);

//     int temp = a;
//     a = b;
//     b = temp;

   
// }

// int main()
// {   int a=10;
//     int b=99;
//     swap(a, b);
//     printf("values after swapping:\n");
//     printf("a: %d\n", a);
//     printf("b: %d\n", b);
//     return 0;
// }

//ex5 Call by refrence 
//so now we can print after swapping variables anywhere
//immidiate after swapping or in int main as well
//because we call variable through pointer 
//so it carries the address 
// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     printf("values before swapping:\n");
//     printf("a: %d\n", *a);
//     printf("b: %d\n", *b);

//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 99;

//     swap(&a, &b);

//     printf("values after swapping:\n");
//     printf("a: %d\n", a);
//     printf("b: %d\n", b);

//     return 0;
// }


//ex6
// #include <stdio.h>

// int main()
// {
//     int a = 10;

//     // Void pointer stores the address of an integer variable.
//     // It does not know that the data is of type int.
//     void *ptr = &a;

//     // Convert the void pointer to an int pointer
//     // and then access the value stored at that address.
//     printf("%d", *(int *)ptr);

//     return 0;
// }

//ex7
//wild pointer
// #include <stdio.h>
// int main()
// {
//     int *ptr;    // Wild pointer (not initialized)

//     printf("%p\n", ptr);   // Garbage address
//     // printf("%d", *ptr); // Don't do this! Undefined behavior

//     return 0;
// }

//ex8
//null pointer
// #include <stdio.h>
// int main() 
// {
// int *ptr = NULL; /// create the null ptr
// printf("%d\n", ptr); /// it hold zero
// printf("%d", *ptr); //// derefrance the null ptr
// ///segmentation fault
// }

//ex9 
//   Dangling Pointer
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {

//     int *ptr = (int *)malloc(sizeof(int));

//     *ptr = 10;

//     printf("%p\n", (void *)ptr);
//     printf("%d\n", *ptr);

//     free(ptr);

//     // Pointer still stores the old address
//     printf("%p\n", (void *)ptr);

//     // Dereferencing after free() is undefined behavior.
//     // It may print a garbage value or crash.
//     printf("%d\n", *ptr);

//     return 0;
// }

//ex10
 // Constant Pointer Example
// #include <stdio.h>

// int main()
// {


//     int a = 10;
//     int b = 90;

//     // ptr is a constant pointer to an integer.
//     // The address stored in ptr cannot be changed.
//     int *const ptr = &a;

//     // Print the value of 'a' using the pointer.
//     printf("%d\n", *ptr);

//     // We can change the value stored at the address.
//     *ptr = 99;

//     // Print the updated value using the pointer.
//     printf("%d\n", *ptr);

//     // The original variable is also updated.
//     printf("%d\n", a);

//     // Not allowed:
//     // ptr = &b;    // Error
//     // Because ptr is a constant pointer and
//     // cannot store the address of another variable.

//     return 0;
// }

//ex11
//pointer pointed to constant variable 
// #include <stdio.h>

// int main()
// {
//   //// pointer pointed to the const var
// int a = 10;
// int b = 90;
// const int *ptr = &a;
// printf("%d\n", ptr);
// printf("%d\n", *ptr);
// //*ptr = 78; /// var is const cant update the var using ptr
// ptr = &b; //// update ptr // now it hold the address of b
// }

//ex12
//if pointer and variable both will be constan//then we will get error we can't able to //change anything
// #include <stdio.h>
// int main()
// {
// int a = 10;
// int b = 20;
// const int *const ptr = &a;
// // ptr=&b;///error /// ptr is const
//  //*ptr=99;// error /// var is also const
// printf("%d\n", *ptr);
// printf("%d\n", ptr);
// printf("%d\n", &a);
// }

//ex13
//what is meant by functionn pointer
// #include<stdio.h>
// int add(int a,int b)
// {
//     return a+b;
// }
// int sub (int a, int b)
// {
//     return a-b;

// }
// int main()
// {
//     int (*fp) (int,int);//declare
//     fp=add;//fptr init
//     int r=add(10,9);
//     printf("addition of num is:-%d\n",r);
//     fp=sub;
//     r=sub(34,4);
//     printf("substraction of num is:- %d",r);
// }