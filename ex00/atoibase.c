int check_base(char *base)
{
    int i;
    int y;

    i = 0;
	if (base[1] == 0)
		return(0);
    while (base[i])
    {
        y = i + 1;
        while (base[y])
        {
            if (base[i] == base[y])
                return (0);
            y++;
        }
        i++;
    }
	i = 0;
	while (base[i])
		i++;
    return (i);
}

int to_int(char *number, char *base)
{
	int	i;
	int	result;
	int	index;
	int	pos;
	int	lenght;

	i = 0;
	result = 0;
	lenght = check_base(base);
	pos = 0;
	while (number[i])
		i++;
	i--;
	while (i >= 0)
	{
		index = 0;
		while (number[i] != base[index])
			{
				if (index == lenght)
					return (0);
				index++;
			}
		result += (index * power(check_base(base), pos));
		pos++;
		i--;
	}
	return (result);
}