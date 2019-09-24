s = list("mnonopoo")
count = 0
for i in range(len(s) - 2):
    if (s[i] == s[i + 1]):
        count += 1
    if (s[i] == s[i + 2]):
        count += 1

if (s[-1] == s[-2]):
    count += 1

for i in range(4, len(s) + 1):
    for j in range(0, len(s) - i + 1):
        m, n = j, j + i
        print(s[m:n], m, n, end="->")
        if ((n - m) % 2 == 0):
            flag = True
            for k in range(m, m + ((n - m) // 2) - 1):
                print(k, (k + ((n - m) // 2)), end=" ")
                if (not (s[k] == s[k + 1] and s[(k + ((n - m) // 2))] == s[
                    (k + ((n - m) // 2)) + 1] and s[k] == s[(k + ((n - m) // 2))])):
                    print("Error", end=" ")
                    flag = False
                    break;
            if (flag):
                count += 1
        else:
            flag = True
            for k in range(m, m + ((n - m) // 2) - 1):
                print(k, (k + ((n - m) // 2)) + 1, end=" ")
                if (not (s[k] == s[k + 1] and s[(k + ((n - m) // 2)) + 1] == s[
                    (k + ((n - m) // 2)) + 2] and s[k] == s[(k + ((n - m) // 2)) + 1])):
                    print("Error", end=" ")
                    flag = False
                    break
            if (flag):
                count += 1
        print()

print(count + len(s))
