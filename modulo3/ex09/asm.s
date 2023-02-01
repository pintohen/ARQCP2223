.section .data
    .global ptrvec # short *
    .global num # int
    .global x # short

.section .text
    .global vec_search # short *

vec_search:

    movq ptrvec(%rip), %rsi # rsi = ptrvec
    movl num(%rip), %eax # eax = num
    movw x(%rip), %cx # cx = x

    loop_start:
        movw (%rsi), %dx # compare *rsi to x
        cmpl $0, %eax # if array is over
        je not_found # jump to not_found

        cmpw %cx, %dx # if (*rsi == x)
        je found # if equal, jump to found
        
        
        decl %eax # decrement eax by 1(num--)
        addq $2, %rsi # increment rsi by 2(ptrvec++)
        jmp loop_start

not_found:
    movq $0, %rax # if not found, return 0
    jmp end

found:
    leaq (%rsi), %rax # if found, return the address of the element
    jmp end

end:
    ret
