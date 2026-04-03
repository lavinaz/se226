#lab 5 python part


#Q1

def factorial(x):#func tanim

    if(x==0): #if 0 or 1 the ans is 1
        return 1
    if (x==1):
        return 1
    else:
        return x * factorial(x - 1) #if not 0 or 1 the normal formula


    #Q2

func =lambda x,n:x**n / factorial(n)

def exp_x(x, n):
    sum = 0
    for i in range(n):
        for i in range(n):
            sum +=func(x,i)
            return sum

        # Q3


globalresult= 0

def result(n, r):

    global globalresult
    if n < 0:
        return #negative
    else:
        globalresult += r ** n
        result(n-1, r)#the recursive part    it continues till 0 
