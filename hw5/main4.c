#include <stdio.h>
#include <math.h>

int main() {
    int i = 1;  // 預設數字
    int result;

    // 提取個位數和千位數
    int unit_digit = i % 10;                // 個位數
    int thousand_digit = (i / 1000) % 10;  // 千位數

    // 測試用：輸出提取的數字
    printf("個位數: %d\n", unit_digit);
    printf("千位數: %d\n", thousand_digit);
    //去掉原先
    result =  i-(unit_digit)-(thousand_digit*1000);
    // 重組數字
    result += unit_digit*1000+thousand_digit;

    // 輸出結果
    printf("原始數字: %d\n", i);
    printf("結果: %d\n", result);

    return 0;
}
