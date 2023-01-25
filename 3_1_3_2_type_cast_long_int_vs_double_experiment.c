#include <stdio.h>

#define typename(x) _Generic((x), _Bool: "_Bool", \
char: "char", \
signed char: "signed char", \
unsigned char: "unsigned char", \
short int: "short int", \
unsigned short int: "unsigned short int", \
int: "int", \
unsigned int: "unsigned int", \
long int: "long int", \
unsigned long int: "unsigned long int", \
long long int: "long long int", \
unsigned long long int: "unsigned long long int", \
float: "float", \
double: "double", \
long double: "long double", \
char *: "pointer to char", \
void *: "pointer to void", \
int *: "pointer to int", \
default: "other")

int main () {
  long long int a = 20L;
  double b = 0.1;
  float c = 0.1;
  long long int d = 23LL;

  printf("%s\n", typename(a + b + a));
  printf("%s\n", typename(c +b));
  printf("%s\n", typename(c + d));
  return 0;
}
