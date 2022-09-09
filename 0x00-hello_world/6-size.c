#include <stdio.h>
/**
* main - print in the string in the put fuction
*
* Description: Using the main function
* this program prints "the size of various types of computer it is compiled and run on
* Return: 0
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;
printf("size of a char: %ld byte(s)\n", sizeof(c));
printf("size of an int: %ld byte(s)\n", sizeof(i));
printf("size of a long int: %ld byte(s)\n", sizeof(li));
printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
printf("size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
