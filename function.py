def factorial(n):
    summ = 1

    for x in range(2,n+1):
        summ = summ*x

    print(summ)

factorial(3)
