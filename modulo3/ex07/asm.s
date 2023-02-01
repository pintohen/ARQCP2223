.section .data
    .global ptr1
    .equ a, 'a'
    .equ A, 'A'
    .equ space, ' '

.section .text
    .global decrypt

decrypt:
    movq ptr1(%rip), %rsi # load ptr1 address into rsi
    movq $0, %rcx # index set on rcx
    movq $0, %rax # counter set on rax

    cmpb $0, (%rsi, %rcx, 1) # check if ptr1 is null
    je end # if null, jump to end

        decrypt_start:
            cmpb $a, (%rsi, %rcx, 1) # check if ptr1[index] == 'a'
            je continue # if true, jump to continue
        
            cmpb $space, (%rsi, %rcx, 1) # check if ptr1[index] == ' '
            je continue # if true, jump to continue

            subb $3, (%rsi, %rcx, 1) # ptr1[index] = ptr1[index] - 3

            incq %rax # counter++

            continue:
                incq %rcx # increment index
                cmpb $0, (%rsi, %rcx, 1) # check if *(ptr1+index) is null
                jne decrypt_start # if not null, jump to loop_start
                jmp end # if null, jump to end

end:
    ret
