#include <stdio.h>

int main(void)
 {
 FILE *fp;
 fp = fopen("numbers.bin","w+");

 if( fp == NULL )
  {
  printf("Failu lan izdevies atveert.\n");
  return 100;
  }

  double d[] = {1.89636444562, 8.8955544589, -6.74541554572};
  printf("d[0] = %f, d[1] = %f, d[2] = %f (before fscanf)\n",d[0],d[1],d[2]);

  fwrite(d,sizeof(d),sizeof(d)/sizeof(double),fp);
  rewind(fp);
  fread(d,sizeof(d),sizeof(d)/sizeof(double),fp);
  fclose(fp);

  printf("d[0] = %f, d[1] = %f, d[2] = %f (after fscanf)\n",d[0],d[1],d[2]);

 return 0;
 }
