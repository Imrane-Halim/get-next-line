#include "get_next_line.h"

char	*find_leftovers(int fd, char *leftovers)
{
	char	*buffer;
	int		bytes_read;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read != 0 && (!leftovers || !ft_strchr(leftovers, '\n')))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(leftovers);
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		leftovers = ft_strjoin(leftovers, buffer);
	}
	free(buffer);
	return (leftovers);
}

char	*find_line(char *leftovers)
{
	int		i;
	char	*line;

	if (!leftovers[0])
		return (NULL);
	i = 0;
	while (leftovers[i] && leftovers[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (line == NULL)
		return (NULL);
	i = 0;
	while (leftovers[i] && leftovers[i] != '\n')
	{
		line[i] = leftovers[i];
		i++;
	}
	if (leftovers[i] == '\n')
	{
		line[i] = leftovers[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*find_next_leftovers(char *leftovers)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (leftovers[i] && leftovers[i] != '\n')
		i++;
	if (!leftovers[i])
	{
		free(leftovers);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(leftovers) - i + 1));
	if (str == NULL)
		return (NULL);
	i++;
	j = 0;
	while (leftovers[i])
		str[j++] = leftovers[i++];
	str[j] = '\0';
	free(leftovers);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*leftovers = 0;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	leftovers = find_leftovers(fd, leftovers);
	if (leftovers == NULL)
		return (NULL);
	line = find_line(leftovers);
	leftovers = find_next_leftovers(leftovers);
	return (line);
}
