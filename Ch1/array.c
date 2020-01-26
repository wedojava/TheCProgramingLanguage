#include <stdio.h>

main(){
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

//    // To get how c-'0' worked.
//    c = getchar();
//    printf("(c-'0'): %d\n", (c-'0'));
//    ndigit[c-'0'] = c;
//    printf("ndigit[c-'0']: %d\n",ndigit[c-'0']);
//    // input a return:
//    //  a
//    //  (c-'0'): 49
//    //  ndigit[c-'0']: 97


    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digist =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
}