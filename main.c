#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char help_text[] = "This is a dummy program. Its options are:\n\t-h\thelp\n"
		"\t-l\tls\n\t-u\twhoami\n";

int main(int argc, char **argv)
{
	int help = 0;
	int list = 0;
	int user = 0;
	int c, i;

	opterr = 0;

	while ((c = getopt(argc, argv, "hlu")) != -1 )
		switch (c) {
		case 'h':
			help = 1;
			break;
		case 'l':
			list = 1;
			break;
		case 'u':
			user = 1;
			break;
		default:
			return 1;
		}

	for (i = optind; i < argc; i++)
		fprintf(stderr, "%s is not an option. Sorry :(!\n", argv[i]);

	if (help)
		fprintf(stdout, "%s", help_text);

	if (list)
		system("ls -alh");

	if (user)
		system("whoami");

	return 0;
}
