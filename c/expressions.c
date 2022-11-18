#include <stdio.h>

int main() {
	int a, b;
	char c;

	a = 10;
	b = 20;

	scanf("%c", &c);

	if( a <  b ) {
		printf("a > b = %i\n", a > b);
	}

	if( c >= 'a' && c <= 'z'  ) {
		printf("c is lowercase\n");
	}
	else if( c >= 'A' && c <= 'Z' ) {
		printf("c is uppercase\n");
	}
	else {
		printf("c is not a letter\n");
	}
	return 0;
}
