#include <libintl.h>
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	char *sus;
	scanf("%s", sus);
	printf(_("This %s is a little sus.\n"), sus);
	return EXIT_SUCCESS;
}
