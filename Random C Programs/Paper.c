

#include <stdio.h>
int main()
{
int Length=1189,Width=841, x, y;
for (x = 0; x <= 8; x++)
{

printf("A%d -> %d x %d\n", x, Length, Width);
y = Length;
Length = Width;
Width = y / 2;

}
return 0;
}