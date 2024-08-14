int("%.2f %.2f"%(cr,rr))
    
t = int(input())
for i in range(t):
    r1, r2, b = map(int, input().split())
    
    cr = r2 / ((300 - b) / 6.0)
    
    if r1 < r2:
        rr = 0.00
    else:
        rr = (r1 - r2 + 1) / (b / 6.0)
    
    print("%.2f %.2f" % (cr, rr))
