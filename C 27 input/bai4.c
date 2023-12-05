#include <stdio.h>
int main(){
	FILE *filePointer;
	char buffer[100];
	int numLines = 0;
	
	filePointer = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\bai4.txt", "r");
	
	while (fread(buffer, sizeof(char), sizeof(buffer), filePointer) > 0) {
        for (int i = 0; i < sizeof(buffer); i++) {
            if (buffer[i] == '\n') {
                numLines++;
            }
        }
    }
	fread(buffer, sizeof(char), sizeof(buffer), filePointer);

	printf("So dong trong file la: %d\n", numLines);
	printf("Noi dung van ban la: \n%s", buffer);
	
	fclose(filePointer);
}
