.text
.globl main

main:
    # Read number
    li a7, 5
    ecall
    mv t0, a0

    # Square = t0 * t0
    mul t1, t0, t0

    # Print result
    mv a0, t1
    li a7, 1
    ecall

    # Exit
    li a7, 10
    ecall