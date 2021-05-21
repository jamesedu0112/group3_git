#include <stdio.h>

int main() {
	int value = 10;
	int *temp;
	temp = &value;
	*temp = 20;
	printf("value = %d, *temp = %d\n", value, *temp);
	printf("Hello");
	printf("Hello");
}
