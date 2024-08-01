#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *s);
int		ft_strchr(char *s, int c);
char	*ft_strjoin(char *leftovers, char *buffer);
char	*find_leftovers(int fd, char *leftovers);
char	*find_line(char *leftovers);
char	*find_next_leftovers(char *leftovers);
char	*get_next_line(int fd);

#endif
