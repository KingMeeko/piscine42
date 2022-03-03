
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j])
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

int main()
{
    char *s1 = "salut comment sa va";
    char *s2 = "a";
    char *p;

	p = ft_strstr(s1, s2);

	printf("%s", p);
	return 0;
}
