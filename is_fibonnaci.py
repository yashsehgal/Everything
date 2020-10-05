#to check a number is fibonnaci or not

def isfib(n):
    a=0
    b=1
    ls=[a,b]
    for i in range(2,100):
        c=a+b
        a=b
        b=c
        ls.append(c)


    if n in ls:
        print('it is a fibbonaci number')
    else:
       print('it is not a fib no.')

n=int(input('enter a number:'))
isfib(n)
