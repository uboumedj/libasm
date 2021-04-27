#include "../libasm.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void ft_strlen_test(void)
{
	char	test[1];
	char	test0[1] = "";
	char	test1[2] = "a";
	char	test20[21] = "abcdefghijklmnopqrst";

	printf("First test = %s\n", test);
	printf("ft_strlen = %ld\n", ft_strlen(test));
	printf("strlen = %ld\n\n", strlen(test));
	printf("Second test = %s\n", test0);
	printf("ft_strlen = %ld\n", ft_strlen(test0));
	printf("strlen = %ld\n\n", strlen(test0));
	printf("Third test = %s\n", test1);
	printf("ft_strlen = %ld\n", ft_strlen(test1));
	printf("strlen = %ld\n\n", strlen(test1));
	printf("Fourth test = %s\n", test20);
	printf("ft_strlen = %ld\n", ft_strlen(test20));
	printf("strlen = %ld\n\n", strlen(test20));
}

void ft_strcpy_test(void)
{
	char	test[1];
	char	test0[1] = "";
	char	test1[2] = "a";
	char	test20[21] = "abcdefghijklmnopqrst";
	char	*str;
	int		len;

	printf("First test = %s\n", test);
	len = strlen(test) + 1;
	if (!(str = malloc(sizeof(char) * len)))
		exit(1);
	str = ft_strcpy(str, test);
	printf("ft_strcpy = %s\n", str);
	free(str);
	if (!(str = malloc(sizeof(char) * len)))
		exit(1);
	str = strcpy(str, test);
	printf("strcpy = %s\n\n", str);
	free(str);

	printf("Second test = %s\n", test0);
	len = strlen(test0) + 1;
	if (!(str = malloc(sizeof(char) * len)))
		exit(1);
	str = ft_strcpy(str, test0);
	printf("ft_strcpy = %s\n", str);
	free(str);
	if (!(str = malloc(sizeof(char) * len)))
		exit(1);
	str = strcpy(str, test0);
	printf("strcpy = %s\n\n", str);
	free(str);

	printf("Third test = %s\n", test1);
	len = strlen(test1) + 1;
	if (!(str = malloc(sizeof(char) * len)))
		exit(1);
	str = ft_strcpy(str, test1);
	printf("ft_strcpy = %s\n", str);
	free(str);
	if (!(str = malloc(sizeof(char) * len)))
		exit(1);
	str = strcpy(str, test1);
	printf("strcpy = %s\n\n", str);
	free(str);

	printf("Fourth test = %s\n", test20);
	len = strlen(test20) + 1;
	if (!(str = malloc(sizeof(char) * len)))
		exit(1);
	str = ft_strcpy(str, test20);
	printf("ft_strcpy = %s\n", str);
	free(str);
	if (!(str = malloc(sizeof(char) * len)))
		exit(1);
	str = strcpy(str, test20);
	printf("strcpy = %s\n\n", str);
	free(str);
}

void ft_strdup_test(void)
{
	char	test[1];
	char	test0[1] = "";
	char	test1[2] = "a";
	char	test20[21] = "abcdefghijklmnopqrst";
	char	*str;

	printf("First test = %s\n", test);
	str = ft_strdup(test);
	printf("ft_strdup = %s\n", str);
	free(str);
	str = strdup(test);
	printf("strdup = %s\n\n", str);
	free(str);

	printf("Second test = %s\n", test0);
	str = ft_strdup(test0);
	printf("ft_strdup = %s\n", str);
	free(str);
	str = strdup(test0);
	printf("strdup = %s\n\n", str);
	free(str);

	printf("Third test = %s\n", test1);
	str = ft_strdup(test1);
	printf("ft_strdup = %s\n", str);
	free(str);
	str = strdup(test1);
	printf("strdup = %s\n\n", str);
	free(str);

	printf("Fourth test = %s\n", test20);
	str = ft_strdup(test20);
	printf("ft_strdup = %s\n", str);
	free(str);
	str = strdup(test20);
	printf("strdup = %s\n\n", str);
	free(str);

	printf("Fifth test = %s\n", "abc");
	str = ft_strdup("abc");
	printf("ft_strdup = %s\n", str);
	free(str);
	str = strdup("abc");
	printf("strdup = %s\n\n", str);
	free(str);
}

void ft_strcmp_test(void)
{
	char	test[1];
	char	test0[1] = "";
	char	test1[2] = "a";
	char	test20[21] = "abcdefghijklmnopqrst";

	printf("First test = %s and %s\n", test1, test20);
	printf("ft_strcmp(1, 2) = %d\n", ft_strcmp(test1, test20));
	printf("ft_strcmp(2, 1) = %d\n", ft_strcmp(test20, test1));
	printf("strcmp(1, 2) = %d\n", strcmp(test1, test20));
	printf("strcmp(2, 1) = %d\n\n", strcmp(test20, test1));

	printf("Second test = %s and %s\n", test0, test1);
	printf("ft_strcmp(1, 2) = %d\n", ft_strcmp(test0, test1));
	printf("ft_strcmp(2, 1) = %d\n", ft_strcmp(test0, test1));
	printf("strcmp(1, 2) = %d\n", strcmp(test0, test1));
	printf("strcmp(2, 1) = %d\n\n", strcmp(test0, test1));

	printf("Third test = %s and %s\n", test20, test0);
	printf("ft_strcmp(1, 2) = %d\n", ft_strcmp(test20, test0));
	printf("ft_strcmp(2, 1) = %d\n", ft_strcmp(test0, test20));
	printf("strcmp(1, 2) = %d\n", strcmp(test20, test0));
	printf("strcmp(2, 1) = %d\n\n", strcmp(test0, test20));

	printf("Fourth test = %s and %s\n", test, test1);
	printf("ft_strcmp(1, 2) = %d\n", ft_strcmp(test, test1));
	printf("ft_strcmp(2, 1) = %d\n", ft_strcmp(test1, test));
	printf("strcmp(1, 2) = %d\n", strcmp(test, test1));
	printf("strcmp(2, 1) = %d\n\n", strcmp(test1, test));

	printf("Fourth test = %s and %s\n", test20, "oui ok");
	printf("ft_strcmp(1, 2) = %d\n", ft_strcmp(test20, "oui ok"));
	printf("ft_strcmp(2, 1) = %d\n", ft_strcmp("oui ok", test20));
	printf("strcmp(1, 2) = %d\n", strcmp(test20, "oui ok"));
	printf("strcmp(2, 1) = %d\n\n", strcmp("oui ok", test20));

	printf("Fifth test = %s and %s\n", "bon", "bon");
	printf("ft_strcmp(1, 2) = %d\n", ft_strcmp("bon", "bon"));
	printf("ft_strcmp(2, 1) = %d\n", ft_strcmp("bon", "bon"));
	printf("strcmp(1, 2) = %d\n", strcmp("bon", "bon"));
	printf("strcmp(2, 1) = %d\n\n", strcmp("bon", "bon"));
}

void ft_write_test(void)
{
	char	test[1];
	char	test1[2] = "a";
	char	test20[21] = "abcdefghijklmnopqrst";
	
	printf("First test = %s\n", test20);
	write(1, "ft_write: ", 10);
	ft_write(1, test20, 20);
	ft_write(1, "\nwrite: ", 8);
	write(1, test20, 20);
	write(1, "\n\n", 2);

	printf("Second test = %s\n", test1);
	ft_write(1, "ft_write: ", 10);
	ft_write(1, test1, 1);
	ft_write(1, "\nwrite: ", 8);
	write(1, test1, 1);
	write(1, "\n\n", 2);

	printf("Third test = %s\n", test);
	write(1, "ft_write: ", 10);
	ft_write(1, test, 1);
	ft_write(1, "\nwrite: ", 8);
	write(1, test, 1);
	write(1, "\n\n", 2);

	printf("Fourth test = %s\n", "cut test");
	ft_write(1, "ft_write: ", 10);
	ft_write(1, "cut test", 5);
	ft_write(1, "\nwrite: ", 8);
	write(1, "cut test", 5);
	write(1, "\n\n", 2);

	printf("Fifth test = %s\n", "error");
	write(1, "ft_write: ", 10);
	ft_write(2, "error", 5);
	ft_write(1, "\nwrite: ", 8);
	write(2, "error", 5);
	write(1, "\n\n", 2);

	printf("Sixth test = %s\n", "no fd");
	write(1, "ft_write: ", 10);
	ft_write(-2, "error", 5);
	ft_write(1, "\nwrite: ", 8);
	write(-2, "error", 5);
	write(1, "\n\n", 2);
}

void ft_read_test(void)
{
	char str[21];
	int fd;
	int fd2;

	printf("First test = .c file\n");
	write(1, "ft_read: ", 10);
	if (!(fd = open("./tests/main.c", O_RDONLY)))
		exit(1);
	for (int i = 0; i < 3; i++)
	{
		bzero(str, 21);
		ft_read(fd, str, 20);
		printf("%s", str);
	}
	printf("\n");
	close(fd);
	write(1, "\nread: ", 8);
	if (!(fd2 = open("./tests/main.c", O_RDONLY)))
		exit(1);
	for (int i = 0; i < 3; i++)
	{
		bzero(str, 21);
		read(fd2, str, 20);
		printf("%s", str);
	}
	printf("\n\n");
	bzero(str, 21);

	printf("Second test = no fd\n");
	write(1, "ft_read: ", 10);
	fd = ft_read(-1, str, 20);
	printf("[%s] read, return value is %d\n", str, fd);
	write(1, "\nread: ", 8);
	fd = read(-1, str, 20);
	printf("[%s] read, return value is %d\n", str, fd);
}

int main (void)
{
	ft_strlen_test();
	printf("------------------------------------------------------------\n");
	ft_strcpy_test();
	printf("------------------------------------------------------------\n");
	ft_strdup_test();
	printf("------------------------------------------------------------\n");
	ft_strcmp_test();
	printf("------------------------------------------------------------\n");
	ft_write_test();
	printf("------------------------------------------------------------\n");
	ft_read_test();
	return (0);
}


