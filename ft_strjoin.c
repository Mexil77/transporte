#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  s1_len;
    size_t  s2_len;
    size_t  i;
    size_t  j;
    char    *final;

    i = -1;
    j = -1;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    final = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
    if (final == NULL)
        return (NULL);
    while (s1[++i] != '\0')
        final[i] = s1[i];
    while (s2[++j] != '\0')
        final[i + j] = s2[j];
    final[i + j] = '\0';
    return (final);
}