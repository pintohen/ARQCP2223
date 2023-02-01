.section .data
    .equ coff, 0
    .equ ioff, 4
    .equ doff, 8
    .equ joff, 12
.section .text
    .global fill_s1 # void fill_s1(s1 *s, int vi, char vc, int vj, char vd)
    # rdi = s, esi = vi, dl = vc, ecx = vj, r8b = vd

fill_s1:
    movb %dl, coff(%rdi) # s1->c = vc
    movl %esi, ioff(%rdi) # s1->i = vi
    movb %r8b, doff(%rdi) # s1->d = vd
    movl %ecx, joff(%rdi) # s1->j = vj

    ret
