.section .data
    .equ ADDRESS_OFFSET, 84

.section .text
    .global update_address # void update_address(Student * s, char * new_address)
    # rdi = s, rsi = new_address

update_address:
    leaq ADDRESS_OFFSET(%rdi), %rdi # rdi = &s->address
    call strcpy # strcpy(s->address, new_address)

    ret
