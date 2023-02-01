.section .data
    .equ C_OFFSET0, 0
    .equ C_OFFSET1, 1
    .equ C_OFFSET2, 2
    .equ W_OFFSET0, 4 # due to memory alignment
    .equ W_OFFSET1, 6
    .equ W_OFFSET2, 8
    .equ J_OFFSET, 12 # due to memory alignment

.section .text
    .global fill_s2 # void fill_s2(s2 *s, short vw[3], int vj, char vc[3])
    # s in rdi, vw in rsi, vj in edx, vc in rcx



fill_s2:
    movb (%rcx), %al # al = vc[0]
    movb %al, C_OFFSET0(%rdi) # s->c[0] = vc[0]
    movb 1(%rcx), %al # al = vc[1]
    movb %al, C_OFFSET1(%rdi) # s->c[1] = vc[1]
    movb 2(%rcx), %al # al = vc[2]
    movb %al, C_OFFSET2(%rdi) # s->c[2] = vc[2]

    movw (%rsi), %ax # ax = vw[0]
    movw %ax, W_OFFSET0(%rdi) # s->w[0] = vw[0]
    movw 2(%rsi), %ax # ax = vw[1]
    movw %ax, W_OFFSET1(%rdi) # s->w[1] = vw[1]
    movw 4(%rsi), %ax # ax = vw[2]
    movw %ax, W_OFFSET2(%rdi) # s->w[2] = vw[2]

    movl %edx, J_OFFSET(%rdi) # s->j = vj
    ret
    
    