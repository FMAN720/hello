#include <stdio.h>
int main() {
    char num[4]; // ��λ�� + �ַ��������� '\\\\0'
    scanf("%s", num);

    // ������һλ�͵���λ�ַ�
    char temp = num[0];
    num[0] = num[2];
    num[2] = temp;

    printf("%s\\\\n", num); // ֱ������ַ���������ǰ���㣩
    return 0;
}
