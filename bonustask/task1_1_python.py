def add(a, b):
    return a+b
def subtract(a,b):
    return a-b
def multiply(a,b):
    return a*b
def devide(a,b):
    return a/b

while(True):
    print("1. ADD 2.MINUS 3. MULTIPLE 4. DEVIDE")
    print("Enter the menu (Enter -1 to exit): ",end="")
    num = int(input())
    
    if(num!=1 and num!=2 and num!=3 and num!=4 and num!=-1):
        continue
    
    if(num==-1): break
    
    print("input two : ",end="")
    a,b = map(int,input().split())
    
    if num == 1:
        result = add(a,b)
    elif num == 2:
        result = subtract(a,b)
    elif num == 3:
        result = multiply(a,b)
    elif num == 4:
        result = devide(a,b)
        
    print("result : ",result)
    
print("python_202212977_ChoiMinKyu")