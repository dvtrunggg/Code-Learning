.data
iArraySize: .word 10
iArray: .word 12, 32, 13, 43, 17, 1, -2, -45, 0, 11
numResult: .asciiz "Minimum number: "
idxResult: .asciiz "\nIndex: "
.text
main:
### StartCodeHere:
### EndCodeHere:
 # print your results
 la $a0, numResult
 li $v0, 4
 syscall
 move $a0, $s0
 li $v0, 1
 syscall
 la $a0, idxResult
 li $v0, 4
 syscall
 move $a0, $s1
 li $v0, 1
 syscall
 #stop program
 li $v0, 10
 syscall
#your function start from here
