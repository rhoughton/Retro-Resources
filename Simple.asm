codeseg segment
  assume cs:codeseg, ds:codeseg
  org 100h
start: jmp begin
msg1: db 0Ah, ODh, "hello, please enter your name: $'
msg2a: db 0Ah, 0Dh, "Well, $"
msg2b: db ', how do you like computers?, 0Ah, 0Dh, '$'
name_buf: db 21
    db 0 ;buffer for name input
    db 20 dup(' ')

begin: lea dx, msg1 ;ask for users name
    move ah,9
    int 21h
    mov dx, offset name_buf ;get name via string input
    mov ah,0Ah
    int 21h
    mov dx, offset msg2a ;write 1st part of response
    mov ah,9
    int 21h
    cl, byte ptr name_buf + 1 ;get char count to cl
    xor ch,ch ;count in cx
    mov si, offset name_buf + 2 ;get buffer addr
    mov ah,2 ;set up for char disp
    jcxz done ;check for null string
disp_char lodsb ;get char from buffer 
    mov dl,al ;mov to dl for service 2 
    int 21h
    loop disp_char ;loop till all char displayed
done: mov ah,9 ;write rest of msg 
    mov dx, offset msg2b
    int 21h
    mov ax, 4C08h ;terminate process
    int 21h
codeseg ends
    end start 
/***/
