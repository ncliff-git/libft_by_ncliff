#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
//#include <unistd.h>
//#include <ctype.h>


int main(int argc, char **argv)
{
	argc += 0;
	char *s1 = "21";
	char *s2 = "12789012";

	argv[1] = "s";
	printf("%s", ft_strtrim(s2, s1));
}
