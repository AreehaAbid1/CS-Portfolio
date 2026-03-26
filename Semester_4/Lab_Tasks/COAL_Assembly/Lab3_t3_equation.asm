.data
A: .float 3.0
B: .float 4.0
C: .float 5.0
Result: .float 0.0

.text
.globl main

main:

    # Load A
    la t0, A
    flw f0, 0(t0)

    # Load B
    la t1, B
    flw f1, 0(t1)

    # Multiply A * B
    fmul.s f2, f0, f1

    # Load C
    la t2, C
    flw f3, 0(t2)

    # Add (A*B) + C
    fadd.s f4, f2, f3

    # Store result in memory
    la t3, Result
    fsw f4, 0(t3)

    # Exit
    li a7, 10
    ecall