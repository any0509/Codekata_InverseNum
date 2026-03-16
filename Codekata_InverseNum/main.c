#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int len = 0;
    long long num = n;
    while (num >= 1) {
        len += 1;
        num /= 10;
    }

    int* answer = (int*)malloc(sizeof(long long int) * len);

    num = n;
    for (int i = 0; i < len; ++i) {
        answer[i] = num % 10;
        num /= 10;
    }

    return answer;
}