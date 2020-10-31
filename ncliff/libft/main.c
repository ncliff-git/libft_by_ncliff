#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
//#include <unistd.h>
//#include <ctype.h>


int main(/*int argc, char **argv*/)
{
	char src[20] = "123";
	char dst[30] = "123456789";
	char dst2[30] = "123456789";


	printf("%zu: %s\n", ft_strlcpy(dst, src, 5), dst);
	printf("%zu: %s\n", strlcpy(dst2, src, 5), dst2);

}
