import sys
num=int(raw_input())
cmp=[0 for i in range(num)]
while num>0:
    n=int(raw_input())
    ar1=[int(i) for i in raw_input().split()]
    i=0
    while i<n:
        temp=ar1[i]
        num1=i-temp
        if num1<0:
            num1=0
        num2=i+temp
        if num2>=n:
            num2=n-1
        cmp[num1:num2]+=1
        i=i+1
    i=0
    while i<n :
        temp=int(raw_input())
        if temp not in cmp:
            print("NO")
            sys.stdout.flush()
            break
        i=i+1
    else :
        print("YES")
    num=num-1

