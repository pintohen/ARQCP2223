.section .data
    .global num
    .global ptrvec

.section .text
    .global vec_greater10

vec_greater10:

    movq ptrvec(%rip), %rcx # load address of ptrvec into rcx
    movl num(%rip), %edx # edx = num
    movl $0, %eax # eax = 0

    loop:
        cmpl $0,  %edx # edx == 0
        je end # if not, jump to end

        cmpl $10, (%rcx) # compare element with 10
        jg sum_elements # if greater, jump to sum_elements

        addq $4, %rcx # if not, increment the pointer
        decl %edx # decrement the counter
        jmp loop # jump to loop

    sum_elements:
        addq $4, %rcx # increment the pointer
        decl %edx # decrement the counter
        incl %eax # increment the counter
        jmp loop # jump to loop
end:
    ret

