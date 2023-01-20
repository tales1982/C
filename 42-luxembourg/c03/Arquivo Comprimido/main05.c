#include <string.h>
#include <stdio.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char str[50]="Casa";
	char str1[50]="Origem";
	char str2[50]="Origem";
	char str3[50]="Origem";
	char str4[50]="Origem";
	char str5[50]="";
	unsigned int i;

	i = 0;
	printf("Dest : %s, size = %u\n", str1, i);
	printf("Function ft_strlcat return : %u\n", ft_strlcat(str1, str, i));
//	printf("Function strlcat return : %lu\n", strlcat(str1, str, i));
	printf("Dest : %s\n\n", str1);

	i = 8;
	printf("Dest : %s, size = %u\n", str2, i);
	printf("Function ft_strlcat return : %u\n", ft_strlcat(str2, str, i));
//	printf("Function strlcat return : %lu\n", strlcat(str2, str, i));
	printf("Dest : %s\n\n", str2);

	i = 15;
	printf("Dest : %s, size = %u\n", str3, i);
	printf("Function ft_strlcat return : %u\n", ft_strlcat(str3, str, i));
//	printf("Function strlcat return : %lu\n", strlcat(str3, str, i));
	printf("Dest : %s\n\n", str3);

	i = 12;
	printf("Dest : %s, size = %u\n", str4, i);
	printf("Function ft_strlcat return : %u\n", ft_strlcat(str4, str, i));
//	printf("Function strlcat return : %lu\n", strlcat(str4, str, i));
	printf("Dest : %s\n\n", str4);

	i = 12;
	printf("Dest : %s, size = %u\n", str5, i);
	printf("Function ft_strlcat return : %u\n", ft_strlcat(str5, str, i));
//	printf("Function strlcat return : %lu\n", strlcat(str5, str, i));
	printf("Dest : %s\n\n", str5);
	return 0;
}
