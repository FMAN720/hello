#include <stdio.h>

int main() {
    char num[4];
    scanf("%s", num);
    printf("%c%c%c\\n", num[2], num[1], num[0]); // 反向输出每一位字符
    return 0;
}
