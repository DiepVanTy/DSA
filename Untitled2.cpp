#include <stdio.h>
void insertEnd(int a[], int n );
void insertPositon(int a[], int e, int *n, int position );
void inserIncrement(int a[], int e, int *n);
void PrinArray (int a[], int n);
void deleteValue(int a[], int e, int *n);
main() {
    /*NOTE:  begin, end, middle, consecutive elements are equal*/
    int a[] = {2, 2, 4, 5, 7};
    int n = 5;
    deleteValue(a, 7, &n );
    PrinArray(a, n);
}

/*---------------INSERT-------------------*/

/*insert end of array*/
void insertEnd(int a[], int e, int *n )  {
    a[*n] = e;
    *n = *n + 1;
}

/*insert in specified position*/
void insertPositon(int a[], int e, int *n, int position ) {
    int i;
    for(i = *n - 1; i >= position; i--) {
        a[i + 1] = a[i];
    }
    a[position] = e;
    *n = *n + 1;
}

/*insert still ensures incremented array version*/
void inserIncrement(int a[], int e, int *n) {
    int i, position = *n;
    for(i = 0; i < *n; i++) {
        if(a[i] >= e ) {
            position = i;
            break;
        }
    }
    
    for(i = *n - 1; i>= position; i--) {
        a[i + 1] = a[i];
    }
    a[position] = e;
    *n = *n + 1;
}
/*---------------DELETE-------------------*/
/*delete specified value*/
void deleteValue(int a[], int e, int *n) {
    int i = 0, j ;
    while(i < *n) {
        if(a[i] == e) {
             /* variable i is the positon */
            for(j = i ; j < *n - 1; j++) {
                a[j] = a[j+1];
            }
            *n = *n - 1;
        }
        else i++;
    }
}
/*---------------PRINT-------------------*/

void PrinArray (int a[], int n) {
	int i = 0;
    for(i = 0; i < n; i++) {
        printf("%d, ", a[i]);
    }
}
