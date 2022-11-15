

#include <stdio.h>

int main()
{
 char str[100], ch;
 int count[ch] = 0;

 printf("Ievadi teikumu: ");
 fgets(str, sizeof(str), stdin);

 printf("Ievadi simbolu ko mekleet: ");
 scanf("%c", &ch);

 for (int i=0; str[i] != '\0'; ++i){
  if (ch == str[i])
  ++count[ch];

 }
 printf("Simbola %c biezums ir %ls\n", ch, count);
return 0;
}
