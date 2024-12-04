#include <stdio.h>
#include <string.h>
#include <math.h>
#define WORD 16

void getBinary(char bin[], char str[], int n) {
    //앞에 0추가
    int len = strlen(str);
    int padding = n - len;
    for (int i = 0; i < padding; i++) {
        bin[i] = '0';
    }

    for (int i = 0; i < len; i++) {
        bin[padding + i] = str[i];
    }

    bin[n] = '\0';
}

void complement2(char bin[], int n) {
    // 수 반전
    for (int i = 0; i < n; i++) {
        bin[i] = (bin[i] == '0') ? '1' : '0';
    }

    // 마지막에 1을 더함
    for (int i = n - 1; i >= 0; i--) {
        if (bin[i] == '0') {
            bin[i] = '1';
            break;
        } else {
            bin[i] = '0';
        }
    }
}

int bin2dec(char bin[], int n) {
    int num = 0;
    int negative = (bin[0] == '1'); // 음수인지 확인

    if (negative){
        complement2(bin, n); // 2의 보수 해제
    }

    for(int i = 0; i < n; i++){
        num = num * 2 + (bin[i] - '0');
    }

    if(negative){
        num = -num; // 음수 처리
        complement2(bin, n); // 원래의 2의 보수 복원
    }
    return num;
}

int main() {
    char input1[WORD + 1];
    char input2[WORD + 1];
    char op[10];

    char binary1[WORD + 1] = {0};
    char binary2[WORD + 1] = {0};

    int result;
    int num1, num2;

    printf("<<<<<<<<input>>>>>>>>\n");
    gets(input1);
    gets(op);
    gets(input2);

    getBinary(binary1, input1, WORD);
    getBinary(binary2, input2, WORD);

    num1 = bin2dec(binary1, WORD);
    num2 = bin2dec(binary2, WORD);

    switch (op[0]) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        case '%': result = num1 % num2; break;
        default: printf("잘못된 연산자입니다. (+, -, *, /, %%)\n"); break;
    }

    printf("%s(%d) %c %s(%d) = %d\n", binary1, num1, op[0], binary2, num2, result);

    return 0;
}

