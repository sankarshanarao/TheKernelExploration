#include <stdio.h>

int main()
{
	int sysnr = 39;
	int pid;

	asm("syscall\n"
	    :"=a"(pid):"0"(sysnr));

	printf("%d\n", pid);

	return 0;
}
