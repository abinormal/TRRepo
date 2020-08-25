#include <stdio.h>

// Create an array[5,8] for the keyboard
	char aRemote[5,8] = {
						{'a','b','c','d','e','1','2','3'},
						{'f','g','h','i','j','4','5','6'},
						{'k','l','m','n','o','7','8','9'},
						{'p','q','r','s','t','.','@','0'},
						{'u','v','w','x','y','z','_','/'}
	};

int *whereis(char letter){
	
	for (int i=0; j<=5; i++){
		for (int j=0; j<=8; j++){
			if aRemote[i,j] == letter;
				return i,j;
		}
	}
	return NULL;
}


int main(){

// init word here.
char* word = "hello";
// init cursor position pointer
int cursor = [0,0]; // init to 'a'
int coordinate = [0,0];
int moveCount = 0;


// Work out the length of the word
    int wordLen = strlen(word);
// Create an array of characters of word: wordArray - already in an array.
	//char wordArray[wordLen] // TODO: put the letters here after some googling.
	for (int i = 0; i < strlen(wordLen); i++){
		coordinate = whereis(word[i]);
		if (coordinate){
			// find difference between coords and add moves.
			// Add OK button push also
			// new cursor position
			cursor = coordinate;
		} else {
			printf("Whereis failed. \n");
		}
	}
// 
// LOOP: for each letter in the wordArray{
// 			Search for the letter that we need
// 			Check mod of the difference in position in row and then in column
// 			update cursor moves +1 for OK
//			Update current position of cursor 
//			update wordArray index number
//		}
// return the number of cursor moves
//		



	return 0;
}