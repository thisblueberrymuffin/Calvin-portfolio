#include <stdio.h>

int main() {
	int length, width, area;
	printf("Enter Length of your rectangle: ");
	scanf("%i", &length);
	printf("Enter Width of your rectangle: ");
	scanf("%i", &width); 
	area = length*width;
	printf("The Area of you rectangle is: %i\n", area);
	return 0;
}
