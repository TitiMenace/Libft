#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i]>= 9 && str[i] <= 13 )|| str[i] == ' ')
			 i++;
	if(str[i] == '-' || str[i] == '+')
	{
			if (str[i] == '-')
					sign = -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	i;
	
	if (fd)
	{
		i = 0;
		if  (nb < 0)
		{
			i = nb * -1;
			ft_putchar_fd('-', fd);
		}
		else
			i = nb;
		if (i <= 9)
			ft_putchar_fd(i + '0', fd);
		else
		{
			ft_putnbr_fd(i / 10, fd);
			ft_putnbr_fd(i % 10, fd);
		}
	}
}
