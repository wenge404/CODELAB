#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    char matricule[20];
    float ca[10];
    float exam[10];
    float total[10];
};

int main() {
    struct student s[10];
    int i, j, n;
    char matricule[20], name[50];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter matricule number of student %d: ", i + 1);
        scanf("%s", s[i].matricule);
        for (j = 0; j < 5; j++) {
            printf("Enter CA marks for course %d: ", j + 1);
            scanf("%f", &s[i].ca[j]);
            printf("Enter exam marks for course %d: ", j + 1);
            scanf("%f", &s[i].exam[j]);
            s[i].total[j] = s[i].ca[j] + s[i].exam[j];
        }
    }

    printf("\nEnter matricule number of student to display report: ");
    scanf("%s", matricule);
    printf("Enter name of student to display report: ");
    scanf("%s", name);

    for (i = 0; i < n; i++) {
        if (strcmp(s[i].matricule, matricule) == 0 && strcmp(s[i].name, name) == 0) {
            printf("\nReport card for %s (Matricule No. %s):\n", s[i].name, s[i].matricule);
            printf("Course\tCA\tExam\tTotal\n");
            for (j = 0; j < 5; j++) {
                printf("%d\t%.2f\t%.2f\t%.2f\n", j + 1, s[i].ca[j], s[i].exam[j], s[i].total[j]);
            }
            break;
        }
    }
    if (i == n) {
        printf("\nStudent with matricule number %s and name %s not found.\n", matricule, name);
    }
    return 0;
}