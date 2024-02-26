m,b = [int(x) for x in input().split(' ')]
if(m>0):
    print(" +")
    if(b>0):
        for i in range(m-1):print()
        print("+")
        for i in range(b-1):print()
        print("0")
elif(m<0):
    print("+")
    if(b+m>0):
        for i in range(b+m-1):print()
        print("+")
        for i in range(-b-m-1):print()
        print("0")
    else:
        for i in range(b-1):print()
        print("0")
else:
    print("++")
    for i in range(b-1):print()
    print("0")

