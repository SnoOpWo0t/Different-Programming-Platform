n , k , l , c, d,p ,nl , np = list(map(int,input().split()))
total_d = k*l
total_d = total_d//nl #for per person (how many drinks can be make)
tot_slice = c*d
tot_salt = p//np #for per person (how many drinks can be make)

ans =  min(tot_salt,tot_slice,total_d) //n
print(ans)