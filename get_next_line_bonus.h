/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihalim <ihalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:22:52 by ihalim            #+#    #+#             */
/*   Updated: 2024/11/16 14:37:29 by ihalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# define FD_MAX OPEN_MAX
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *s);
int		ft_strchr(char *s, int c);
char	*ft_strjoin(char *leftovers, char *buffer);
char	*find_leftovers(int fd, char *leftovers);
char	*find_line(char *leftovers);
char	*find_next_leftovers(char *leftovers);
char	*ft_strcpy(char *dst, const char *src);

#endif
