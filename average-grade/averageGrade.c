#include <stdio.h>
#include<math.h>

int main() {

    int grade1, grade2, grade3; //3 codes needed for calculations

    printf ("What is your first grade?");
    scanf ("%d", &grade1);
    printf("What is your second grade?");
    scanf("%d", &grade2);
    printf("What is your third grade?");
    scanf("%d", &grade3);

    double averageGrade = ((double)grade1 + grade2 + grade3)/3; //casting result into a double for EXACT average
    printf ("Your average grade is %lf", averageGrade);

    return 0;
}