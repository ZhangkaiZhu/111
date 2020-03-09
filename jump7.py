for a in range(0,101):
    if a%7==0:
        continue
    if a%10==7:
        continue
    if a//10==7:
        continue
    print(a)
    a=a+1
