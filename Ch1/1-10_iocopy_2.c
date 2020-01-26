#include <stdio.h>

main() {
    int c;
    while ((c = getchar()) != EOF){
//  Method 1
//        if (c == '\t')
//            printf("\\t");
//        if (c == '\b')
//            printf("\\b");
//        if (c == '\\')
//            printf("\\\\");
//        if (c != '\t' && c != '\b' && c != '\\')
//            putchar(c);
//  Method 2
        if (c == '\t')
            printf("\\t");
        else if(c == '\b')
            printf("\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}