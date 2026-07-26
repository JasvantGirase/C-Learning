//ex1 string declration and defination
// #include<stdio.h>
// int main()
// {
//  char str[]={"jassi"};
//  printf("string is %s",str);
// }

 //ex2 sizeof
// #include<stdio.h>
// int main()
// {
//  char str[]={"pune"};
//  printf("string is %d",sizeof(str));
// }

//ex3
// #include<stdio.h>
// int main()
// {
//  char str[]={'P','u','n','e'};
//  printf("string is %d",sizeof(str));
// }

//ex4 take ip of string from user
// #include<stdio.h>
// int main()
// {
//     char str[20];
//     printf("enter string  :");
//     scanf("%s",&str);
//     printf("string is %s",str);
// }


//ex5 take ip of string from user and 
//we also want the string after space
//method 1
// #include <stdio.h>

// int main()
// {
//     char str[20];

//     printf("Enter string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("String is: %s", str);

//     return 0;
// }


//method 2

// #include<stdio.h>
// int main()
// {   
//     char str[20];
//     printf("enter the string");
//     scanf("%[^\n]s",&str);
//     printf("string is:%s",str);
// }  

//ex6
//length of string
// #include<stdio.h>
// int main()
// {
//     int c=0;
//     int i=0;
//     char str[]="jassi";
//     while(str[i]!='\0')
//     {
//         c++;
//         i++;
//     }
//     printf("length is %d",c);
// }


//ex7
//copy the string
// #include<stdio.h>
// int main()
// {
//     char str1[20];
//    char str2[]="jassi";
//     int i=0;
//     while(str2[i]!='\0')
//     {
//         str1[i]=str2[i];
//         i++;
//     }
//     printf("str 1 is %s",str1);
// }


//ex8 check whether string is equal or not
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     int f=0;
//     char str1[]={"jassi"};
//         char str2[]={"jassi"};
//         if (sizeof(str1)==sizeof(str2))
//         {
//         while(str1[i]!='\0')
//         {
//             if(str1[i]!=str2[i])
//             {
//                 f=1;
//                 break;
                
//             }
//             i++;
//         }
//         if (f==0)
//         {
//             printf("strings are equal");
//         }
//         else
//         {
//                         printf("strings are not equal");

//         }
//         }
// }



//ex9 reverse a string
// #include<stdio.h>
// int main()
// {
//     char str[5]={"jassi"};
//     int i;
//     for (i=4;i>=0;i--)
//     {
//         printf(" %c",str[i]);
//     }
    
// }

//method 2
// #include <stdio.h>

// int main()
// {
//     char str[7] = "techno";

//     int start = 0;
//     int end = 5;

//     while (start < end)
//     {
//         char temp = str[end];
//         str[end] = str[start];
//         str[start] = temp;

//         start++;
//         end--;
//     }

//     printf("%s\n", str);

//     return 0;
// }



//ex 10 concatation of string
// #include<stdio.h>
// int main()
// {
//  char str1[20]="jasvant ";
//  char str2[]="girase";
//  int i=0;
//  while(str1[i]!='\0')
//  {
//      i++;
//  }
//  int j=0;
//  while(str2[j]!=0)
//  {
//      str1[i]=str2[j];
//      i++;
//      j++;
//      str1[i] = '\0';
//  }
//  printf("concanated string is %s",str1);
// }


//ex11 check how much character,special symbol and number in the string
// #include <stdio.h>

// int main()
// {
//     char str[] = "J@svaNt 1";
//     int i = 0;
//     int specialsymbol = 0;
//     int num = 0;
//     int character = 0;

//     while (str[i] != '\0')
//     {
//         if ((str[i] >= 'A' && str[i] <= 'Z') ||
//             (str[i] >= 'a' && str[i] <= 'z'))
//         {
//             character++;
//         }
//         else if (str[i] >= '0' && str[i] <= '9')
//         {
//             num++;
//         }
//         else
//         {
//             specialsymbol++;
//         }

//         i++;
//     }

//     printf("Count of characters = %d\n", character);
//     printf("Count of numbers = %d\n", num);
//     printf("Count of special symbols = %d\n", specialsymbol);

//     return 0;
// }

//ex12 In a string,checck how much are consonent and how much are vowels
// #include <stdio.h>

// int main()
// {
//     char str[] = "TechnoScripts123@";
//     int i = 0, vowel = 0, consonant = 0;

//     while (str[i] != '\0')
//     {
//         if ((str[i] >= 'A' && str[i] <= 'Z') ||
//             (str[i] >= 'a' && str[i] <= 'z'))
//         {
//             if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
//                 str[i] == 'o' || str[i] == 'u' ||
//                 str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
//                 str[i] == 'O' || str[i] == 'U')
//             {
//                 vowel++;
//             }
//             else
//             {
//                 consonant++;
//             }
//         }

//         i++;
//     }

//     printf("Vowels = %d\n", vowel);
//     printf("Consonants = %d\n", consonant);

//     return 0;
// }


//ex13
//check the how many words are there in string
// #include<stdio.h>
// int main()
// {
//     char str[]="techno scripts embedded pune";
// int i=0;
// int c=0;;
// while(str[i]!= '\0')
// {
// if(str[i]==' ')
// {
// c++;
// }
// i++;
// }
// printf("%d",c+1);
// }


//now we will perform coding by using library function

//ex14
//copy
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "embedded";
//     char cpy[20];          // Destination array

//     printf("Original string = %s\n", str);

//     strcpy(cpy, str);      // Copy source to destination

//     printf("Copied string = %s\n", cpy);

//     return 0;
// }


//ex15
//compare
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "embedded";
//     char st[] = "embedded";

//     int res = strcmp(str, st);

//     if(res == 0)
//     {
//         printf("Both strings are equal");
//     }
//     else
//     {
//         printf("Both strings are different");
//     }

//     return 0;
// }

//ex 16 
//concatation
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[20] = "embedded ";
//     char st[] = "system";

//     strcat(str, st);

//     printf("%s", str);

//     return 0;
// }


//ex17
//string length
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "embedded";

//     int len = strlen(str);

//     printf("Length = %d", len);

//     return 0;
// }

//ex18
//reverse string
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "embedded";

//     strrev(str);

//     printf("%s", str);

//     return 0;
// }