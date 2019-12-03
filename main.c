#include "ft_printf.h"
#include <limits.h>


void	all_tests();
void	no_segfault();

int	main()
{
	all_tests();
	while (1);
}

void	all_tests()
{
	int ft_len;
	int liblen;

	char	c;
	char	*p2 = &c;
	ft_len = ft_printf("%-.p|\n", p2);
	liblen = printf("%-.p|\n", p2);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	p2 = NULL;
	ft_len = ft_printf("%-.p|\n", p2);
	liblen = printf("%-.p|\n", p2);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	void *blip = NULL;
	ft_len = ft_printf("[%*p]\n", -1, blip);
	liblen = printf("[%*p]\n", -1, blip);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	
	ft_len = ft_printf("[%*p]\n", -1, p2);
	liblen = printf("[%*p]\n", -1, p2);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("[%*p]\n", -3, p2);
	liblen = printf("[%*p]\n", -3, p2);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	
	ft_len = ft_printf("[%*p]\n", -5, p2);
	liblen = printf("[%*p]\n", -5, p2);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("[%-.p]\n", p2);
	liblen = printf("[%-.p]\n", p2);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	
	ft_len = ft_printf("[%-p]\n", p2);
	liblen = printf("[%-p]\n", p2);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("percent 5 % %\n");
	liblen = printf("percent 5 % %\n");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	
	ft_len = ft_printf("percent 6 % 15%\n");
	liblen = printf("percent 6 % 15%\n");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	
	ft_len = ft_printf("percent 7 % 12%\n");
	liblen = printf("percent 7 % 12%\n");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	
	ft_len = ft_printf("percent 8 %  *%\n", 13);
	liblen = printf("percent 8 %  *%\n", 13);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	int	precision_negative = -333;
	ft_len = ft_printf("[%.*s]\n", precision_negative, "hello12345");
	liblen = printf("[%.*s]\n", precision_negative, "hello12345");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	char	c = 'f';
	char	*str = "hello";

	ft_len = ft_printf("[%.c]\n", c);
	liblen = printf("[%.c]\n", c);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("[%.s]\n", str);
	liblen = printf("[%.s]\n", str);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("[%.p]\n", &str);
	liblen = printf("[%.p]\n", &str);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("%c\n", '\0');
	liblen = printf("%c\n", '\0');
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%5c\n", '\0');
	liblen = printf("%5c\n", '\0');
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%-5c\n", '\0');
	liblen = printf("%-5c\n", '\0');
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("Kashim a %c histoires à raconter\n", 1001);
	liblen = printf("Kashim a %c histoires à raconter\n", 1001);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("Il fait au moins %c\n", -8000);
	liblen = printf("Il fait au moins %c\n", -8000);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%05%\n");
	liblen = printf("%05%\n");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("%5%\n");
	liblen = printf("%5%\n");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%-5%\n");
	liblen = printf("%-5%\n");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%05%\n");
	liblen = printf("%05%\n");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%-05%\n");
	liblen = printf("%-05%\n");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("%c", '\0');
	liblen = printf("%c", '\0');
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%5c", '\0');
	liblen = printf("%5c", '\0');
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%-5c", '\0');
	liblen = printf("%-5c", '\0');
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("%5.d\n", 0);
	liblen = printf("%5.d\n", 0);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%-5.d\n", 0);
	liblen = printf("%-5.d\n", 0);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("%04d\n", 532);
	liblen = printf("%04d\n", 532);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%04d\n", -532);
	liblen = printf("%04d\n", -532);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%04d\n", -4825);
	liblen = printf("%04d\n", -4825);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);

	ft_len = ft_printf("[%c]\n", 'x');
	liblen = printf("[%c]\n", 'x');
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%c]\n", '\200');
	liblen = printf("[%c]\n", '\200');
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%c][%c][%c]\n", '\200', '\100', '\11');
	liblen = printf("[%c][%c][%c]\n", '\200', '\100', '\11');
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%20u]\n", 1234);
	liblen = printf("[%20u]\n", 1234);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%20u]\n", 2147483647);
	liblen = printf("[%20u]\n", 2147483647);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%20u]\n", -1);
	liblen = printf("[%20u]\n", -1);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%020.6u]\n", -1);
	liblen = printf("[%020.6u]\n", -1);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%020.6u]\n", 214748365);
	liblen = printf("[%020.6u]\n", 214748365);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);


	int i = 9;

	ft_len = ft_printf("[%p]\n", &i);
	liblen = printf("[%p]\n", &i);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%20p]\n", &i);
	liblen = printf("[%20p]\n", &i);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%-20p]\n", &i);
	liblen = printf("[%-20p]\n", &i);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%-p]\n", &i);
	liblen = printf("[%-p]\n", &i);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%-p][%s]\n", &i, "text");
	liblen = printf("[%-p][%s]\n", &i, "text");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some text %d\n", 7);
	liblen = printf("some text %d\n", 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some text %d %d\n", 7, 9);
	liblen = printf("some text %d %d\n", 7, 9);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some text %5d\n", 7);
	liblen = printf("some text %5d\n", 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some text %*d\n", 5, 7);
	liblen = printf("some text %*d\n", 5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some tex%% %*d\n", 5, 7);
	liblen = printf("some tex%% %*d\n", 5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*d\n", 5, 7);
	liblen = printf("some %*d\n", 5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*d\n", -5, 7);
	liblen = printf("some %*d\n", -5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*d\n", -0, 7);
	liblen = printf("some %*d\n", -0, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*.*d\n", 3, 4, 7);
	liblen = printf("some %*.*d\n", 3, 4, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*.*d\n", 3, -4, 7);
	liblen = printf("some %*.*d\n", 3, -4, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*d\n", 5, 7);
	liblen = printf("some %*d\n", 5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*d\n", -5, 7);
	liblen = printf("some %*d\n", -5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*d\n", -0, 7);
	liblen = printf("some %*d\n", -0, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*d\n", -1, 7);
	liblen = printf("some %*d\n", -1, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %05d\n", 700);
	liblen = printf("some %05d\n", 700);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %-5d\n", 700);
	liblen = printf("some %-5d\n", 700);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%-5d]\n", 700);
	liblen = printf("some [%-5d]\n", 700);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%5d]\n", 700);
	liblen = printf("some [%5d]\n", 700);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%.3d]\n", -12);
	liblen = printf("some [%.3d]\n", -12);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%.4d]\n", -13);
	liblen = printf("some [%.4d]\n", -13);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%.2d]\n", -14);
	liblen = printf("some [%.2d]\n", -14);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%5.20d]\n", -15);
	liblen = printf("some [%5.20d]\n", -15);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%-5.20d]\n", -16);
	liblen = printf("some [%-5.20d]\n", -16);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%-30.20d]\n", -17);
	liblen = printf("some [%-30.20d]\n", -17);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%03d]\n", 5);
	liblen = printf("some [%03d]\n", 5);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%010.5d]\n", -18);
	liblen = printf("some [%010.5d]\n", -18);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some [%010.5d]\n", 19);
	liblen = printf("some [%010.5d]\n", 19);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%04d]\n", -11);
	liblen = printf("[%04d]\n", -11);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%.4d]\n", -12);
	liblen = printf("[%.4d]\n", -12);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%.4d]\n", 12);
	liblen = printf("[%.4d]\n", 12);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%.4d] [%s]\n", 12, "hello");
	liblen = printf("[%.4d] [%s]\n", 12 , "hello");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10s]\n", "hello");
	liblen = printf("[%10s]\n", "hello");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10.4s]\n", "hello");
	liblen = printf("[%10.4s]\n", "hello");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10.5s]\n", "hello");
	liblen = printf("[%10.5s]\n", "hello");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%-10.5s]\n", "hello");
	liblen = printf("[%-10.5s]\n", "hello");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10.15s]\n", "hello");
	liblen = printf("[%10.15s]\n", "hello");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10.15s]\n", "");
	liblen = printf("[%10.15s]\n", "");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10.0s]\n", "asdf");
	liblen = printf("[%10.0s]\n", "asdf");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10.1s]\n", "asdf");
	liblen = printf("[%10.1s]\n", "asdf");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%1.1s]\n", "asdf");
	liblen = printf("[%1.1s]\n", "asdf");
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%1.1s]\n", NULL);
	liblen = printf("[%1.1s]\n", NULL);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10.1s]\n", NULL);
	liblen = printf("[%10.1s]\n", NULL);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%1.10s]\n", NULL);
	liblen = printf("[%1.10s]\n", NULL);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10.3s]\n", NULL);
	liblen = printf("[%10.3s]\n", NULL);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%-10.3s]\n", NULL);
	liblen = printf("[%-10.3s]\n", NULL);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%x]\n", 1234);
	liblen = printf("[%x]\n", 1234);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%10x]\n", 1234);
	liblen = printf("[%10x]\n", 1234);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%.10x]\n", 1234);
	liblen = printf("[%.10x]\n", 1234);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%3.10x]\n", 1234);
	liblen = printf("[%3.10x]\n", 1234);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%3.10x]\n", -1234);
	liblen = printf("[%3.10x]\n", -1234);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%5.10x]\n", -1234);
	liblen = printf("[%5.10x]\n", -1234);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%5.100x]\n", -1234);
	liblen = printf("[%5.100x]\n", -1234);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%5.0x]\n", -1234);
	liblen = printf("[%5.0x]\n", -1234);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%5.0x]\n", 0);
	liblen = printf("[%5.0x]\n", 0);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("[%5X]\n", 1000);
	liblen = printf("[%5X]\n", 1000);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some text %i\n", 7);
	liblen = printf("some text %i\n", 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some text %i %i\n", 7, 9);
	liblen = printf("some text %i %i\n", 7, 9);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some text %5i\n", 7);
	liblen = printf("some text %5i\n", 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some text %*i\n", 5, 7);
	liblen = printf("some text %*i\n", 5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some tex%% %*i\n", 5, 7);
	liblen = printf("some tex%% %*i\n", 5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*i\n", 5, 7);
	liblen = printf("some %*i\n", 5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*i\n", -5, 7);
	liblen = printf("some %*i\n", -5, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*i\n", -0, 7);
	liblen = printf("some %*i\n", -0, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("some %*.*i\n", 3, 4, 7);
	liblen = printf("some %*.*i\n", 3, 4, 7);
	printf("\n=== %d - %d ===\n\n", ft_len, liblen);
	ft_len = ft_printf("%%*.*p %*.*p\n", 3, 4, 7);
	printf("\n=== jus dont break ===\n\n");

}