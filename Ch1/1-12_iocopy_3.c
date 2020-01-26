#include <stdio.h>

#define IN  1  // Inside a word
#define OUT 0  // Outside a word

// 每行一个单词的形式打印其输入
// print input one word per line
main() {
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;
            putchar(c);
        } else {
            putchar(c);
        }
    }

//  My Method
//    while ((c = getchar()) != EOF){
//        if (c != ' ' && c != '\t' && c != '\n')
//            putchar(c);
//        if (c == ' ' || c == '\t' || c == '\n')
//            printf("\n");
//    }



}