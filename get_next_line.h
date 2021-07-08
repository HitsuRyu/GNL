#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		ft_readline(int fd, char *buf, char **line);
int		ft_newline(char *part);
char	*ft_getline(char *part);
char	*ft_getpart(char *part);
size_t	ft_strlen(char *str);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);

#endif