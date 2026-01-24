void	ft_cue1(char *line, int cue1, int cue2)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = *line;
	b = *(line + 1);
	c = *(line + 2);
	d = *(line + 3);
	if (cue1 == 1)
	{
		a = '4';
		if (cue2 == 2)
			d = '3';
		if (cue2 == 3)
			c = '3';
	}
	else if (cue2 == 1)
	{
		d = '4';
		if (cue1 == 2)
			a = '3';
		if (cue2 == 3)
			b = '3';
	}
}

void	ft_cue4l(char *line, int cue1)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = *line;
	b = *(line + 1);
	c = *(line + 2);
	d = *(line + 3);
	if (cue1 == 4)
	{
		a = '1';
		b = '2';
		c = '3';
		d = '4';
	}
}

void	ft_cue4r(char *line, int cue1)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = *line;
	b = *(line + 1);
	c = *(line + 2);
	d = *(line + 3);
	if (cue1 == 4)
	{
		a = '4';
		b = '3';
		c = '2';
		d = '1';
	}
}

void	ft_cue23(char *line, int cue1, int cue2)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = *line;
	b = *(line + 1);
	c = *(line + 2);
	d = *(line + 3);
	if (cue1 == 2 && cue2 == 3)
	{
		if (a == '1')
		{
			c = '3';
			d = '2';
		}
		else if (a == '2')
		{
			c = '3';
			d = '1';
		}
		else if (a == '3')
		{
			c = '2';
			d = '1';
		}
		b = '4';
	}
}
void	ft_cue32(char *line, int cue1, int cue2)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = *line;
	b = *(line + 1);
	c = *(line + 2);
	d = *(line + 3);
	if (cue1 == 3 && cue2 == 2)
	{
		if (d == '1')
		{
			b = '3';
			a = '2';
		}
		else if (d == '2')
		{
			b = '3';
			a = '1';
		}
		else if (d == '3')
		{
			b = '2';
			a = '1';
		}
		c = '4';
	}
}
