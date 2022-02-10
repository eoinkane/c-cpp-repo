// grades.c
#include <stdio.h>

int main() {
    printf("Grades program starting\n");

    float firstYearGradesArray[6];

    printf("Adding grades to the array\n");

    firstYearGradesArray[0] = 76; // Software Development 1 (Tri 1)
    firstYearGradesArray[1] = 69.6; // Information Systems in Organisations (Tri 1)
    firstYearGradesArray[2] = 100; // Human Computer Interface (Blanket Pass) (Tri 2)
    firstYearGradesArray[3] = 100; // Mathematics for Software Engineering (Blanket Pass) (Tri 2)
    firstYearGradesArray[4] = 85; // Computer Systems (Tri 3)
    firstYearGradesArray[5] = 68.5; // Professional Practice (Tri 3) 

    printf("Number of grades %li\n", sizeof(firstYearGradesArray)/sizeof(firstYearGradesArray[0]) );
    printf("Trimester 1 Grades %f, %f\n", firstYearGradesArray[0], firstYearGradesArray[1]);

    return 0;
}
