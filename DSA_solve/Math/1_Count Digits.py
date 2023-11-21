a=int(input("Enter the number:"))


def test(a):
    b=0
    while (a!=0):
            a//=10
            b+=1
    return b    
    
print(test(a))   
