.text
.globl main

main:
    # Read A
    li a7, 5
    ecall
    mv t0, a0      # t0 = A

    # Read B
    li a7, 5
    ecall
    mv t1, a0      # t1 = B

    # Read C
    li a7, 5
    ecall
    mv t2, a0      # t2 = C

    # (A + B)
    add t3, t0, t1

    # (A + B) * C
    mul t4, t3, t2

    # Print result
    mv a0, t4
    li a7, 1
    ecall

    # Exit
    li a7, 10
    ecall