int	ft_atoi(car *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i]>= 9 && str[i] <= 13 || str[i] == ' ')
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
