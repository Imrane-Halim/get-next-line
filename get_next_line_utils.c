#include "get_next_line.h"

int		ft_strlen(char *s)
{
	int i;
	i = 0;
	while(s[i])
		i++;
	return (i);
}

int		ft_strchr(char *s, int c) 
{
	int i;
	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *leftovers, char *buffer) {
	int i;
	int j;
	char *str;
	if (!leftovers) {
		leftovers = (char *)malloc(1);
		leftovers[0] = '\0';
	}
	if (leftovers == NULL || buffer == NULL)
		return NULL;
	str = (char *)malloc(ft_strlen(leftovers) + ft_strlen(buffer) + 1);
	if (str == NULL)
		return (NULL);
	i = -1;
	//if (leftovers) {
	while (leftovers[++i] != '\0')
		str[i] = leftovers[i];
	//}
	j = 0;
	while (buffer[j])
		str[i++] = buffer[j++];
	str[ft_strlen(leftovers) + ft_strlen(buffer)] = '\0';
	free(leftovers);
	return (str);
}

