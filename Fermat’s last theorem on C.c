
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a,b,c;
    int d=2;
    for (d = 2;d < 10;d++){
        for (a=1;a<1000;a++){
                for (b=1;b<1000;b++){
                    for (c=1;c<1000;c++){
                        if (pow(a,d)+pow(b,d) == pow(c,d)) {
                            printf("IF n=%d ,a^%d = %d | b^%d = %d | c^%d = %d",d,d,a,d,b,d,c);
                            break;
                        }
                }
                if (pow(a,d)+pow(b,d) == pow(c,d)) break;
            }
            if (pow(a,d)+pow(b,d) == pow(c,d)) break;
        }
        if (pow(a,d)+pow(b,d) == pow(c,d)) break;
    }
}