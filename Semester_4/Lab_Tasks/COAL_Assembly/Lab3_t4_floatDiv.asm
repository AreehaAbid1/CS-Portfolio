.data
A: .float 10.0
B: .float 3.0

.text
.globl main

main:

    # Load A
    la t0, A
    flw f0, 0(t0)

    # Load B
    la t1, B
    flw f1, 0(t1)

    # Division: Q = A / B
    fdiv.s f2, f0, f1

    # Print quotient
    fmv.s fa0, f2
    li a7, 2
    ecall

    # Multiply: Q * B
    fmul.s f3, f2, f1

    # Print (Q * B)
    fmv.s fa0, f3
    li a7, 2
    ecall

    # Exit
    li a7, 10
    ecall