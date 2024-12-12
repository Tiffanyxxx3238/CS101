#include <stdio.h>

int main() {
    int n = 7;  // 設定金字塔的高度

    // 只有兩個迴圈，外層控制行數，內層控制空格和數字
    for (int i = 1; i <= n; i++) {
        // 印出空格部分
        printf("%*s", n - i, "");
        // 印出數字部分
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);  // 每一層印出相同的數字
        }
        printf("\n");  // 換行
    }

    return 0;
}