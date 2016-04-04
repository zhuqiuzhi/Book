import random

secret = random.randint(1,99)
guess = 0
tries = 0

print "AHOY! I'm the Dread Pirate Roberts, and I have a sercret!"
print " It is a number from 1 to 99. I'll give you 6 tries."

while guess != secret and tries < 6:
	guess = int(raw_input("what's you guess? "))
	if guess < secret:
		print "Too low, ye scurvy dog!"
	elif guess > secret:
		print "Too high,landlubber!"
	tries += 1
if guess == secret:
	print "Avast! you got is!"
else:
	print "No more guesses!"
	print "The secret number was", secret
