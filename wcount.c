#include <stdio.h>


//this program counts the number of words in a file



int wordcount(FILE* fil){

//create character c, which is assigned to words, and set number of words to 0
	char c;
	int num_words = 0;

//set first word in file to 'c'
	
	fscanf(fil, "%c", &c);

	while(!feof(fil)){

//for every space, add another word
		if(c == ' '|| c == '\n'){

			num_words++;

		}

		fscanf(fil, "%c", &c);

//scan next word
	}

	return num_words;



//return number of words
}


//create main function


int main(int argc, char* argv[]){


//create FILE for read in file, integer for number of lines and check the number of arguments read
	FILE* fil = NULL;


	int num_words = 0;


	
	fil = fopen(argv[1], "r");

	
	
	
	num_words = wordcount(fil);

//run word counting function
	
	printf("There are %d word(s).", num_words);

	fclose(fil);

//close file to avoid leaks


	return 0;

}
