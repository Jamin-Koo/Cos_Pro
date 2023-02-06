#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int korean, int english) {
    int answer = 0;
    int max = 70 * 3;

    answer = max - (korean + english);
    return answer;
}

int main() {
    int korean = 70;
    int english = 60;
    int ret = solution(korean, english);

    printf("sloution 함수의 반환 값은 %d 입니다.\n", ret);
}