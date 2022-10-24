#include <stdio.h>
#include <stdlib.h>

int main() {
    int pageCount = 328;
    int *pPageCount = &pageCount;
    double rating = 3.7;
    double *pRating = &rating;
    char grade = 'B';
    char *pGrade = &grade;

    printf("%d\n", *pPageCount);

    return 0;
}