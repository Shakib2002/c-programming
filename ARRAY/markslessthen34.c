#include<stdio.h>
 int main()
 {
     int marks[10]={95,90,31,25,100,50,20,89,17,30};
     
       for(int i=0; i<10; i++)
       {
        if(marks[i]>35)
        {
            // printf("%d ",marks[i]); //marks
            printf("%d ",i); //index
        }
       }
  return 0;
 }