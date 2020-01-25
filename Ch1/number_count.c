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

    int c, n1;
    n1 = 0;
    while ((c=getchar()) != EOF)
        if (c == '\n')
            ++n1;
    printf("n1: %d\n", n1);
}