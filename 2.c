#include <stdio.h>

/************found************/
void fun (long  s, long* t)
{   long   sl=10;
    *t = s % 10;
    while ( s > 0)
    {   s = s/100;
        *t = s%10 * sl + *t;
/************found************/
	sl = sl*10;
    }
}

void main()
{  long s, t;
   printf("\nPlease enter s:"); scanf("%ld", &s);
   fun(s, &t);
   printf("The result is: %ld\n", t);
}

