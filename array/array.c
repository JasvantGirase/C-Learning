//print elements in array as it is
// #include<stdio.h>
// int main()
// {   int i;
//     int arr[10]={10,20,30,40};
//     for(i=0;i<=3;i++)
//     {
//         printf(" %d",arr[i]);
//     }
// }

////ex2 access variable by using indexing

// #include<stdio.h>
// int main()
// {   int i;
//     int arr[10]={10,20,30,40};
  
//         printf("%d",arr[0]);
  
// }


//ex3 update the variable
// #include<stdio.h>
// int main()
// {   int i;
//     int arr[10]={10,20,30,40};
//     for(i=0;i<=3;i++)
//     {   arr[0]=15;
//         printf("%d ",arr[i]);
//     }
// }


//ex4 we can also take array from user as a ip
// #include <stdio.h>
// int main()
// {
//     int arr[7];//array declare
//     printf("enter the 7 number in array :-");
//     for(int i = 0;i<=6;i++)
//     {
//         scanf("%d ",&arr[i]);// array intialization
//     }
//     printf("array element are :-");
//     for (int i=0;i<7;i++) // print array using loop
//     {
//         printf("%d ",arr[i]);
//     }
// }

//ex5  it store the garbage if we don't declare array
// #include<stdio.h>
// int main()
// {
// char arr[10]; /// declare array
// /// access the value
// for (int i = 0; i < 10; i++)
// {
// printf("%d ", arr[i]);
// /// it store the garbage
// }
// }

//ex6
// #include <stdio.h>
// int main()
// {
// char arr[10]={4,5}; /// declare array and init partially
// /// access the value
// for (int i = 0; i < 10; i++)
// {
// printf("%d ", arr[i]); //unintialized element store the zero 

// }
// }


//ex7
// #include <stdio.h>
// int main()
// {
// char arr[10]={4,5}; /// declare array and init partially
// /// access the value
// for (int i = 0; i < 10; i++)
// {
// printf("%d  ", &arr[i]); //address increment by 1

// }
// }


//ex8
// #include <stdio.h>
// int main()
// {
// int a[5]={1,2,3,4,5};
// int b[5]={};
// for (int i=0;i<5;i++)
// {
//     b[i]=a[i];

// }
// printf("copied array is:");
// for(int i=0;i<5;i++)
// {
//     printf("%d ",b[i]);
// }
// }


//ex9 merging of two array
//method 1
// #include <stdio.h>
// int main()
// {
// int a[5] = {1, 2, 3, 4, 5};
// int b[5] = {6, 7, 8, 9, 0};
// int c[10];
// for (int i = 0; i < 5 ; i++)
// {
// c[i] = a[i];
// }
// for (int i = 0 ;i < 5; i++)
// {
// c[i + 5] = b[i] ;
// }
// for (int i = 0 ;i < 10 ;i++)
// {
// printf("%d ", c[i]);
// }
// }

//merge 2
// #include <stdio.h>
// int main()
// {
// int a[10] = {1, 2, 3, 4, 5};
// int b[5] = {6, 7, 8, 9, 0};
// for (int i=0;i <5;i++)
// {
//     a[i+5]=b[i];

// }
// for (int i=0;i<10;i++)
// {
// printf("%d",a[i]);
// }
// }



//ex10
// search the element in array and if found ,print its index

// #include <stdio.h>

// int main()
// {
//     int arr[10] = {4, 6, 5, 1, 2, 3, 9, 8, 8, 7};
//     int s;//search
//     int f = 0;// flag

//     printf("Enter the number that you want to search in array: ");
//     scanf("%d", &s);

//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] == s)
//         {
//             printf("%d number found at %dth index\n", s, i);
//             f = 1;
//         }
//     }

//     if (f == 0)
//     {
//         printf("%d element not found at any location.\n", s);
//     }

//     return 0;
// }


//ex11 asc and desc
// #include <stdio.h>

// int main()
// {
//     int arr[10] = {4, 6, 5, 1, 2, 3, 9, 0, 8, 7};
//     int i, j;

//     for (i = 0; i < 10; i++)
//     {
//         for (j = i + 1; j < 10; j++)
//         {
//             if (arr[i] < arr[j])//for ascending just change this
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     printf("Sorted array (descending order):\n");

//     for (i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }



//ex12
//take one array,diffrentiate even and odd no and store it in seperate even array and seperate odd array

// #include <stdio.h>

// int main()
// {
//     int arr[10] = {4, 6, 5, 1, 2, 3, 9, 0, 8, 7};
//     int even[10];
//     int odd[10];

//     int even_index = 0;
//     int odd_index = 0;

//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             even[even_index] = arr[i];
//             even_index++;
//         }
//         else
//         {
//             odd[odd_index] = arr[i];
//             odd_index++;
//         }
//     }

//     printf("Even array is: ");
//     for (int i = 0; i < even_index; i++)
//     {
//         printf("%d ", even[i]);
//     }

//     printf("\nOdd array is: ");
//     for (int i = 0; i < odd_index; i++)
//     {
//         printf("%d ", odd[i]);
//     }

//     return 0;
// }


//ex13
//delete element from array using index
// #include <stdio.h>

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};

//     int index = 2;   // Delete element at index 2 (value 3)

//     for (int i = index; i < 4; i++)
//     {
//         arr[i] = arr[i + 1];
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d ", arr[i]);
//     }


//ex14 delete element from array using element
// #include <stdio.h>

// int main()
// {
//     int arr[5] = {1, 22, 83, 41, 57};
//     int index;

//     for (int i = 0; i < 4; i++)
//     {
//         if (arr[i] == 22)
//         {
//             index = i;
//         }
//     }

//     for (int i = index; i < 4; i++)
//     {
//         arr[i] = arr[i + 1];
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
 
//ex15 Insert the element
// #include <stdio.h>

// int main()
// {
//     int index = 3;
//     int arr[6] = {1, 22, 83, 41, 57};

//     // Shift elements to the right
//     for (int i = 5; i > index; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     // Insert new value
//     arr[index] = 99;

//     // Print array
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


//ex16 2d array example
// #include <stdio.h>

// int main()
// {
//     int arr[2][2] = {{1, 2}, {7, 9}};

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



//ex17 2d array onemore example

// #include <stdio.h>

// int main()
// {
//     int arr[3][2] = {{1, 2}, {7, 9},{23,88}};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



//ex 18 2 d array,this time we take ip from user
// #include <stdio.h>

// int main()
// {
//     int arr[3][2];

//     printf("Enter the array elements:\n");

//     // Input
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("Array elements are:\n");

//     // Output
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }




//ex19  addition of 2d array
// #include <stdio.h>

// int main()
// {
//     int a[3][3], b[3][3];

//     printf("Enter elements of first matrix (3x3):\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter elements of second matrix (3x3):\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }

//     printf("\nFirst matrix is:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nSecond matrix is:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nAddition of two matrices:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", a[i][j] + b[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


//ex20 check whether matrix is null or not
// #include <stdio.h>

// int main()
// {
//     int a[3][3];
//     int f = 0;  // flag for non-zero element

//     printf("Enter the elements:\n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Matrix elements are:\n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", a[i][j]);

//             if (a[i][j] != 0)
//             {
//                 f = 1;
//             }
//         }
//         printf("\n");
//     }

//     if (f == 0)
//     {
//         printf("Matrix is NULL (all elements are 0)\n");
//     }
//     else
//     {
//         printf("Matrix is NOT NULL\n");
//     }

//     return 0;
// }

//ex21
//transpose of matrix
// #include <stdio.h>

// int main()
// {
//     int a[3][3];

//     printf("Enter the matrix elements:\n");

//     // Input matrix
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Display original matrix
//     printf("\nMatrix elements are:\n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     // Display transpose
//     printf("\nTranspose of matrix is:\n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", a[j][i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


//ex22
// #include <stdio.h>

// int main()
// {
//     int a[5], b[5];

//     printf("Enter 5 array elements:\n");

//     // Input original array
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     // Copy array a to array b
//     for (int i = 0; i < 5; i++)
//     {
//         b[i] = a[i];
//     }

//     // Print original array
//     printf("\nOriginal array is: ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     // Print copied array
//     printf("\nCopied array is: ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", b[i]);
//     }

//     printf("\n");

//     return 0;
// }

//ex 28
/// compare 2 array
// #include <stdio.h>

// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     int b[5] = {1, 2, 3, 4};

//     int f = 0;

//     // Compare arrays
//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] != b[i])
//         {
//             f = 1;
//             break;
//         }
//     }

//     if (f == 0)
//     {
//         printf("Both arrays are same.\n");
//     }
//     else
//     {
//         printf("Both arrays are different.\n");
//     }

//     return 0;
// }
