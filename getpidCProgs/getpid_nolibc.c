#include <stdio.h>

asm(".global __getpid\n"
     ".type __getpid, @function\n"
     "__getpid:\n"
	"mov $39, %rax\n"
	"syscall\n"
	"ret\n"
     ".size __getpid, .-__getpid\n");

int __getpid(void);

int main()
{
	printf("%d\n", __getpid());

	return 0;
}
