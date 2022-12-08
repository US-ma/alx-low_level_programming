#include <stdio.h>
int main(){
	long long int j;
	long int i;
	float f;

	printf("Size of char: %zu bytes(s)\n", sizeof(char));
	printf("Size of int:  %zu bytes(s)\n", sizeof(int));
	printf("Size of long int: %zu  bytes(s)\n", sizeof(i));
	printf("Size of long long int: %lu bytes(s)\n", sizeof(j));
	printf("Size of float %lu bytes(s)\n", sizeof(f));

	return 0;
}
