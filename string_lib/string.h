#ifndef STRING_H
#define STRING_H

#include <stddef.h> // size_tのためのインクルード

// String型の構造体定義
typedef struct {
    char *chars;  // 文字列データ
    size_t length;  // 文字列の長さ
} String;

// 関数の宣言
String string_create(const char *chars);  // 文字列からString型を作成
void string_free(String *string);  // String型のメモリを解放
String string_copy(const String *string);  // String型のコピーを作成
String string_concat(const String *string1, const String *string2);  // 二つのString型を連結
size_t string_length(const String *string);  // String型の長さを取得

#endif
