#include <stdio.h>

int main()
{
    int P, Q;
    printf("Enter number : ");
    scanf_s("%d", &P);
    scanf_s("%d", &Q);
    int i = 0;
    while (i < P) {
        int j = 0;
        while (j < Q) {
            if ((i + j) % 2 == 0) {
                printf("*");
            }
            else {
                printf("*");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}