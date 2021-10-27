#include<stdio.h>

void main()
{
    printf("Please, write size of array:\n");
    int i, N, f, S1, S2;
    scanf("%i", &N);

    int a[N];
    for (i = 0; i < N; i++)
        scanf("%i", &a[i]);

    for (i = 0; i < N/2; i++){
        S1 += a[i];
    }
    for (i = N/2; i < N; i++){
        S2 += a[i];
    }

    printf("Write number of element: ");
    scanf("%i\n", &f);
    if (f - 1 > N/2){
        a[f - 1] -= S2 - S1;
    } else {
        a[f - 1] += S2 - S1;
    }

    for (i = 0; i < N; i++){
        printf("%i, ", a[i]);
    }
}