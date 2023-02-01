.section .data
    .global ptrvec
    .global num

.section .text
    .global vec_zero

vec_zero:

    movq ptrvec(%rip), %rcx # load ptrvec address into %rcx
    movl num(%rip), %edx # number of elements into %edx
    movb $0, %al # counter of zeroed elements    

    iterate:

        cmpl $0, %edx # check if there are any elements left
        je end # if not, jump to end

        cmpl $100, (%rcx) # compare element with 100
        jge replace # if it is greater or equal, jump to replace(replace with 0)

        addq $4, %rcx # if not, increment the pointer
        decl %edx # decrement the number of elements
        jmp iterate # continue iterating the vector

    replace:
        movl $0, (%rcx) # replace the element with 0
        addq $4, %rcx # increment the pointer
        decl %edx # decrement the number of elements
        incb %al # increment the counter of zeroed elements
        jmp iterate # continue iterating the vector


end:
    ret
