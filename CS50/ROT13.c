void rot13(char str[]){
	int i;
	
	for(i = 0; i < strlen(str); i++){
		if(isalpha(str[i])){
			str[i] += (toupper(str[i]) <= 'M')? 13 : -13;
		}
	}
}