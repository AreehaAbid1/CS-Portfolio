.text
.globl main

main:
    # Read first number (dividend)
    li a7, 5
    ecall
    mv t0, a0

    # Read second number (divisor)
    li a7, 5
    ecall
    mv t1, a0

    # Quotient
    div t2, t0, t1

    # Remainder
    rem t3, t0, t1

    # Print quotient
    mv a0, t2
    li a7, 1
    ecall

    # Print remainder
    mv a0, t3
    li a7, 1
    ecall

    # Exit
    li a7, 10
    ecall