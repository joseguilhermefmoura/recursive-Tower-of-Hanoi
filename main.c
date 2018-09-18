#include <stdio.h>
#define  EXIT_SUCCESS 0
// Counting variable >>
int i;
// <<

void   moveDisk(int, char, char, char);
double power(int, int);

int main(){
	int disks;
	
	printf("Type the number of disks you want: "); // The way of moving the disks depend of the number of disks
	scanf("%d", &disks);
	
	printf("\nMoves:\n\n");
	moveDisk(disks, 'A', 'C', 'B'); // This function prints the moves by itself
	printf("\nTotal of moves: %.0lf \n", power(2, disks) - 1); // Math formula [n = 2^m - 1] that describes the number of moves of a Tower of Hanoi, where n = number of moves and m = number of diks.
	printf("\n\n\n");
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

void moveDisk(int numberOfDisks, char originPin, char destinyPin, char auxiliaryPin){
	if(numberOfDisks == 1) 
		printf("Move disk %d from %c to %c.\n", numberOfDisks, originPin, destinyPin);
	else {
		moveDisk((numberOfDisks - 1), originPin, auxiliaryPin, destinyPin);
		printf("Move disk %d from %c to %c.\n", numberOfDisks, originPin, destinyPin);
		moveDisk((numberOfDisks - 1), auxiliaryPin, destinyPin, originPin);
	}
}

double power(int x, int y){ // Just did a simple powering function cause I didn't want to import math.h.
    int result = 1;

    for(i = 0; i < y; ++i)
        result *= x;

    return result;
}
