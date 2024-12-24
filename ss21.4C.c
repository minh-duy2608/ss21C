#include<stdio.h>

int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","r");
	
	char line[100];
	fgets(line,100,fptr);
	
	printf("Dong dau tien trong file la: %s",line);
	
	fclose(fptr);
	
	return 0;
}
