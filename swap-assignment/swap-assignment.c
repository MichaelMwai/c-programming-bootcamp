#include <stdio.h>
#include <math.h>

int main (){

    float a = 4.3;
    float b = 8.9;

    printf ("a is %f\n", a);
    printf ("b is %f\n", b);

    //swap a and b

    float c; //introduce an empty container

    c=a;
    a=b;
    b=c;
    
    //print new values

    printf("a is now  %f\n", a);
    printf("b is now %f\n", b);

    return 0;
}