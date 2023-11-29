#include "string.h"
#include <stdlib.h>
#include <string.h>

// 文字列からString型を作成
String string_create(const char *chars) {
    String str;
    str.length = strlen(chars);
    str.chars = malloc(str.length + 1);
    strcpy(str.chars, chars);
    return str;
}

// String型のメモリを解放
void string_free(String *string) {
    free(string->chars);
    string->chars = NULL;
    string->length = 0;
}

// String型のコピーを作成
String string_copy(const String *string) {
    return string_create(string->chars);
}

// 二つのString型を連結
String string_concat(const String *string1, const String *string2) {
    String new_str;
    new_str.length = string1->length + string2->length;
    new_str.chars = malloc(new_str.length + 1);

    strcpy(new_str.chars, string1->chars);
    strcat(new_str.chars, string2->chars);

    return new_str;
}

// String型の長さを取得
size_t string_length(const String *string) {
    return string->length;
}
