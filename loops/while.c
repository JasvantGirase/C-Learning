//ex1
// #include <stdio.h>

// int main()
// {
//     int i = 1;

//     while(i != 100)
//     {
//         printf("%d ", i);
//         i++;
//     }
// }


//ex2 printing the reverse of a number using a while loop.
// #include <stdio.h>

// int main()
// {
//     int num = 123;

//     while(num != 0)
//     {
//         int rem = num % 10;
//         printf("%d", rem);
//         num = num / 10;
//     }

//     return 0;
// }

//ex3 even no between 1 to 100;
// #include <stdio.h>

// int main()
// {
//     int i = 0;

//     while(i <= 100)
//     {
//         if(i % 2 == 0)
//         {
//             printf("%d ", i);
//         }

//         i++;
//     }

//     return 0;
// }



//ex4 fibonacci
// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 1;

//     printf("%d%d", a, b);

//     for(int i = 0; i < 10; i++)
//     {
//         int c = a + b;
//         printf("%d", c);
//         a = b;
//         b = c;
//     }
// }


//ex5 armstrong no
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num, originalNum, r;
//     int sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalNum = num;

//     while (num != 0)
//     {
//         r = num % 10;          // Get the last digit
//         sum = sum + pow(r, 3); // Cube the digit and add to sum
//         num = num / 10;        // Remove the last digit
//     }

//     printf("Sum = %d\n", sum);

//     if (sum == originalNum)
//     {
//         printf("%d is an Armstrong number.\n", originalNum);
//     }
//     else
//     {
//         printf("%d is not an Armstrong number.\n", originalNum);
//     }

//     return 0;
// }



//ex 6
//infinite llop in while
// #include <stdio.h>
// int main()
// {
//     while (1)
//     {
//         printf("hello");
//     }
// }