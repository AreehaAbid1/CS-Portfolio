.model small
.stack 100h
.data
.code
main proc
mov ax, 3
mov bx, 5
add ax, bx
add ax, 30h
mov dl, al
mov ah, 02h
int 21h

mov ah, 4ch
int 21h
main endp
end main
