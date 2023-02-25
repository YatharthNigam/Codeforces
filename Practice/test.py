t = input()
for j in range(t):
     n = input()
     l = input()
     r = input()
     k = input()
     arr = []
     ans=0
     for i in range(n):
         arr.append(input())
    arr.sort()
    for i in arr:
        if(i>=l and i<=r and i<=k):
            ans=ans+1
            k = k-i
        if k==0:
            break
    print(ans)