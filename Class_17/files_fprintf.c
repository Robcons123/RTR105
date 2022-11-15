#include <stdio.h>

int main(void)
 {
 FILE *fp;
 fp = fopen("teksts.dat","wt");
           //kur (var noraadiit celu) un ko (faila nosaukums)
           //kaadam noluukam

 if( fp == NULL )
  {
  printf("Failu lan izdevies atveert.\n");
  return 100;
  }

 //fprintf(stdout,"AAA") = printf("AAA")
 fprintf(fp,"Izvads failaa\n");
 fprintf(fp,"Fails ir atveerts, Shis ir otrais ieraksts failaa\n");
 double d = 1.8963644;
 fprintf(fp,"d mainiigaa veertiiba: %.3f\n",d);

 fclose(fp);

 return 0;
 }
