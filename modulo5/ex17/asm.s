.section .data
    .equ UNION_B_OFFSET, 24
    .equ SIZEOF_STRUCT_A, 32

.section .text
    .global return_unionB_b
    # char return_unionB_b(structA **matrix, int i, int j)
    # matrix in %rdi, i in %esi, j in %edx

return_unionB_b:
    # prologue
    pushq	%rbp
	movq	%rsp, %rbp

	# local variables
    movq	%rdi, -8(%rbp) # matrix in -8(%rbp) (local variable)
	movl	%esi, -12(%rbp) # i in -12(%rbp) (local variable)
	movl	%edx, -16(%rbp) # j in -16(%rbp) (local variable)

	# get the matrix line
    movl	-12(%rbp), %eax # i in %eax
	cltq # extend %eax to %rax (convert long to quad)
	leaq	0(,%rax,8), %rdx # %rdx = 8 * %rax (i * 8 (size of pointer)) (matrix[i])
	movq	-8(%rbp), %rax  # matrix in %rax
	addq	%rdx, %rax # %rax = %rax + %rdx (matrix + i * 8)
	movq	(%rax), %rdx # %rdx = *(matrix + i * 8)

    # get the matrix column
	movl	-16(%rbp), %eax # j in %eax
	cltq # extend %eax to %rax (convert long to quad)
    imulq $32, %rax, %rax # %rax = %rax * 32 (j * 32 (size of struct A))
	addq	%rdx, %rax # %rax = %rax + %rdx (matrix[i] + j * 32) (matrix[i][j])
	
    # get the union B and return char b
    movb UNION_B_OFFSET(%rax), %al # through the offset of union B, get the char b 

    # epilogue
    movq %rbp, %rsp
	popq %rbp
	ret
	