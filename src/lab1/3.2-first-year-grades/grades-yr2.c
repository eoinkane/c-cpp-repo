// grades-yr2.c
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    printf("Grades program starting\n");

    long double firstYearGradesArray[6];

    printf("Adding grades to the array\n");

    firstYearGradesArray[0] = 76; // Software Development 1 (Tri 1)
    firstYearGradesArray[1] = 69.6; // Information Systems in Organisations (Tri 1)
    firstYearGradesArray[2] = 100; // Human Computer Interface (Blanket Pass) (Tri 2)
    firstYearGradesArray[3] = 100; // Mathematics for Software Engineering (Blanket Pass) (Tri 2)
    firstYearGradesArray[4] = 85; // Computer Systems (Tri 3)
    firstYearGradesArray[5] = 68.5; // Professional Practice (Tri 3)

    long double firstAndSecondYearGradesArray[12];

    printf("Copying grades to the new array\n");

    memcpy(firstAndSecondYearGradesArray, firstYearGradesArray, sizeof(firstYearGradesArray));

    printf("Adding 2nd year grades to the new array\n");

    firstAndSecondYearGradesArray[6] = 91; // Database Systems (Tri 1)
    firstAndSecondYearGradesArray[7] = 98; // Object Oriented Software Development (Tri 1)
    firstAndSecondYearGradesArray[8] = 82.6; // Software Engineering Methods (Tri 2)
    firstAndSecondYearGradesArray[9] = 69; // Project Management for Information Systems (Tri 2)
    firstAndSecondYearGradesArray[10] = 72; // Professional Practice (Tri 3)
    firstAndSecondYearGradesArray[11] = 40432817;

    printf("Year 1 Trimester 1 Grades from new array %Lf, %Lf\n", firstAndSecondYearGradesArray[0], firstAndSecondYearGradesArray[1]);
    printf("Year 2 Trimester 1 Grades from new array %Lf, %Lf\n", firstAndSecondYearGradesArray[6], firstAndSecondYearGradesArray[7]);
    printf("Year 2 Trimester 2 Grades from new array %Lf, %Lf\n", firstAndSecondYearGradesArray[8], firstAndSecondYearGradesArray[9]);
    printf("Year 2 Trimester 3 Grades from new array %Lf\n", firstAndSecondYearGradesArray[10]);
    printf("Matriculation Number from new array %ld\n", (long int)firstAndSecondYearGradesArray[11]);

    return 0;
}
