#include<stdio.h>

int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","r");
	char text[2];
	fgets(text,2,fptr);
	
	printf("Ky tu dau tien cua file la: %s",text);
	
	fclose(fptr);
	
	return 0;
}
