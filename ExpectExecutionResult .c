#include <stdio.h>
#include <string.h> /* strcpy �Լ��� �̿��ϱ� ���� ��Ŭ���
                           string.h �� ���ڿ� �Լ��� ����� �� ��Ŭ��� */

int main(void) // ���� �Լ� ����
{
    char str[80] = { 0 };
    strcpy(str, "wine"); // strcpy(���� ���� �迭 ��, ������ ���ڿ�, ������ ��); �� ������
    printf("%s, %d\n", str, strlen(str)); // strlen(str) �� str�� ũ�⸦ Ȯ�� �� �� ��� len�̶� ����� �� ����
    return 0;
}

// result : wine, 4