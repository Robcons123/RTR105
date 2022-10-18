#include<stdio.h>

int main()
{
// &&
char c1,c2;
c1 = 1;
c2 = 2;
printf("\n%d (%ld bytes) && %d (%ld bytes)",c1,sizeof(c1),c2,sizeof(c2));
printf(" = %d (%ld bytes) \n\n",c1&&c2,sizeof(c1&&c2));

return 0;
}
