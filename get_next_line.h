/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihalim <ihalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:22:52 by ihalim            #+#    #+#             */
/*   Updated: 2024/11/08 09:22:53 by ihalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strlen(char *s);
int		ft_strchr(char *s, int c);
char	*ft_strjoin(char *leftovers, char *buffer);
char	*find_leftovers(int fd, char *leftovers);
char	*find_line(char *leftovers);
char	*find_next_leftovers(char *leftovers);

#endif
