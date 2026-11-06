from art import caesar_cipher
print(caesar_cipher)
def encrypt(s , k) :
  decode = []
  for x in s:
       if x==' ' :
          decode.append(x)
          continue
       curridx= ord(x)-ord('a')
       curridx=(curridx+k)%26
       newchar = chr(curridx + ord('a'))
       decode.append(newchar)

  return "".join(decode)

def decrypt(s , k) :
  decode = []
  for x in s:
       if x==' ' :
          decode.append(x)
          continue
       curridx= ord(x)-ord('a')
       curridx=(curridx-k)%26
       newchar = chr(curridx + ord('a'))
       decode.append(newchar)

  return "".join(decode)


while True : 
  direction = input("You want to Encode or decode Message?").lower()
  s = input("Enter Your message : ").lower()
  k = int(input("Enter Secret Key you want to Set : "))   
  if direction=="encode":
    res =  encrypt(s, k)
    print(res)
  elif direction=="decode":
    res = decrypt(s, k)
    print(res)
  else : print("Enter Either encode or decode!")
  decide = input("Type 'yes' if you want to try again otherwise type 'no' :").lower()
  if decide=='no': break