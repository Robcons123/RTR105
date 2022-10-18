#include<stdio.h>

int main()
 {
 if(1); //ieks () var buut "apalja" nulle vai bitu seciba kas satur
	//kaut vienu bitu ar 1

 int a = 10;
 if(a > 7) //a>7 -> 0000 0000  0000 0000  0000 0000  0000 0001
  printf("Viena darbiba, kas tiks izpidida, ja nosacijums speka.\n");

 if(a>7)
  {
   printf("Darbibu bloks, kas tiks izpildits.\n");
   printf("Pirma darbiba.\n");
   printf("Otra darbiba.\n");
  }
 if(a<7)
  {
   printf("Darbibu bloks, kas tiks izpildits.\n");
   printf("Pirma darbiba.\n");
   printf("Otra darbiba.\n");
  }
 else
 {
  printf("Darbibu bloks pie else vertibas.\n");
 }




 return 0;
 }
