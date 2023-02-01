.section .text
    .global proc # void
    # x1(int) in rdi, p1(int) in rsi, x2(int) in rdx, p2(int) in rcx, 
    # x3(short) in r8, p3(short) in r9
    # x4 first on stack, p4 second on stack

proc:
    pushq %rbp
	movq %rsp, %rbp

    movl %edi, (%rsi) # *p1 = x1
    addl %edx, (%rsi) # *p1 = x1 + x2

    movl %edx, (%rcx) # *p2 = x2
    subl %edi, (%rcx) # *p2 = x2 - x1

    movw %r8w, (%r9)  # *p3 = x3
    addw %dx, (%r9)   # *p3 = x3 + x2

    movb 24(%rbp), %al #  al = x4
    movb $3, %cl      #  cl = 3
    imulb %cl # al = al * 3

    movq 16(%rbp), %rcx # rcx = p4
    movb %al, (%rcx)   # *p4 = 3 * x4

    movq %rbp, %rsp
	popq %rbp
    ret
    