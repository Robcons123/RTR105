//Decimala parveidojumi uz binaro skaitisanas sistemu

#include <stdio.h>

int main()
{
 char a;
 printf("Ievadiet naturalu skaitli: ");
 scanf("%hhi", &a);
 printf("Ievadita skaitla attelojums binara sistema ir: (%ld bytes)\n",sizeof(a));

return 0;
}
