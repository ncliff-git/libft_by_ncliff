#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>


int main(int argc, char **argv)
{
	argc += 0;
	//char dest[10] = "ewer";
	
	printf("-----------1------------\n");
	printf("%s\n", strnstr(argv[1], "\0", 12));
	printf("-----------2------------\n");
	printf("%s\n", ft_strnstr(argv[1], argv[2], 12));

	//while (*argv)
	//{
	//	write(1,"-", 1);
	//}

	//printf("%s\n", dest);
}
