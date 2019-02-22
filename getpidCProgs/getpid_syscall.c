#include <syscall.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	printf("%d\n", (int)syscall(__NR_getpid));

	return 0;
}
