// https://cplusplus.com/reference/cstdio/printf/
/*printf example*/
#include <stdio.h>

int main()
{
	printf ("Characters (as symbols): %c %c \n", 0141, 65);
	printf ("Characters (as decimal): %d %d \n", 0141, 65);
	printf ("Characters (as oct): 0%o 0%o \n", 0141, 65);
	printf ("Characters (as hex): 0x%x 0x%x \n", 0141, 65);
	printf("Decimals: %d %ld\n", 1977, 650000L);
	printf("Preceding with blanks: %10d \n", 1977);
	printf("Preceding with zeros: %010d \n", 1977);
	printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf("%s \n", "A string");
	return 0;
}
