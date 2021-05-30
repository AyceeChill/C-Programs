#include<math.h>
#define AREA_CIRCLE(r) (M_PI*r*r)
#define AREA_SQUARE(s) (s*s)
#define AREA_REC(x,y) (x*y)
#define SP(a,b,c) (a+b+c/2)
#define AREA_TRI(a,b,c) (sqrt(SP(a,b,c)*((SP(a,b,c)-a)*(SP(a,b,c)-b)*(SP(a,b,c)-c))))