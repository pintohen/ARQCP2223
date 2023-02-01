.section .data
    .equ STRUCT_A_X_OFFSET, 4 
    .equ STRUCT_B_AX_OFFSET, 4
    .equ STRUCT_B_B_OFFSET, 8
    .equ STRUCT_B_Z_OFFSET, 20 

.section .text
    .global fun1 # short fun1(structB *s)
    .global fun2 # short fun2(structB *s)
    .global fun3 # short* fun3(structB *s)
    .global fun4 # short fun4(structB *s)
    # s is in %rdi

fun1:
    movq STRUCT_B_AX_OFFSET(%rdi), %rax # s -> a.x is 4(%rdi), now in %rax
    jmp end # jmp end

fun2:
    movq STRUCT_B_Z_OFFSET(%rdi), %rax # s -> z is 20(%rdi), now in %rax
    jmp end # jmp end

fun3:
    leaq STRUCT_B_Z_OFFSET(%rdi), %rax # address of s -> z is 20(%rdi), now in %rax
    jmp end # jmp end

fun4:
    movq %rdi, %rdx # s is now in %rdx
    movq STRUCT_B_B_OFFSET(%rdi), %rdx # s -> b is 8(%rdi), now in %rdx
    movq (%rdx), %rcx # b is now in %rcx
    movq STRUCT_A_X_OFFSET(%rdx), %rax # s -> b -> x is 4(%rdx), now in %rax
    jmp end # jmp end
end:
    ret # ret



