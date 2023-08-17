#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - prints anything.
  *@format: list of all arguments passed to the function.
  *
  *Return: void.
  */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list printing;
	char *s, *separator;

	va_start(printing, format);

	separator = "";

	i = 0;
	while (format != NULL && format[i] != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(printing, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(printing, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(printing, double));
				break;
			case 's':
				s = va_arg(printing, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(printing);
}
