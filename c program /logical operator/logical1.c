//short circuit in && (and)logical operator
#include <stdio.h>

int main ()
{
    int a = 3, b = 4;
    int incr = (b > a) && ( b++ );
    printf("%d \n " , incr);    // 1
    printf("%d " , b );         // 5 because b++ performed 

    return 0;
}
