//
// Created by Administrator on 2020/1/24.
//

#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

main() {
    printf("%4s | %6s\n", "Fahr", "Celsius");
    printf("%4s-|-%6s\n", "----", "------");
    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%4d   %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}