#include <stdio.h>
#include <math.h>

int main() {
    int i = 12345;  // 預設數字
    int result;

    // 提取個位數和千位數
    int unit_digit = i % 10;                // 個位數
    int thousand_digit = (i / 1000) % 10;  // 千位數

    //去掉原先
    result =  i-(unit_digit)-(thousand_digit*1000);
    // 重組數字
    result += unit_digit*1000+thousand_digit;

    printf("結果: %d\n", result);

    return 0;
}