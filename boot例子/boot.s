BOOTSEG equ 0x07c0

jmp dword BOOTSEG:go

go:
    mov ax, cs
    mov ds, ax
    mov es, ax
    mov ax, msgl
    mov bp, ax
    mov dx, 1004h
    mov cx, 20
    mov ax, 01301h
    mov bx, 000ch 
    mov dl, 0
    int 10h
loop1:
    jmp loop1
msgl: db "Loading System ..."
times 510-($-$$)db 0
dw 0xaa55