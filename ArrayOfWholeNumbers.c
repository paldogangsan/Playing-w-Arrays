#include <stdio.h>
#include <stdlib.h>

int * generateArray(int n) {
    int * t = malloc( n * sizeof(int) );
    if (t) {
        for( int i=0; i<n; i++) {t[i]=i;}
    }
    return t;
}

void printArray(int *a, int n) {
    printf("Array= ");
    for (int i=0; i<n; i++) {
        printf( i? ", %d" : "%d", a[i]);
    }
    printf(".\n");
}

void printArray1(int *a, int n) {
    for(int i=0; i<n; i++) {
        printf("%d", a[i]);
    }
}

int main(int argc, char **argv) {
    int * a;
    int n = 10;

    a= generateArray(n);
    printArray(a,n);

    free(a);
    return 0;
}