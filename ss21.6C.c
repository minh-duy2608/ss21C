#include<stdio.h>

int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","r");
	
	char text[100];
	fgets(text,100,fptr);
	
	fclose(fptr);
	
	fptr= fopen("bt06.txt","w");
	fprintf(fptr,"%s",text);
	
	fclose(fptr);
	return 0;
}
