t = int(input())
for _ in range (t):
    n = int(input())
    copy_n =n # because at the end of the while loop number will become 0 so store the number
    sum = 0 
    order = len(str(n))
    while(n>0):
        digit = n%10 #take the last digit if number is 889 , digit will store 9
        sum+=digit**order
        n = n//10 # remove the last digit ,if number was 889 now number is 88
    if(sum ==copy_n):
        print(f"{copy_n} is an armstrong number!")
    else:
            print(f"{copy_n} is not an armstrong number!")