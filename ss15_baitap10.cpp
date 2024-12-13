#include <stdio.h>
#include <string.h>

int main(){
	char str1[] = "abcca";
	int length = strlen(str1), numberLoop;
	
	for(int i = 0 ; i < length; i++){
    	numberLoop = 0;
		for(int j = 0 ; j < length; j++){
		  if(str1[i] == str1[j]){
			  numberLoop++;
      		}
	  	}
      printf("so luong ky tu %c xuat hien: %d\n", str1[i], numberLoop);
	}
	
	return 0;
}

