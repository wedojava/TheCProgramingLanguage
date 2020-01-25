#include <stdio.h>
main(){
    int c;
    c = (getchar()!=EOF);
    if (c == 1){
        printf("The value of 'getchar() != EOF' is 1");
    } else if (c == 0){
        printf("iThe value of 'getchar() != EOF' is 0");
    }
}