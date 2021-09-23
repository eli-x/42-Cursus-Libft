#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		val;

	sign = 1;
	val = 0;
	while (*str == ' ' || (*str >= 8 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10 + (*str - '0');
		str++;
	}
	return (val * sign);
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