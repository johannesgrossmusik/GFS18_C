#include <stdio.h>
void main(int argc, char* argv[]){

// Used with one argument/parameter
if(2 == argc)
	printf("%s: 'Hello %s'", argv[0], argv[1]);

// Used with two arguments/parameters
else if(argc > 2)
	printf("%s: 'Hello %s %s'", argv[0], argv[1], argv[2]);

// Used without any arguments/parameters
else
	printf("%s: 'Hello World'", argv[0]);
}