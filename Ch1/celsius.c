//
// Created by Administrator on 2020/1/24.
//

#include <stdio.h>

/**
 * 当 fahr = 0, 20, ..., 300 时, 分别打印华氏温度与摄氏温度对照表
 */

main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* 温度表的下限 */
    upper = 300;    /* 温度表的上限 */
    step = 20;      /* 步长 */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
//        printf("%d\t%d\n", fahr, celsius);
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
