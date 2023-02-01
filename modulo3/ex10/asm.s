.section .data
    .global ptr1
    .global ptr2
    .global ptr3

.section .text
    .global str_cat

str_cat:

    pushq %rbp
    movq %rsp, %rbp

    movq ptr1(%rip), %r9 # place pointer to ptr1 in r9
    movq ptr2(%rip), %rdx # place pointer to ptr2 in rdx
    movq ptr3(%rip), %rax # place pointer to ptr3 in rax

    write_ptr1:
        movb (%r9), %cl # place value of *ptr1 in cl
        movb %cl, (%rax) # place value of cl in *ptr3

        cmpb $0, %cl # check if value of cl is 0
        je write_ptr2 # if ptr1 is over, jump to write_ptr2(concatenate with second string)

        incq %r9 # ptr1++
        incq %rax # ptr3++
        jmp write_ptr1 # loop

    write_ptr2:
        movb (%rdx), %cl # place value of *ptr2 in cl
        movb %cl, (%rax) # place value of cl in *ptr3

        cmpb $0, %cl # check if value of cl is 0
        je end # if ptr2 is over, jump to end

        incq %rdx # ptr2++
        incq %rax # ptr3++
        jmp write_ptr2 # loop



end:
    movq %rbp, %rsp
    popq %rbp
    ret

