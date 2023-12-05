#include <stdio.h>


int main(){
	int *filePointer;
	char buffer[100];
	
	filePointer = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\bai2.txt", "r");
	
	
	fread(buffer, sizeof(char), sizeof(buffer), filePointer);
	
	
	printf("Noi dung van ban la: %s", buffer);
	
	fclose(filePointer);
	
	return 0;
}
