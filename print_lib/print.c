#include "print.h"
#include "print.h"
#include <string.h>
#include <stdio.h>

extern void print(const char *str, unsigned long len);

// 独自の文字列長計算関数
unsigned long my_strlen(const char *str) {
    const char *s;
    for (s = str; *s; ++s) {}
    return (unsigned long)(s - str);
}

void print_wrapper(const char *str) {
    printf("%s\n",str);
    printf("%zu\n", strlen(str));
    print(str, my_strlen(str));
}
