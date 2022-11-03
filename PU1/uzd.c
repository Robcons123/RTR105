//Reizinasanas operacijas izpilde ar lietotaju

#include <stdio.h>

int main()
{
 long int a,b,c;

 printf("Ievadiet pirmo skaitli: ");
 scanf("%ld",&a);
 printf("Ievadiet otro skaitli: ");
 scanf("%ld",&b);
 c=a*b;
 printf("Skaitlu %ld un %ld reizinajums ir %ld \n",a,b,c);

 return 0;
}
