def fib(n):
    if n>1:
        an=fib(n-1)+fib(n-2)
    else:
      #  print('does not make sense')
        an=1
    return an

# the actual execution stuff
for i in range(10):
    print("a_{} = {}".format(i, fib(i)))

