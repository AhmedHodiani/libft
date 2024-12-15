#include "include/libft.h"

size_t calc_total_length(va_list args)
{
	size_t i = 1;
	while (i <= size)
	{
		length += ft_strlen(va_arg(args, char *));
		i++;
	}
	return (length);
}


char *vstrjoin(int size, ...)
{
	va_list args;
	char *joined;
	char *tmp;
	int k = 0;
	va_start(args, size);
	size_t length = 0;

	length = calc_total_length(args);
	va_end(args);
	joined = malloc(length + 1);
	if(!joined)
		return NULL;
	va_start(args, size);
	int i = 1;
	while (i <= size)
	{
		tmp = va_arg(args, char *);
		int j = 0;
		while(tmp[j])
			joined[k + j] = tmp[j++];
		k += j;
		i++;
	}
	joined[k] = '\0';
	va_end(args);
	return (joined);
}
/* int main ()
{
	char *str = v_strjoin(3, "hello", "sarah", "ahmed");
	printf("%s\n", str);
	free(str);
	return 0;
} */
