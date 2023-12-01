# コンパイラとフラグの設定
CC=gcc
CFLAGS=-Istring_lib -Iprint_lib
ASM=nasm
ASMFLAGS=-f elf64

# オブジェクトファイル
OBJ=string_lib/string.o print_lib/print_c.o print_lib/print.o

# 実行ファイル
EXEC=main

# デフォルトターゲット
all: $(EXEC)

# 実行ファイルの生成
$(EXEC): $(OBJ) main.c
	$(CC) $(CFLAGS) main.c $(OBJ) -o $(EXEC)

# stringライブラリのコンパイル
string_lib/string.o: string_lib/string.c
	$(CC) $(CFLAGS) -c string_lib/string.c -o string_lib/string.o

# printライブラリのC部分のコンパイル
print_lib/print_c.o: print_lib/print.c
	$(CC) $(CFLAGS) -c print_lib/print.c -o print_lib/print_c.o

# printライブラリのアセンブリ部分のコンパイル
print_lib/print.o: print_lib/print.asm
	$(ASM) $(ASMFLAGS) print_lib/print.asm -o print_lib/print.o

# クリーンアップ
clean:
	rm -f $(OBJ) $(EXEC)
