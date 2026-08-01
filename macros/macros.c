
// #include <stdio.h>
// #define SIZE 10
// #define PI 3.14

// void fun(void)
// {
//     printf("PI inside fun() = %.2f\n", PI);
// }

// int main()
// {
//     printf("\n=========================================\n");
//     printf("Example 1 : Simple Macro\n");
//     printf("=========================================\n");

//     printf("PI = %.2f\n", PI);
//     fun();
//     printf("SIZE = %d\n", SIZE);

//     //=====================================================

//     printf("\n=========================================\n");
//     printf("Example 2 : Square Macro\n");
//     printf("=========================================\n");

//     #define square(a) ((a) * (a))

//     printf("Square of 5 = %d\n", square(5));

//     //=====================================================

//     printf("\n=========================================\n");
//     printf("Example 3 : Area of Circle\n");
//     printf("=========================================\n");

//     int r = 3;

//     printf("Area = %.2f\n", PI * r * r);

//     //=====================================================

//     printf("\n=========================================\n");
//     printf("Example 4 : Maximum Number\n");
//     printf("=========================================\n");

//     #define max(a,b) ((a) > (b) ? (a) : (b))

//     printf("Maximum = %d\n", max(1, 5));

//     //=====================================================

//     printf("\n=========================================\n");
//     printf("Example 5 : Even or Odd\n");
//     printf("=========================================\n");

//     #define even_odd(a) ((a) % 2 == 0 ? 1 : 0)

//     int result = even_odd(101);

//     if (result)
//         printf("Number is Even\n");
//     else
//         printf("Number is Odd\n");

//     //=====================================================

//     printf("\n=========================================\n");
//     printf("Example 6 : Swap Using Macro\n");
//     printf("=========================================\n");

//     int temp;
//     int x = 90;
//     int y = 67;

//     #define swap(a,b) (temp=(a),(a)=(b),(b)=temp)

//     printf("Before Swap : %d %d\n", x, y);

//     swap(x, y);

//     printf("After Swap  : %d %d\n", x, y);

//     //=====================================================

//     printf("\n=========================================\n");
//     printf("Example 7 : #ifdef\n");
//     printf("=========================================\n");

//     #ifdef SIZE
//         printf("SIZE is defined.\n");
//     #else
//         printf("SIZE is not defined.\n");
//     #endif

//     //=====================================================

//     printf("\n=========================================\n");
//     printf("Example 8 : #undef and #ifndef\n");
//     printf("=========================================\n");

//     #undef SIZE

//     #ifndef SIZE
//         printf("SIZE is not defined.\n");
//     #else
//         printf("SIZE is defined.\n");
//     #endif

//     //=====================================================

//     printf("\n=========================================\n");
//     printf("Example 9 : #ifndef\n");
//     printf("=========================================\n");

//     #ifndef SIZE
//         printf("SIZE is not defined.\n");
//     #else
//         printf("SIZE is defined.\n");
//     #endif

//     return 0;
// }

