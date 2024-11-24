#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

size_t v_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}
char *v_strjoin(int size, ...)
{
	va_list args;
	int number_of_strings = size;
	char *joined;
	char *tmp;
	int k = 0;
	va_start(args, size);
	size_t length = 0;

	for(int i = 1; i <= number_of_strings; i++)
	{
		length += v_strlen(va_arg(args, char *));
	}
	joined = malloc(length + 1);
	if(!joined)
		return NULL;
	va_end(args);

	va_start(args, size);
	for(int i = 1; i <= number_of_strings; i++)
	{
		tmp = va_arg(args, char *);
		int j = 0;
		for(;tmp[j]; j++)
		{
			joined[k + j] = tmp[j];
		}
		k += j;
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
