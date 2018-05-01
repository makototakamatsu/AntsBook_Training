n=int(raw_input())
w=map(int,raw_input().split())
v=map(int,raw_input().split())
W=int(raw_input())

def val_tot(i,j):
    if i==n:
        res=0
    elif j<w[i]:
        res=val_tot(i+1,j)
    else:
        res=max(val_tot(i+1,j),val_tot(i+1,j-w[i])+v[i])
