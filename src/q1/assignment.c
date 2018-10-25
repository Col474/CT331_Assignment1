#include <stdio.h>

int main(int arg, char* argc[]) {
	int a;
	int* b;
	long c;
	double* d;
	char** e;
	
	printf("int is %2d bytes \n", sizeof(a));
	printf("int* is %2d bytes \n", sizeof(b));
	printf("long is %2d bytes \n", sizeof(c));
	printf("double* is %2d bytes \n", sizeof(d));
	printf("char** is %2d bytes \n", sizeof(e));
	return 0;
}

