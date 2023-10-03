#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX Standard Output
 * @filename: filename to open
 * @letters:  number of letters to read and print
 *
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ffo, ffr, ffw;
	char *ftemp;

	if (filename == NULL)
		return (0);

	ftemp = malloc(sizeof(char) * letters);
	if (ftemp == NULL)
		return (0);

	ffo = open(filename, O_RDONLY);
	if (ffo < 0)
	{
		free(ftemp);
		return (0);
	}

	ffr = read(ffo, ftemp, letters);
	if (ffr < 0)
	{
		free(ftemp);
		return (0);
	}

	ffw = write(STDOUT_FILENO, ftemp, ffr);
	free(ftemp);
	close(ffo);

	if (ffw < 0)
		return (0);
	return ((ssize_t)ffw);
}
