//pa labi >>, pa kreisi <<
#include <stdio.h>


int main()
{
unsigned char uc1 = 1; //0000 0001
char c1;
c1 = 0;
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1)); //0000 0001

c1 = 1;
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1)); //0000 0010
							//0 no 7. pazicijas ara
							//0 0. pozicija ieksa
c1 = 2;
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1));

c1 = 3;
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1));

c1 = 4;
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1));

c1 = 5;
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1));

c1 = 6;
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1));

c1 = 7;
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1));
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",(char)(uc1<<c1),sizeof(uc1<<c1));
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",(unsigned char)(uc1<<c1),sizeof((unsigned char)(uc1<<c1)));

c1 = 31;
printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1));

uc1 = 120;
c1 = 1;
printf("\n%d (%ld bytes) >> %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
printf(" = %d (%ld bytes)\n\n",uc1>>c1,sizeof(uc1>>c1));


/*
78 dec -> 0100 1110 bin
7.bita saturs ir 0 (kaa tikt pie 7. bita satura) (0)100 1110 lai 0 - 0000 000(0)
						(unsigned char)(<< 0, >> 7)
6.bita saturs ir 1 0(1)00 1110
		(unsigned char)(<<1 >>7)
5.bita saturs ir 0
		(unsigned char)(<<2 >>7)
4.bita saturs ir 0
		(unsigned char)(<<3 >>7)
3.bita saturs ir 1
		(unsigned char)(<<4 >>7)
2.bita saturs ir 1
		(unsigned char)(<<5 >>7)
1.bita saturs ir 1
		(unsigned char)(<<6 >>7)
0.bita saturs ir 0
		(unsigned char)(<<7 >>7)

"fokuseshanos" var realizeet ar &
 (0)100 1110
&(1)000 0000 (128 dec = 2^7)
 (0)000 0000 >> 7

 0(1)00 1110
&0(1)00 0000 (64 dec = 2^6)
 0(1)00 0000 >> 6

*/

return 0;
}

