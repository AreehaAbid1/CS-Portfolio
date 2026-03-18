.model small
.stack 100h
.data
msg1 db 'Student Name: $'
msg2 db 'Areeha Abid $'
msg3 db 0Dh, 0Ah, 'University Name: $'
msg4 db 'Hamdard University $'
msg5 db 0Dh, 0Ah, 'Department Name: $'
msg6 db 'FEST $'
msg7 db 0Dh, 0Ah, 'City: $'
msg8 db 'Karachi $'
.code
main proc

mov ax, @data
mov ds, ax

;1st msg
mov ah,09h
mov dx, offset msg1
int 21h
;2nd msg
mov ah,09h
mov dx, offset msg2
int 21h

;3rd msg
mov ah,09h
mov dx, offset msg3
int 21h
;4th msg
mov ah, 09h
mov dx, offset msg4
int 21h

;5th msg
mov ah,09h
mov dx, offset msg5
int 21h
;6th msg
mov ah,09h
mov dx,offset msg6
int 21h

;7th msg
mov ah,09h
mov dx,offset msg7
int 21h
;8th msg
mov ah,09h
mov dx,offset msg8
int 21h

mov ah,4ch
int 21h

main endp
end main
