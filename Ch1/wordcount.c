#include <stdio.h>

#define IN 1    // 在单词内
#define OUT 0   // 在单词外

main(){
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("lines: %d\twords: %d\tchars: %d\n", nl, nw, nc);
}