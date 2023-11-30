import os

try:
    os.remove("Vigenere_wyniki.txt")
except:
    pass

entry1 = open ("dokad.txt", "r")
entry2 = open ("szyfr.txt", "r")
exit = open("Vigenere_wyniki.txt", "a")

exit.write("#task1\n\n")

#part 1

key1 = "LUBIMYCZYTAC"
keylen1 = 12
keyplace = 0
uncoded = entry1.readline()
result = ""

for i in range(0, len(uncoded)):
    char = ord(uncoded[i])
    code = ord(key1[keyplace%keylen1])
    if (65<=char<=90):
        char-=65
        char+=(code-65)
        char%=26
        char+=65
        keyplace+=1
        keyplace%=keylen1-1

    result+=chr(char)
    #print (char)

print(result)
exit.write(result)
exit.write("\n-------------------------------------------------------------\n")
exit.write("#task2\n\n")

#task2

uncoded = entry2.readline()
key2 = entry2.readline()

result = ""
keylen  = key2.__len__()
keyplace = 0

for i in range(0, len(uncoded)):
    char = ord(uncoded[i])
    code = ord(key2[keyplace%keylen])
    if (65<=char<=90):
        #print("Entrance:", chr(char),"with code",chr(code))
        char-=65
        char-=(code-65)
        char%=26
        char+=65
        keyplace+=1
        keyplace%=keylen-1
        #print("changed to", char, "with", code)
   
    result+=chr(char)
    #print (char)
    
print (result)
exit.write(result)
exit.write("\n-------------------------------------------------------------\n")
exit.write("#task3\n\n")

letters = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]

length = 0

for i in range (0,len(uncoded)):
    char = ord(uncoded[i])
    if(65<=char<=90):
        char -= 65
        letters[char]+=1
        length+=1

exit.write("a)\n")

for i in range (0,26):
    print(chr(i+65),":",letters[i])
    exit.write(chr(i+65))
    exit.write(": ")
    exit.write(str(letters[i]))
    exit.write("\n")

ko=0

for i in letters:
    ko+=(i*i-1)

print(ko)

ko /= (length*(length-1))

print(ko)

ko -= 0.0385

print(ko)

predict = 0.0285/ko
predict = round(predict,2)


exit.write("\nb)\n")
print("predicted", predict)
print("actual", keylen)
exit.write("predicted: ")
exit.write(str(predict))
exit.write("\n")
exit.write("actual: ")
exit.write(str(keylen))
exit.write("\n")

entry1.close()
entry2.close()
exit.close()