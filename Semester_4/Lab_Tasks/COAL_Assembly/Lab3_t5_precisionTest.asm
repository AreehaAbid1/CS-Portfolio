.data
val: .float 0.1

.text
.globl main

main:
    # Load 0.1
    la t0, val
    flw f0, 0(t0)   # f0 = 0.1

    li t1, 10       # loop counter = 10
    fmv.s f1, f0    # f1 = sum (start with 0.1)

loop:
    addi t1, t1, -1
    beqz t1, end

    fadd.s f1, f1, f0   # sum += 0.1
    j loop

end:
    # Print result
    fmv.s fa0, f1
    li a7, 2
    ecall

    # Exit
    li a7, 10
    ecall