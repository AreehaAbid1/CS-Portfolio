.data
name: .string "Areeha\n"

.text
.globl main

main:
    # Load address of string
    la a0, name

    # Print string
    li a7, 4
    ecall

    # Exit
    li a7, 10
    ecall