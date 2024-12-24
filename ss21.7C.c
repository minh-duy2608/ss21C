#include<stdio.h>
#include<string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
};

int main() {
    FILE *fptr;
    int n;

    fptr = fopen("students.txt", "w");

    printf("Moi ban nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct SinhVien std[n];

    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap thong tin cho sinh vien %d:\n", i + 1);
        printf("Id: ");
        scanf("%d", &std[i].id);
        getchar();

        printf("Ten: ");
        fgets(std[i].name, sizeof(std[i].name), stdin);
        std[i].name[strcspn(std[i].name, "\n")] = 0;

        printf("Tuoi: ");
        scanf("%d", &std[i].age);

        fprintf(fptr, "ID: %d Ten: %s Tuoi: %d\n", std[i].id, std[i].name, std[i].age);
    }

    fclose(fptr);

    return 0;
}
