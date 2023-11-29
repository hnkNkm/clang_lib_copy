#include <stdio.h>
#include "string_lib/string.h" 

int main() {
    // String型のインスタンスを作成
    String myString = string_create("Hello, World!");

    // Stringの長さを取得
    size_t length = string_length(&myString);

    // 結果を表示
    printf("String: %s\n", myString.chars);
    printf("Length: %zu\n", length);

    // メモリを解放
    string_free(&myString);

    return 0;
}
