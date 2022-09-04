def solution(x,y):
	B={}
	for A in zip(x,y):
		if B.get(A[0],0)>=A[1]:return False
		B[A[0]]=A[1]
	return True
