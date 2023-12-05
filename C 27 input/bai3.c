#include <stdio.h>
int main(){
	FILE *filePointer;
	char buffer[100];
	int numLines;
	
	printf("Nhap so dong: ");
	scanf("%d", &numLines);
	fflush(stdin);
	
	filePointer = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\bai3.txt", "w");
	
	printf("Nhap noi dung tung dong: \n");
    for (int i = 0; i < numLines; i++) {
        printf("Dong %d: ", i + 1);
        gets(buffer);
        fprintf(filePointer, "%s\n", buffer);
	}
	
    fclose(filePointer);
    
    filePointer = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\bai3.txt","r");
    fread(buffer, sizeof(char), sizeof(buffer), filePointer);
    printf("%s\n", buffer);
    
    
    fclose(filePointer);
    
    return 0;
}
