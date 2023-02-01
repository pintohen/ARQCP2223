.section .data
    .global ptrvec
    .global num
    .equ toAdd, 2
    

.section .text
    .global vec_add_two

vec_add_two:
    movq ptrvec(%rip), %rdi # places ptrvec address into rdi
    movq $0, %rsi # places index address into rsi
    movq num(%rip), %rcx # places num into rcx
    cmpq $0, %rcx # compares num to 0
    je end # if num is 0(empty vector), jump to end

loop_start:
    addl $toAdd, (%rdi, %rsi, 4) # adds 2 to the value of ptrvec[index]
    
    incq %rsi # increments rsi by one (index++)
    
    cmpq %rcx, %rsi  # compares rsi to num
    jl loop_start 

end:  
    ret
