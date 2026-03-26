.data

.text
.globl main

main:
    # Read first float
    li a7, 7        # ecall: read float
    ecall
    fsgnj.s f0 ,fa0, fa0   # move input to f0

    # Read second float
    li a7, 7
    ecall
    fsgnj.s f0 ,fa0, fa0    # move input to f1

    # Add floats
    fadd.s f2, f0, f1   # f2 = f0 + f1

    # Print result
    fmv.s fa0, f2   # move result to print register
    li a7, 2        # ecall: print float
    ecall

    # Exit program
    li a7, 10
    ecall