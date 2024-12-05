#include <stdio.h>
int main() {
    for (int i = 1; i <= 81; i++) { // 共 9x9=81 格
        int y = (i - 1) / 9 + 1;    // 計算 y 值 (列號)
        int x = (i - 1) % 9 + 1;    // 計算 x 值 (行號)
        
        printf("%d*%d=%d\t", y, x, y + x);
        
        if (x == 9) {               // 每當 x 到 9 時換行
            printf("\n");
        }
    }
    return 0;
}
