#include <stdio.h>
main(){
    long nc1;

    nc1 = 0;
    while (getchar() != EOF)
        ++nc1;
    printf("nc1: %ld\n", nc1);

    double nc2;
    for (nc2 = 0; getchar() != EOF; ++nc2)
        ;
    printf("nc2: %.0f\n", nc2);
}