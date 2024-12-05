#include <stdio.h>

int main(){
    int i = 8;
    if( i &(i-1)){//清除數字i二進制表示中最右邊的1
        printf("true");
    }
    else{
        printf("false");
    }
}