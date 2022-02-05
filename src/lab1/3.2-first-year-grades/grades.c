// grades.c
#include <stdio.h>

int main() {
    printf("Grades program starting\n");

    float firstYearGradesArray[6];

    printf("Adding grades to the array\n");

    firstYearGradesArray[0] = 76;
    firstYearGradesArray[1] = 69.6;

    printf("Trimester 1 Grades %f, %f", firstYearGradesArray[0], firstYearGradesArray[1]);

    return 0;
}
