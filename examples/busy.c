/* 
 * Generate busy icon
 *
 */


#include <stdio.h>

#define	TRUE 1

int main(void)
{

	int markers[] = {'|', '/', '-', '\\'};
	int i = 0;

	while (TRUE) {
		putchar(markers[i++]);
		putchar('\b');
		i = i % 3;
	}
	return 0;
}
