#include <stdio.h>
#include <stdlib.h>
#include "string_lib/string.h"  // stringライブラリ
#include "print_lib/print.h"             // printライブラリ

int main() {
    // String型のインスタンスを作成
    String myString = string_create("Hello, World!");

    // Stringの内容を表示
    print_wrapper("Hello");  // print_wrapper関数を使用して文字列内容を表示

    // メモリを解放
    string_free(&myString);

    return 0;
}