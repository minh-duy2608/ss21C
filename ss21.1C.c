#include<stdio.h>

int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","w");
	
	char text[100];
	printf("Moi ban nhap vao mot chuoi: ");
	fgets(text, 100, stdin);
	fprintf(fptr,text);
	
	fclose(fptr);
	
	return 0;
}
