#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific message to standard error
 * Return: Always 1
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	syscall(SYS_write, STDERR_FILENO, message, 43);
	return (1);
}
