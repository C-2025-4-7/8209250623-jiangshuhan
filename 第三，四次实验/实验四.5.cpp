#include <stdio.h>
#include <string.h>

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 == 0) {
        return 0;
    }
    if (len1 > len2) {
        return -1;
    }

    for (int i = 0; i <= len2 - len1; i++) {
        int match = 1;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            return i;
        }
    }

    return -1;
}

int main() {
    char s1[100], s2[100];
    printf("请输入第一个字符串s1：");
    scanf("%s", s1);
    printf("请输入第二个字符串s2：");
    scanf("%s", s2);

    int result = indexOf(s1, s2);
    if (result == -1) {
        printf("s1不是s2的子串，返回值：%d\n", result);
    }
    else {
        printf("s1是s2的子串，起始下标：%d\n", result);
    }

    return 0;
}