#include <stdio.h>


int main(){
	int *filePointer;
	char buffer[] = "Duc Anh: con ga FC Online";
	filePointer = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\bai1.txt", "w");
	
	fwrite(buffer, 1, sizeof(buffer), filePointer);
	
	fclose(filePointer);
	
	return 0;
}
