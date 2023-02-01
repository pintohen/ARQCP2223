.section .data
    .global current #short
    .global desired
    .equ decreaseTemp, 240
    .equ increaseTemp, 180

.section .text
    .global needed_time

needed_time:
    movsbl current(%rip), %edx # place current in edx while converting it to a 32-bit value
    movsbl desired(%rip), %ecx # place desired in ecx while converting it to a 32-bit value

    cmpl %edx, %ecx # compare current and desired
    jg desired_greater # if desired > current, jump to desired_greater
    jl current_greater # if desired < current, jump to current_greater
    je current_equals_desired # if current == desired, jump to current_equals_desired


    desired_greater:
        subl %edx, %ecx # subtract current from desired
        movl %ecx, %eax # move the result to eax
        imull $increaseTemp, %eax # multiply by 180(3*60(converts to seconds))
        jmp end

    current_greater:
        subl %ecx, %edx # subtract desired from current
        movl %edx, %eax # move the result to eax
        imull $decreaseTemp, %eax # multiply by 240(4*60(converts to seconds))
        jmp end

    current_equals_desired:
        movl $0, %eax # set eax to 0
        jmp end


    end:
        ret
