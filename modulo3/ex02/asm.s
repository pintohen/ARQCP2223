.section .data
    .global ptr1
    .global ptr2
    .equ oneByte, 1
    .equ size, 1
    .equ o, 'o'
    .equ u, 'u'
    .equ finalChar, '\0'


.section .text
    .global str_copy_porto

str_copy_porto:
    movq ptr1(%rip), %rdi # load ptr1
    movq ptr2(%rip), %rsi # load ptr2

    cmpq $0, %rdi # compare ptr1 to last char(it's a 0)
    je end

    loop_start:
        movb (%rdi), %al # load byte from ptr1
        cmpb $o, %al # compare byte to 'o'
        je replace # if equal, replace with 'u'
        movb %al, (%rsi) # store byte to ptr2
        
        

        continue:
            cmpb $0, %al # compare ptr1 to last char(it's a 0)
            jz end # jump to end if zero flag is set
            
            incq %rdi # increment ptr1
            incq %rsi # increment ptr2

            jmp loop_start # jump to the loop start
    

    replace:
        movb $u, (%rsi) # store 'u' to ptr2
        jmp continue # jump to continue

end:
    ret


