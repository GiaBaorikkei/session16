#include <stdio.h>
int main() {
    FILE *filePoiter1, *filePoiter3, *filePoiter5;
    char buffer = 0;

    
    filePoiter1 = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\bai1.txt", "r");
    filePoiter3 = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\bai3.txt", "r");

    filePoiter5 = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\bai5.txt", "w");

    while ((buffer = fgetc(filePoiter1)) != EOF) {
        fputc(buffer, filePoiter5);
    }

    while ((buffer = fgetc(filePoiter3)) != EOF) {
        fputc(buffer, filePoiter5 );
    }

    fclose(filePoiter1);
    fclose(filePoiter3);
    fclose(filePoiter5);

    printf("Da sao chep noi dung tu bai1 va bai3 sang bai5!!\n");

    return 0;
}
