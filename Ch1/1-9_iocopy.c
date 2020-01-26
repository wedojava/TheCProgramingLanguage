#include <stdio.h>

#define NONBLANK 'a'

main() {
    int c, lastc;
    lastc = NONBLANK;

    while ((c = getchar()) != EOF) {
//  Method 1
//        if (c != ' ')
//            putchar(c);
//        if (c == ' ')
//            if (lastc != ' ')
//                putchar(c);
//        lastc = c;

//  Method 2
//        if (c != ' ')
//            putchar(c);
//        else if (lastc != ' ')
//            putchar(c);
//        lastc = c;
//  Method 3
        if (c != ' ' || lastc != ' ')
            putchar(c);
        lastc = c;
    }
}