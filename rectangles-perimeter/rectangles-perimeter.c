#include <stdio.h>
#include <math.h>

int main(){

    //Perimeter = 2L+2W

    float length, width, perimeter;

    printf("What is the length of the rectangle\n");
    scanf("%f", &length);
    printf("What is the width of the rectangle\n");
    scanf("%f", &width);

    perimeter = (2*length) + (2*width); // or (length +length + width + width)

    printf ("The perimeter of the rectangle is %f\n", perimeter);
    return 0;
}