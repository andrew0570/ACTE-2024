n = int(input())
a = int(input())
prices = [a]
count=1
for i in range(n-1):
    a = int(input())
    if min(prices)>a: count+=1
    if len(prices)==5:
        prices.pop(0)
    prices.append(a)
print(count)