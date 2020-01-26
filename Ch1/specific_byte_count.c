#include <stdio.h>
main()
{
    int c, nb, nt, nl;
    nb = 0;
    nt = 0;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == (' '))
            nb++;
        else if (c == '\t')
            nt++;
        else if (c == '\n')
            nl++;
    }
    printf("number of blank: %d\n", nb);
    printf("number of tab: %d\n", nt);
    printf("number of line: %d\n", nl);
}