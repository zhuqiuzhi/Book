#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* guess number game */
int main()
{
	int secret,guess,tries;

	srand(time(NULL));
	secret = rand() % 100; 
	guess = 0;
	tries = 0;
	
	printf("A, ha. I am robot, guess a number(0~100), six chance!\n");
	while (tries < 6) {	
		scanf("%d",&guess);
		if (guess == secret)
			break;
		else if (guess < secret)
			printf("Hint: guessed less number\n");
		else
			printf("Hint: guessed large number\n");
		tries++;
	}

	if(guess == secret)
		printf("you got it!\n");
	else
		printf("No more guesses!,The secret number was %d\n",secret);

	return 0;
}
