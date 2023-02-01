.section .data
    .equ bitmask, 0xFFFFFFFF


.section .text
    .global join_bits
    # a in edi, b in esi, pos in edx

join_bits:
    movl $bitmask, %r9d # maskHelper
    
    movl $31, %ecx # ecx = 31
    subl %edx, %ecx # ecx = 31 - pos

    shrl %cl, %r9d # maskHelper = maskHelper >> (31 - pos)
    
    # maskB = ~maskA
    movl %r9d, %r8d
    notl %r8d 
    
    movl %edi, %eax # eax = a
    andl %r9d, %eax # eax = a & maskA
    andl %r8d, %esi # esi = b & maskB
    orl %esi, %eax # eax = (a & maskA) | (b & maskB)
    ret
