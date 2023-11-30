p=68480406462161287469
q=790738119649411319
e=65535
n=p*q
phi=(p-1)*(q-1)

def gcdExtended(a, b): 
    # Base Case 
    if a == 0 :  
        return b,0,1
             
    gcd,x1,y1 = gcdExtended(b%a, a) 
     
    # Update x and y using results of recursive 
    # call 
    x = y1 - (b//a) * x1 
    y = x1 
     
    return gcd,x,y

def code(a):
    return pow(a,e,n)

gcd,x,d=gcdExtended(phi,e)

def decode (a):
    return pow(a,d,n)

