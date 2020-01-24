//
// Created by Administrator on 2020/1/24.
//

#include <stdio.h>

main() {
    printf("%4s | %6s\n", "Fahr", "Celsius");
    printf("%4s-|-%6s\n", "----", "------");
    for (int fahr = 0; fahr <= 301; fahr = fahr + 20) {
        printf("%4d   %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}