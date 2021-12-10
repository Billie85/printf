#include "ft_printf.h"

int main(void)
{
	 int i;

	i = 0;
	printf ("----%%test----\n");

		printf ("本家\n");
	i = printf("%%\n");
		printf("%d\n", i);

		printf ("自作\n");
	i = ft_printf("%%\n");
		printf("%d\n", i);
	
	i = 0;
	printf ("----Xtest----\n");

		printf ("本家\n");
	i = printf ("%X\n",1967);
		printf("%d\n", i);

		printf ("自作\n");
	i = ft_printf("%X\n",1967);
		printf("%d\n", i);

	i = 0;
	printf ("----xtest----\n");

		printf ("本家\n");
	i = printf ("%x\n",1967);
		printf("%d\n", i);

		printf ("自作");
    i = ft_printf("%x\n",1967);
		printf("%d\n", i);

	i = 0;
	printf ("----ctest----\n");

		printf ("本家\n");
	i = printf("%c\n",'b');
		printf("%d\n", i);

		printf ("自作\n");
    i = ft_printf("%c\n",'b');
		printf ("%d\n", i);

	i = 0;
	printf ("----dtest----\n");

		printf ("本家\n");
	i = printf("%d\n",'c');
		printf("%d\n", i);

		printf("自作\n");
    i = ft_printf("%d\n",'c');
		printf("%d\n", i);

		printf ("本家\n");
	i = printf("%d\n", INT_MIN);
		printf("%d\n", i);

		printf("自作\n");
	i = ft_printf("%d\n", INT_MIN);
		printf ("%d\n", i);

	i = 0;
	printf ("----itest----\n");

		printf ("本家\n");
	i = printf("%i\n",'a');
		printf("%d\n", i);

		printf("自作\n");
	i = ft_printf("%i\n",'a');
		printf ("%d\n", i);

 	printf ("----ptest----\n");

         int n;

		i = 0;
        n = 85;
		printf ("本家\n");
        i = printf ("%p\n",&n);
		printf ("%d\n", i);

		printf("自作\n");
        i = ft_printf("%p\n",&n);
		printf ("%d\n", i);

	i = 0;
	printf ("----stest----\n");

		printf ("本家\n");
	i = printf ("%s\n","abcd1");
		printf ("%d\n", i);

		printf("自作\n");
	i = ft_printf ("%s\n","abcd1");
		printf ("%d\n", i);

	i = 0;
	printf ("----utest----\n");

		printf ("本家\n");
	i = printf ("%u\n",4294967295U);
		printf ("%d\n", i);
		
		printf("自作\n");
    i = ft_printf("%u\n",4294967295U);
		printf ("%d\n", i);

	return (0);
} 