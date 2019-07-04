globalvar=1

def func():
    global globalvar
    globalvar += 1
    print(globalvar)
    return globalvar

print(func(),globalvar)
