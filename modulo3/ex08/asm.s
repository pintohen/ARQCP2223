.section .data
    .global even # long
    .global num # int
    .global ptrvec # long

.section .text
    .global test_even # long
    .global vec_sum_even # long

test_even:

    pushq %rbp
	movq %rsp, %rbp
    
    movq $0, %rdx # load 0 in rdx (remainder of division will store here)
    movq even(%rip), %rax # load even in rax
    movq $2, %rdi # load 2 in rdi
    idivq %rdi # divide rax by rdi
    
    cmpq $0, %rdx # compare rdx with 0(if rdx is 0, then rax is even)
    je isEven # if rdx is 0, jump to isEven
    jne isOdd # if rdx is not 0, jump to isOdd

        isEven:
            movq $1, %rax # if rdx is 0, load 1 in rax
            jmp end

        isOdd:
            movq $0, %rax # else, load 0 in rax(odd number)
            jmp end

    end:    
        movq %rbp, %rsp
	    popq %rbp
        ret # return

# End of first function definition


vec_sum_even:

    pushq %rbp
	movq %rsp, %rbp

        movq $0, %r8 # load 0 in r8(sum)
        movq ptrvec(%rip), %rdi # load ptrvec in rdi
        movslq num(%rip), %rcx # load num in rcx

    
        loop_start: # loop start

            cmpq $0, %rcx # compare rcx(counter) with 0
            je end_of_vec # if rcx(counter) is 0, jump to end_of_vec

            movq (%rdi), %rax # load the number in rdi[index] into rax
            movq %rax, even(%rip) # load rax in even

            # all these pushes and pop will only serve to save the register's values while executing the first function
            pushq %r8 # push r8
            pushq %rdi # push rdi
            pushq %rcx # push rcx(counter) to stack since it will be changed
            call test_even # call test_even
            popq %rcx # restore rcx(counter) from stack(pop)
            popq %rdi # restore rdi from stack(pop)
            popq %r8 # restore r8 from stack(pop)

            cmpq $1, %rax # compare rax with 1(if rax is 1, then the number is even)
            je sumNumber # if rax is 1, jump to isEven

            decq %rcx # decrement rcx(counter)
            addq $8, %rdi # increment rdi(counter)
            jmp loop_start # jump to loop_start

            sumNumber:
                addq (%rdi), %r8 # add number to r8(sum)
                decq %rcx # decrement rcx(counter)
                addq $8, %rdi # increment rdi(index)
                jmp loop_start # jump to loop_start
            
        end_of_vec:
            movq %r8, %rax # load r8(sum) in rax
            movq %rbp, %rsp
	        popq %rbp
        
            ret # return
    