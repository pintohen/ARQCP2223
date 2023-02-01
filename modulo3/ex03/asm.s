.section .data
    .global ptr1
    .global ptr2
    .equ oneByte, 1
    .equ size, 1
    .equ o, 'o'
    .equ u, 'u'
    .equ O, 'O'
    .equ U, 'U'
    .equ finalChar, '\0'


.section .text
    .global str_copy_porto2

str_copy_porto2:
    movq ptr1(%rip), %rdi # load ptr1
    movq ptr2(%rip), %rsi # load ptr2

    cmpq $0, %rdi # check if ptr1 is null (last char)
    je end

    loop_start:
        movb (%rdi), %al # load byte from ptr1
        cmpb $o, %al # compare byte to lower 'o'

        je replace_lower # if equal, replace with lower 'u'
        cmpb $O, %al # compare byte to upper 'O'

        je replace_upper # if equal, replace with upper 'U'
        movb %al, (%rsi) # store byte to ptr2
        
        continue:
            cmpb $0, %al # check if byte is null (last char)
            jz end # jump to end if zero flag is set
            
            incq %rdi # increment ptr1
            incq %rsi # increment ptr2

            jmp loop_start # jump to the loop start

    replace_lower:
        movb $u, (%rsi) # store 'u' to ptr2
        jmp continue # jump to continue

    replace_upper:
        movb $U, (%rsi) # store 'U' to ptr2
        jmp continue # jump to continue 
end:
    ret
