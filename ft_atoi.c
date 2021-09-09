#include "libft.h"

//#include <stdio.h>
int	ft_atoi(const char *str)
{
	int				odd_even;
	unsigned int	res;

	odd_even = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			odd_even *= -1;
		str++;
	}
	res = 0;
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * odd_even);
}
/*
int main()
{
    char* s1 = "---123";   
    char* s2 = "---+--+1234ab567";
    char* s3 = "  123aa";
    char* s4 = "123 123";
    
    int num1 = ft_atoi(s1);
    int num2 = ft_atoi(s2);
    int num3 = ft_atoi(s3);
    int num4 = ft_atoi(s4);

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    printf("%d\n", num4);

    return 0;
}
*/