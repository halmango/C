#include <stdio.h>
#include <string.h> /* strcpy 함수를 이용하기 위해 인클루드
                           string.h 는 문자열 함수를 사용할 때 인클루드 */

int main(void) // 메인 함수 시작
{
    char str[80] = { 0 };
    strcpy(str, "wine"); // strcpy(복사 받을 배열 명, 복사할 문자열, 복사할 수); 로 구성됨
    printf("%s, %d\n", str, strlen(str)); // strlen(str) 은 str의 크기를 확인 할 떄 사용 len이랑 비슷한 것 같음
    return 0;
}

// result : wine, 4