#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    float avgMarks;
};

int main() {
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter average marks: ");
        scanf("%f", &s[i].avgMarks);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(s[j].avgMarks < s[j + 1].avgMarks) {
                struct Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\nSorted list of students:\n");
    for(int i = 0; i < n; i++) {
        printf("%d %s %d %.2f\n", s[i].rollNo, s[i].name, s[i].age, s[i].avgMarks);
    }

    return 0;
}
