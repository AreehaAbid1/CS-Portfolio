.data
A: .float 7.5
B: .float 2.5
Result: .float 0.0   # where we will store result

.text
.globl main

main:
    # Load A
    la t0, A
    flw f0, 0(t0)

    # Load B
    la t1, B
    flw f1, 0(t1)

    # Subtract: f2 = f0 - f1
    fsub.s f2, f0, f1

    # Store result in memory
    la t2, Result
    fsw f2, 0(t2)

    # Exit
    li a7, 10
    ecall