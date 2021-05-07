import random

mynum = random.randint(1,10)
guesstaken=0
print("What's Your Good Name ?")
yourname = input()
print("Hey, "+ yourname +" I'm thinking of a number between 1-10 ! Can you guess ")

for guesstaken in range(6):
    yournum = input()
    yournum = int(yournum)
    if yournum < mynum:
        print("No, That's Too Low")

    if yournum > mynum:
        print("No, That's Too high")

    if yournum == mynum:
        break

if yournum == mynum:
    guesstaken=str(guesstaken+1)
    print("Yeah, You guessed the number in " + guesstaken + " attempts")

if yournum != mynum:
    print("Your Bad ! , You were unable to guess the number")

