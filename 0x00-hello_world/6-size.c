#include <stdio.h>
int main()
{
char charType;
int integerType;
long int longtype;
long long int longlongtype;
float floatType;
	// Sizeof operator is used to evaluate the size of a variable
printf("Size of char: %ld byte(s)\n",sizeof(charType));
printf("Size of int: %ld byte(s)\n",sizeof(integerType));
printf("Size of long int: %ld byte(s)\n",sizeof(longtype));
printf("Size of long long int: %ld byte(s)\n",sizeof(longlongtype));
printf("Size of float: %ld byte(s)\n",sizeof(floatType));
return 0;
}
