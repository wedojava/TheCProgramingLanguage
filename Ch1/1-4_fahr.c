//
// Created by Administrator on 2020/1/24.
//

#include <stdio.h>

/**
 * 当 fahr = 0, 20, ..., 300 时, 分别打印华氏温度与摄氏温度对照表
 */

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* 温度表的下限 */
    upper = 300;    /* 温度表的上限 */
    step = 20;      /* 步长 */

    celsius = lower;
    printf("%6s | %6s\n", "Celsius", "Fahr");
    printf("%7s-|-%6s\n", "----", "------");
    while (celsius <= upper) {
        fahr = (9.0 * celsius)/5.0 + 32.0;
        printf("%7.0f | %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
