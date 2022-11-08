//masivi - secigi novietotas vetibas atmina izgustamas ar viena
//identifikatora palidzibu: a[0], a[1], a[2]
//alternativa - a0, a1, a2 - kas nav erti? - nav iespuejama algoritmizacija,
//jo tiksanai pie vertibam ir manuali jamaina mainiga vards, bet masiva
//gadijuma jamaina indekss, tatad, i=0; a[i]; i=1; a[i]; i=2; a[i];

//NB! masiva pirma elementa indekss ir 0
//NB! masivam ari ir adrese {MASIVA VARDS IR NORADE} - ta ir 0. elementa adrese

#include <stdio.h>

int main()
{
 int i_array[10]; //int lieluma masiva deklareshana
                  // (piesaukt drikst, bet vertibas nav zinamas)

 int i_array_2[3] = {1,2,3}; // int masiva deklareshana
 int i_array_3[5] = {4,5,6}; // masiva pedejie 2 elementi bus ar 0 vertibam

 int i_array_2D[2][3] = {{7,8,9},
                         {10,11,12}}; //[2] - rindu skaits, [3] - kolonu skaits
                            //dimensijas var but vairakas

 printf("masiva i_array_2 adrese: %p\n",i_array_2);

 printf("masiva i_array_2 0. elementa adrese: %p\n",&i_array_2[0]);
 printf("masiva i_array_2 0. elementa vertiba: %d\n",i_array_2[0]);
 printf("masiva i_array_2 0. elementa vertiba: %d\n",*i_array_2);

 printf("masiva i_array_2 1. elementa adrese: %p\n",&i_array_2[1]);
 printf("masiva i_array_2 1. elementa vertiba: %d\n",i_array_2[1]);
 printf("masiva i_array_2 1. elementa vertiba: %d\n",*(i_array_2+1));

 printf("masiva i_array_2 2. elementa adrese: %p\n",&i_array_2[2]);
 printf("masiva i_array_2 2. elementa vertiba: %d\n",i_array_2[2]);
 printf("masiva i_array_2 2. elementa vertiba: %d\n",*(i_array_2+2));

 printf("masiva i_array_2D 0.2. elementa adrese: %p\n",&i_array_2D[0][2]);
 printf("masiva i_array_2D 0.2. elementa vertiba: %d\n",i_array_2D[0][2]);
// printf("masiva i_array_2D 0.2. elementa vertiba: %d\n",*(i_array_2D+0*2+1*2));
 printf("masiva i_array_2D 0.2. elementa vertiba: %d\n",*(*(i_array_2D+0)+2));

 printf("masiva i_array_2D 1.0. elementa adrese: %p\n",&i_array_2D[1][0]);
 printf("masiva i_array_2D 1.0. elementa vertiba: %d\n",i_array_2D[1][0]);
 printf("masiva i_array_2D 1.0. elementa vertiba: %d\n",*(*(i_array_2D+1)+0));


return 0;
}
