#include <stdio.h>
#include <math.h>

int main() {
    double PI = 0.0;  // 初始化為 0
    double term;
    int sign = 1;     // 初始正負號
    int x = 1;

    for (int i = 1; ; i += 2, x++) {
        term = 4.0 / i;
        PI += sign * term;
        sign *= -1;

        if (fabs(PI - 3.14159) < 0.000005) {  // 更嚴格的條件
            break;
        }
    }

    printf("計算出 π = %.5f\n", PI);
    printf("最小的項數 x = %d\n", x);

    return 0;
}
