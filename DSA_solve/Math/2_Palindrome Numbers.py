a=int(input("Enter the number:"))


def test(a):
    b=0
    c=a
    while (c!=0):
            b=b*10+(c%10)
            c//=10
            
    return (b==a)    
    
print(test(a))   
