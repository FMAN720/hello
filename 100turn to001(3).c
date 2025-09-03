#include <stdio.h>
int main() {
    char num[4]; // 三位数 + 字符串结束符 '\\\\0'
    scanf("%s", num);

    // 交换第一位和第三位字符
    char temp = num[0];
    num[0] = num[2];
    num[2] = temp;

    printf("%s\\\\n", num); // 直接输出字符串（保留前导零）
    return 0;
}
