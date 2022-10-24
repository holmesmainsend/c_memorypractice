#include <stdio.h>
#include <stdlib.h>

int main() {
    int pageCount = 328;
    int *pPageCount = &pageCount;
    double rating = 3.7;
    char grade = 'B';

    printf("%p\n", &pageCount);

    return 0;
}