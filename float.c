#include <stdio.h>

void main() {
    float sum;
    int i;
    sum = 0;

    for (i = 0; i <= 100; i ++ ) {
        sum += 0.1;
    }

    printf("%f", sum);


}
