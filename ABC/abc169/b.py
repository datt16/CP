n=int(input())
arr=list(map(int, input().split()))
arr=sorted(arr) 
ans=1
for val in arr:
 ans*=val
 if ans>10**18:
   print(-1)
   break
else:
 print(ans)