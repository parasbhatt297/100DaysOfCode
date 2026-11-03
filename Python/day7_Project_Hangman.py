from day7_hangman_art import *
import random
print(design)
word = random.choice(words)
life = 6 
# guessed = ['_','_','_','_','_','_'] ==> this is valid but i will use list manipulation 
guessed = ['_']*6
border = "****************************"
while life>0 and '_' in guessed :
    print(f"Word to guess: {' '.join(guessed)}")
    user_letter = input("Guess a letter: ").lower()
    if user_letter in word :      
            indices = findall(word , user_letter)
            for i in indices:
                  guessed[i] = user_letter
            print("".join(guessed))
            if '_' not in guessed : break
            print(list[life-1])
            print(f"{border}{life}/6 Lives Left{border}")
    else:
            print(f"You guessed {user_letter}, that's not in the word. You lose a life.")
            life-=1
            if life>0: print(list[life-1])
            print(f"{border}{life}/6 Lives Left{border}")

if life==0:
       print(f"{border}IT WAS {word}! YOU LOSE{border}")
else :
       print("You win.")
