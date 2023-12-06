#include <stdio.h>
struct Student{
    char name[100];
    int age;
    char phone[15];
    char email[100];
};

int main() {
    int numStudents;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &numStudents);
    struct Student students[numStudents];
    for (int i = 0; i < numStudents; i++) {
        printf("\nNhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Ho va ten: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        printf("So dien thoai: ");
        scanf("%s", students[i].phone);
        printf("Email: ");
        scanf("%s", students[i].email);
    }
    FILE *file = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\students.txt", "w");
   
    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%s %d %s %s\n", students[i].name, students[i].age, students[i].phone, students[i].email);
    }
    
	fclose(file);
    
	file = fopen("C:\\Users\\fpt yen thanh\\OneDrive\\Desktop\\C 27 input\\students.txt", "r");

    fclose(file);
    
	printf("Thong tin sinh vien da duoc luu vao file.\n");
   
    return 0;
}
