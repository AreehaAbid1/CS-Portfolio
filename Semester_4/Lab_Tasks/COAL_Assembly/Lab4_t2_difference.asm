.text
.globl main

main:
    # Read first integer
    li a7, 5
    ecall
    mv t0, a0      # store first number

    # Read second integer
    li a7, 5
    ecall
    mv t1, a0      # store second number

    # Subtract: t2 = t0 - t1
    sub t2, t0, t1

    # Print result
    mv a0, t2
    li a7, 1
    ecall

    # Exit
    li a7, 10
    ecall