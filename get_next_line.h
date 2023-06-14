#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
//#define BUFFER_SIZE 50
#endif


int     ft_strlen(char *s);
char    *get_next_line(int fd);
char	*ft_strchr(char *s, char c);
char	*ft_strjoin2(char *s1, char *s2);
char	*read_copy_string(int fd, char *save);

#endif