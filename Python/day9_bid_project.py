import os 
print("Welcome to Bidding Auction!")
bids = {}
while True:
    name = input("What is Your name? :")
    bid = int(input("What is Your Bid ? : $"))
    bids[name] = bid
    if input("Are there any other bidders ? Type yes or no : ").lower()=='no' :
        break
    os.system('cls')
currbid = 0
winner = ""
for key , value in bids.items() :
    if value>currbid:
        winner = key
        currbid = value

print(f"The Winner is {winner} With a bid of ${currbid}")
