#include <stdio.h>
#include <string.h>

int main(){
	char str1[] = "test123@gmail.com";
	int length = strlen(str1), number, string, special;
	
	for(int i = 0 ; i < length; i++){
		if(isalpha(str1[i])){
			number++;
		}else if(isdigit(str1[i])){
			string++;
		}else 
			special++;
		}
	printf("so luong ky tu chu cai: %d\n", number);
	printf("so luong ky tu chu so: %d\n", string);
	printf("so luong ky tu dac biet: %d\n", special);
	
	return 0;
}

