#include<stdio.h>

int main(){
	FILE *fptr;
	fptr= fopen("bt05.txt","w");
	
	char text[100];
	int lines;
	
	printf("Moi ban nhap so dong: ");
	scanf("%d",&lines);
	getchar();
	for(int i=0;i<lines;i++){
		printf("Moi ban nhap noi dung dong %d: ",i+1);
		fgets(text,100,stdin);
		fprintf(fptr,"%s",text);
	}
	fclose(fptr);
	
	fptr= fopen("bt05.txt","r");
	printf("Noi dung trong file la: \n");
	for(int i=0;i<lines;i++){
		fgets(text,100,fptr);
		printf("%s",text);
	}
	return 0;
}
