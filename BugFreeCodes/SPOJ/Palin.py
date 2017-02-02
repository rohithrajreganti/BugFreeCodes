import math
def main():
	t=int(raw_input())
	for _ in xrange(t):
		
		k=int(raw_input())
		next_palin(k+1)
         





def next_palin(k):
	while(True):
		
		rev_val=str(k)[::-1]
		
		if(str(k)==rev_val):
			print k
			
			break
    
		k+=1
		
		



if __name__=='__main__':
	main()