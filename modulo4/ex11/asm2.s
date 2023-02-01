.section .data
    .global call_proc # int
    # a(int) in %edi, b(int) in %esi, c(short) in %dx, d(char) in %cl

call_proc:
    # prologue
    pushq %rbp
    movq %rsp, %rbp
    subq $32, %rsp # allocate 32 bytes on stack

    # body
    movl %edi, -8(%rbp) # int x1 = a;
    movl %esi, -16(%rbp) # int x2 = b;
    movw %dx, -24(%rbp) # short x3 = c;
    movb %cl, -32(%rbp) # char x4 = d;

    movl -8(%rbp), %edi # first argument is x1
    leaq -8(%rbp), %rsi # second argument is &x1
    movl -16(%rbp), %edx # third argument is x2
    leaq -16(%rbp), %rcx # fourth argument is &x2
    movw -24(%rbp), %r8w # fifth argument is x3
    leaq -24(%rbp), %r9 # sixth argument is &x3

    movq -32(%rbp), %rax # seventh argument is x4 (first to be pushed)
    pushq %rax
    
    leaq -32(%rbp), %rax # eighth argument is &x4 (second to be pushed)
    pushq %rax
    
    
    
    call proc # call proc

    

    movl -8(%rbp), %eax # place x1 in %eax
    addl -16(%rbp), %eax # %eax = x1 + x2

    movswl -24(%rbp), %r9d # place x3 in %r9d
    movsbl -32(%rbp), %ecx # place x4 in %ecx
    subl %ecx, %r9d # %r9d = x3 - x4

    cdq
    imull %r9d # %eax = (x1 + x2) * (x3 - x4)

    addq $24, %rsp # pop 8 bytes from stack
    
    # epilogue
    movq %rbp, %rsp
    popq %rbp
    ret
