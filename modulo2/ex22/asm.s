.section .data
    .global i
    .global j

.section .text
    .global f
    .global f2
    .global f3
    .global f4

f:
    movl i(%rip), %eax # eax = i
    movl j(%rip), %ecx # ecx = j

    cmp %ecx, %eax # compare ecx and eax
    je equal # if equal, jump to equal
    addl %ecx, %eax # eax += ecx
    decl %eax # eax -= 1

    jmp end

f2:
    movl i(%rip), %eax # eax = i
    movl j(%rip), %ecx # ecx = j

    cmp %ecx, %eax # compare ecx and eax
    jg greater # if greater, jump to greater

    incl %ecx # ecx++
    imul %ecx, %eax # eax *= ecx

    jmp end

f3:
    movl i(%rip), %eax # eax = i
    movl j(%rip), %ecx # ecx = j
    cmp %ecx, %eax # ecx == eax
    jge greater_equal # if greater or equal, jump to greater_equal

    addl %ecx, %eax # eax += ecx
    addl $2, %eax # eax += 2

    movl i(%rip), %esi # esi = i
    addl %esi, %ecx # ecx += esi

    cltd # sign extend eax to edx:eax
    idiv %ecx # eax = eax / ecx, edx = eax % ecx

    jmp end

f4:
    movl i(%rip), %eax # eax = i
    movl j(%rip), %ecx # ecx = j
    addl %ecx, %eax # eax += ecx
    cmp $10, %eax # eax == 10
    jl less # if less, jump to less

    imul %ecx, %ecx # ecx *= ecx
    movl %ecx, %eax # eax = ecx
    movl $3, %ecx # ecx = 3
    cltd # sign extend eax to edx:eax
    idiv %ecx # eax = eax / ecx, edx = eax % ecx

    jmp end

equal:
    subl %ecx, %eax # eax -= ecx
    incl %eax # eax++

    jmp end

greater:
    decl %eax # eax--
    imul %ecx, %eax # eax *= ecx

    jmp end

less:
    movl i(%rip), %eax # eax = i
    imul %eax, %eax # eax *= eax
    movl $4, %ecx # ecx = 4
    imul %ecx, %eax # eax *= ecx

    jmp end

greater_equal:
    movl %eax, %esi # esi = eax
    imul %ecx, %eax # eax *= ecx
    incl %esi # esi++
    movl %eax, %ecx # ecx = eax
    movl %esi, %eax # eax = esi
    cltd # eax = eax:edx
    idiv %ecx # eax = eax / ecx, edx = eax % ecx

    jmp end

end:
    ret
