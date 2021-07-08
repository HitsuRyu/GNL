#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1)
	{
		res = ft_strdup((char *)s2);
		return (res);
	}
	i = 0;
	j = 0;
	len = ft_strlen((char *)s1);
	res = (char *)malloc((len + ft_strlen((char *)s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
		res[i++] = s1[j++];
	j = 0;
	len = ft_strlen((char *)s2);
	while (j < len)
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
