// operacijas		operands_ opereracija operands_2
//			(datu tips)		(datu tips)
//					||
//					||
//					\/
//				operacijas_rezultats
//					(datu tips)
//			parasti operacijas datu tips ir "lielakais"
//matematiskas: +,-,*,/,%,++,--
//attiecibu: <, <=, >, >=, ==, !=
//logiskas: &&, ||
//logiskas pa bitiem: &, |, ^, !
//bitu: >>, <<

//Ko peetis sodien: kaa strada operacija?
//			vai operaacijaa drikst izmantot jebkuru datu tipu?
//			operaciju izpildisanas seciba (to nosaka prioritate)
//	/ (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>


#include<stdio.h>

int main()
{
char c = 'A', c2 = 'B', c3 = 'C';
int i = 2000, i2 = 4, i3 = 5;
float f = 2.3e-5;
double d = -5.6e4;

printf("%d(%ld bytes) * %d(%ld bytes) = %d (%ld bytes)\n",c,sizeof(c),i,sizeof(i),c*i,sizeof(c*i));

printf("%d(%ld bytes) / %d(%ld bytes) = %d (%ld bytes)\n",i2,sizeof(i2),i3,sizeof(i3),i2/i3,sizeof(i2/i3));

printf("%d(%ld bytes) / %d(%ld bytes) = %d (%ld bytes)\n",c2,sizeof(c2),c3,sizeof(c3),c2/c3,sizeof(c2/c3));

printf("%d(%ld bytes) MOD %d(%ld bytes) = %d(%ld bytes)\n",i2,sizeof(i2),i3,sizeof(i3),i2%i3,sizeof(i2%i3));

printf("%d(%ld bytes) & %d(%ld bytes) = %d (%ld bytes)\n",i2,sizeof(i2),i3,sizeof(i3),i2&i3,sizeof(i2&i3));

printf("%d | %d = %d\n",i2,i3,i2|i3);

printf("%d | %d = %d\n",i3,i2,i3|i2);

printf("%d ^ %d = %d\n",i2,i3,i2^i3);

//printf("%d ! %d = %d\n",i3,i2,i3!i2);

printf("%d && %d = %d\n",i3,i2,i3&&i2);
printf("%d && %d = %d\n",i3,i3,i3&&i3);

printf("%d || %d = %d\n",i3,i2,i3||i2);
}
