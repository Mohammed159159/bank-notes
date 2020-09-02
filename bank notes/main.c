#include<stdio.h>

int main() {

    int n; // The total number
    int no; // The maximum note

    printf(" Enter The Maximum Note (in powers of ten, EX: 10, 100, 1000, ...): ");
    scanf_s(" %d", &no);

    printf(" Enter A number: ");
    scanf_s(" %d", &n);



    // i is the available notes, ex: 100, 50, 20, 10, 5, 1
    // note is the number of the available notes
    // reduce is used to get numbers from (25, 250, 2500, ...) to (20, 200, 2000, ...)
    for (int i = no, note, reduce = 1; i != 0; i /= 2)
    {
        if (i == 25 * (no / (100 * reduce)))
        {
            i = 20 * (no / (100 * reduce));
            reduce = (reduce == 1) ? reduce + 9 : reduce + 10;
        }
        if (i == 2)
            i = 1;

        note = n / i;
        printf("\n\n There are %d Note(s) of %d", note, i);
        n = n % i;

    }
}
