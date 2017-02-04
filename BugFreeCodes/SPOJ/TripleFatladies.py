import math

def main():
	t=int(raw_input().strip())
	for _ in xrange(t):
		k=int(raw_input().strip())
		print eight(k)

def gen():
	m=1
	while(True):
		yield m**3
		m+=1

def eight(k):
	p=0
	gen_obj=gen()
	while(True):

		qb=(gen_obj.next())
		q=str(qb)
		boolean=q.endswith("888")
		if(boolean==True):
			p+=1
			if(p==k):
				return qb**(1.0/3)









if __name__=='__main__':
	main()