int		ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;
	unsigned int			i;

	str1 = (const unsigned char*)s1;
	str2 = (const unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}