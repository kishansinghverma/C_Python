#include <stdio.h>

#define bar(x) \
	int varr = 10;\
	printf("var in bar: %d\n", x);\
	

void foo()
{
	int var = 5;
	printf("var in foo: %d\n", var);
	bar(4);
}

int main(int argc, char *argv[])
{
	foo();
}
