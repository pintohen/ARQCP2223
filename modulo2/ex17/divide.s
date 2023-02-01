.section .data
    .global val1
    .global val2

.section .text
    .global divide

divide:
    movl val1(%rip), %eax # %eax = val1
    movl val2(%rip), %ebx # %ebx = val2
    cmpl $0, %ebx        # if val2 == 0
    je dividerZero        # jump to dividerZero
    
    cdq                  # sign extend %eax to %edx:%eax
    idivl %ebx # %eax = %eax / %ebx
    jmp end

dividerZero:
    movl $0, %eax # %eax = 0
    jmp end
    
end:
    ret
    