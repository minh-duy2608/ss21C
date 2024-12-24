#include<stdio.h>

int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","a");
	
	char text[100];
	printf("Moi ban nhap vao chuoi: ");
	fgets(text, 100, stdin);
	fprintf(fptr,"%s",text);
	
	fclose(fptr);
	
	return 0;
}
