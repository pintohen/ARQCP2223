.section .text
    .global calculate
    .global print_result

    # o1 is in edi
    # o2 is in esi

calculate:

movl %edi, %r9d # r9d = a
movl %esi, %r8d # r8d = b
subl %esi, %edi # a = a - b
pushq %rdi # push a

movl %edi, %ecx # ecx = a
movl %r9d, %esi # esi = a
movl %r8d, %edx # edx = b
movb $'-', %dil # d = '-'
pushq %r8 # push b
pushq %r9 # push a

call print_result # print a - b

popq %r9 # pop a
popq %r8 # pop b

movl %r8d, %ecx # ecx = b
imull %r9d, %ecx # b = b * a
movl %r9d, %esi # esi = a
movl %r8d, %edx # edx = b
movb $'*', %dil # d = '*'
pushq %rcx # push b * a

call print_result # print b * a

popq %rcx # pop b * a
popq %rdi # pop a

subl %ecx, %edi # a = a - b * a
movl %edi, %eax # eax = a

end:
	ret # return



