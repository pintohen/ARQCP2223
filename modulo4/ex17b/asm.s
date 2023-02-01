.section .text
	.global greater_date

    # date1 is in edi
    # date2 is in esi
	
greater_date:
		
    movl %edi, %ecx # %ecx = date1
    movl %esi, %edx # %edx = date2

    shrl $8, %edx # %edx = date2 >> 8
    shrl $8, %ecx # %ecx = date1 >> 8

    cmpw %cx, %dx # compare year
    jg date2 # if year1 < year2, go to date2

    cmpw %dx, %cx # compare year
    jg date1 # if year1 > year2, go to date1

    movl %esi, %edx # %edx = date2
    movl %edi, %ecx # %ecx = date1

    shrl $24, %edx # %edx = date2 >> 24
    shrl $24, %ecx # %ecx = date1 >> 24

    cmpb %cl, %dl # compare month
    jg date2 # if month1 < month2, go to date2

    cmpb %dl, %cl # compare month
    jg date1 # if month1 > month2, go to date1

    movl %esi, %edx # %edx = date2
    movl %edi, %ecx # %ecx = date1

    cmpb %cl, %dl # compare day
    jg date2 # if day1 < day2, go to date2

    cmpb %dl, %cl # compare day
    jg date1 # if day1 > day2, go to date1

date1:
    movl %edi, %eax # %eax = date1
    jmp end # go to end

date2:
    movl %esi, %eax # %eax = date2
    jmp end # go to end

end:
    ret # return
    