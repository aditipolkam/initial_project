sum = 0
for x in range(1,1000):
	if(x%3 == 0):
		sum+=x
	elif(x%5 == 0):
		sum+=x		

print("{} is the sum.".format(sum));

