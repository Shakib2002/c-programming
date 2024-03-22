// Write a program to find the maximum between two numbers.

// #include<stdio.h>
//  int main()
//  {
//     int num1,num2;
//     scanf("%d%d",&num1,&num2);

//     if(num1>num2)
//     {
//         printf("The Maximum number is: %0.2d\n", num1);
//     } 
//     else if (num2>num1)
//     {
//         printf("The Maximum number is: %0.2d\n", num2);
//     }
//     else{
//         printf("Bought number are Equal.\n");
//     }
//   return 0;
//  }


// Write a program to find the maximum between three numbers.

// #include<stdio.h>
//  int main()
//  {
//     int num1,num2,num3;
//     scanf("%d%d%d",&num1,&num2,&num3);

//     if(num1>num2 && num1>num2)
//     {
//         printf("Num1 is Maximum: %d\n",num1);
//     }
//     else if(num2>num3 && num2>num1)
//     {
//         printf("Num2 is Maximum: %d\n",num2);
//     }
//     else
//     {
//         printf("Num3 is Maximum: %d\n",num3);
//     }
//   return 0;
//  }


// Write a program to check whether a number is even or odd.

// #include<stdio.h>
//  int main()
//  {
//     int number;
//     scanf("%d",&number);

//     if(number % 2 == 0)
//     {
//         printf("%d is even\n",number);
//     } 
//     else
//     {
//         printf("%d is Odd\n",number);
//     }
//   return 0;
//  }


// Write a program that takes a student's score as input and then assigns a letter grade (A, B, C, D, or F) based on the score. For example, scores above 90 might be an "A," scores between 80 and 89 could be a "B," and so on

// #include<stdio.h>
//  int main()
//  {
//     int score;
//     char grade;
//     scanf("%d",&score);
     
//      if(score>=90)
//      {
//         grade= 'A';
//      }
//      else if(score>=80)
//      {
//         grade= 'B';
//      }
//      else if(score>=70)
//      {
//         grade= 'C';
//      }
//      printf("The Student Grade is: %c\n",grade);

        
//   return 0;
//  }

// Write a program that checks if a given year is a leap year or not. Leap years are those that are divisible by 4, except for years divisible by 100 but not divisible by 400

// #include<stdio.h>
//  int main()
//  {
//     int year;
//     scanf("%d",&year);

//     if((year % 4==0 && year % 100 != 0) || (year % 400==0))
//     {
//         printf("%d is a Leap year.\n",year);
//     } 
//     else
//     {
//         printf("%d is not a leap year.\n",year);
//     }
//   return 0;
//  }

// Create a program that reads an integer and determines whether it is positive, negative, or zero.

// #include<stdio.h>
//  int main()
//  {
//     int num;
//     scanf("%d",&num);

//     if(num>0)
//     {
//         printf("The Number is Positive.\n");
//     }
//     else if(num<0)
//     {
//         printf("The Number is Negative.\n");
//     }
//     else
//     {
//         printf("The Number is Zero.\n");
//     }

//   return 0;
//  }

//  Write a C program to input electricity unit charges and calculate the total electricity bill according to the given condition:
// For the first 50 units, Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

// #include<stdio.h>
//  int main()
//   {
     
//         float units, totalBill;
//         scanf("%f",&units);

//         if(units <= 50)
//         {
//             totalBill = units*0.50;
//         }
//         else if(units <= 150)
//         {
//             totalBill = 50*0.50 + (units-50)*0.75;
//         }
//         else if(units <= 250)
//         {
//             totalBill = 50*0.50 + 100*0.75+(units-150)*1.20;
//         }
//         else
//         {
//             totalBill = 50*0.50 + 100*0.75 + 100*1.20 + (units-250)*1.50;
//         }

//         totalBill += 0.2 * totalBill;
//         printf("Total Electricity Bill: Rs. %f\n",totalBill);
    
//   return 0;
//  }


