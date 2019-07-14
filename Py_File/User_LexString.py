for _ in range(int(input())):
    s = input()
    p = input()

    s1 = str()

    for x in s:
        if x in p:
            s1 += x

    print(s1)
