#include <stdlib.h>
#include <stdio.h>

#ifndef LIBFT_H
# define LIBFT_h

char    *ft_substr(char const *s, unsigned int start,size_t len);
size_t  ft_strlen(const char *s);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strnstr(const char	*big, const char *little, size_t len);
char	**ft_split(char const *s, char c);

#endif