#include<stdio.h>

#include<string.h>
int main()
{

char x[50] = "a", z[50],y[50] = "b" ;
int i;

for (i = 0; i <= 5; i++)
{
	printf("%s\t", x);
	strcpy(z, x);
	strcpy(x, y);
	strcat(y, z);
}
return 0;
}