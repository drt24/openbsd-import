/* libmain - flex run-time support library "main" function */

/* $Header$ */

#include <sys/cdefs.h>

int yylex __P((void));
int main __P((int, char **, char **));

int
main( argc, argv, envp )
int argc;
char *argv[];
char *envp[];
	{
	return yylex();
	}
