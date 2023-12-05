#include <stdio.h>
// C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\demoInput.txt

int main(){
	int *filePointer;
	char buffer[100];
	// su dung fopen de mo file com duong dan voi che do r
	filePointer = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\demoInput.txt", "r");
	
	// doc va hien thi du lieu cho nguoi dung 
	fread(buffer, sizeof(char), sizeof(buffer), filePointer);
	
	//Hien thi noi dung co trong file
	printf("Noi dung van ban la: %s", buffer);
	
	fclose(filePointer);
	
	return 0;
}
