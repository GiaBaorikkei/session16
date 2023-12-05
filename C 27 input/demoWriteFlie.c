#include <stdio.h>
// C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\demoWriteFile.txt

int main(){
	int *filePointer;
	char buffer[] = "Duc Anh: con ga FC Online";
	// su dung fopen de mo file com duong dan voi che do r
	filePointer = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\demoWriteFile.txt", "w+");
	
	//Su dung fwrite de ghi noi dung vao file
	fwrite(buffer, 1, sizeof(buffer), filePointer);
	
	
	fclose(filePointer);
	
	return 0;
}
