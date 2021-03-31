; LongestIncreasingSequence      (Longest.asm)

; Assembly language subroutine that receives two input parameters: the offset 
; of an array and the array's size. It must return a count of the longest 
; strictly increasing sequence of integer values. 

.586
.model flat,C

LongestIncreasingSequence PROTO,
	arrayPtr:PTR DWORD, arraySize:DWORD

MAX_INT = 2147483647

.code
;-----------------------------------------------
LongestIncreasingSequence PROC USES edi,
	arrayPtr:PTR DWORD, arraySize:DWORD
;
;-----------------------------------------------
	
	mov esi, arrayPtr
	mov ecx, arraySize
	mov edi, 1
	mov eax, 0
	
L1: 
	mov eax, [esi + 4]
	cmp eax, [esi]
	add esi, 4
	ja above
	jna nabove
above:
	inc edi
	cmp edi, eax
	ja write
	loop L1
	jmp exit
nabove:
	loop L1
	jmp exit
write:
	mov ebx, edi
	loop L1	
exit:
	mov eax, ebx
	ret
LongestIncreasingSequence ENDP

END

