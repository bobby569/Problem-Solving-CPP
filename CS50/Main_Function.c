#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]){
	int i;
	int j;

	//print arguments
	for(i = 0; i < argc; i++){
		for(j = 0, n = strlen(argv[i]); j < n; j++){
			printf("%c\n", argv[i][j]);
		}
		printf("\n");
	}
}