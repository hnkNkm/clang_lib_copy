bits 64

section .data

section .text
    global print

print:
    mov rax, 1       ; システムコール番号 1 (sys_write)
    mov rdi, 1       ; ファイル記述子 1 (標準出力)
    ; rsi には文字列のアドレスが渡される (C言語から)
    ; rdx には文字列の長さが渡される (C言語から)
    syscall          ; システムコールを呼び出し
    ret
