//ex1
//print hello 10 times
// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<10;i++)
//     {
//         printf("hello\n ");
//     }
// }


//ex2 print table of 7
// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         printf("table of 7 is %d\n ",7*i);
//     }
// }


//ex3 print only even number between 20 to 60
//logic 1
// #include<stdio.h>
// int main()
// {
//     for(int i=20;i<=60;i=i+2)
//     {   
        
//             printf("\n%d ",i);
    
//     }
// }

//logic2
// #include<stdio.h>

// int main()
// {
//     printf("Even numbers between 20 and 60 are:\n");

//     for(int i = 20; i <= 60; i++)
//     {
//         if(i % 2 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }


//ex4 print reverse from 100 to 10
// #include<stdio.h>
// int main()
// {
//     for(int i=100;i>=10;i--)
//     {   
        
//             printf("%d\n ",i);
    
//     }
// }

//ex5 sum of natural no from 1 to 5
// #include<stdio.h>
// int main()
// {   int sum=0;
//     for(int i=1;i<=5;i++)
//     {   
//         sum=sum+i;
//     }
//         printf(" %d\n",sum);

// }

//ex6 factorial of 5
// #include<stdio.h>
// int main()
// {   int fact=1;
//     for(int i=1;i<=5;i++)
//     {   
//         fact=fact*i;
//     }
//         printf(" %d\n",fact);

// }

//ex6 find factors of any number
// #include<stdio.h>

// int main()
// {
//     int num = 45;

//     printf("Factors of %d are:\n", num);

//     for(int i = 1; i <= num; i++)
//     {
//         if(num % i == 0)
//         {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }


//ex7 how many factors are there?
// #include<stdio.h>
// int main()
// {   int num=45;
//     int factor=0;
//     for(int i=1;i<=num;i++)
//     {   
//      if (num%i==0)
//         factor++;
//     }
//         printf(" %d\n",factor);

// }

//ex8 check whether no is prime or not
// #include<stdio.h>
// int main()
// {   int num=5;
//     int factor=0;
//     for(int i=1;i<=num;i++)
//     {   
//      if (num%i==0)
//         factor++;
//     }
//         printf(" %d\n",factor);
//     if(factor==2)
//     {
//         printf(" %d  is prime number",num);
//     }
//     else
//     {
//                 printf(" %d  is not prime  number",num);

//     }
// }


//ex 9 Print all prime numbers between 1 and 100
// #include <stdio.h>

// int main()
// {
//     int c;

//     for (int i = 1; i <= 100; i++)
//     {
//         c = 0;

//         for (int j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 c++;
//             }
//         }

//         if (c == 2)
//         {
//             printf("%d ", i);
//         }
//     }

//     printf("\n");

//     return 0;
// }



//ex 10 find no of digits

//#include <stdio.h>
// int main()
// {
//     int num;
//     int c = 0;

//     printf("Enter the number: ");
//     scanf("%d", &num);

//     for(int i = num; i != 0; i = i / 10)
//     {
//         c++;
//     }

//     printf("Number of digits = %d", c);

//     return 0;
// }


//ex 11 reverse the digits
// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Enter the number: ");
//     scanf("%d", &num);

//     for(int i = num; i != 0;)
//     {
//         int rem = i % 10;
//         i = i / 10;
//                 printf("%d", rem);

//     }

//     return 0;
// }


//ex 12 check whether number is palindrome or not
// #include <stdio.h>
// int main()
// {
//     int num=123;
//     int org=num;
//     int rev=0;
//     for(;num!=0;)
//     {
//         int rem = num  % 10;
//          rev=rev * 10+rem;
//         num=num/10;
//     }
//     printf("reverse no is :%d\n",rev);
//     printf("original no is:%d\n",org);
//     if( org==rev)
//     {
//         printf("number is palindrome");  
//     }
//     else
//     {
//         printf("number is  not palindrome");  

//     }
// }
