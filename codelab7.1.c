#include <stdio.h>
#include <string.h>

#define MAX_COURSES 5
#define MAX_STUDENTS 10  // Maximum number of students

typedef struct {
    char courseName[50];
    float caResult;
    float examResult;
} Course;

typedef struct {
    char name[50];
    int matricule;
    Course courses[MAX_COURSES];
} Student;

void enterStudentDetails(Student *student) {
    printf("Enter student name: ");
    fgets(student->name, sizeof(student->name), stdin);
    
    printf("Enter student matricule: ");
    scanf("%d", &student->matricule);
    
    // Consume newline character left in the input buffer
    getchar();
    
    for (int i = 0; i < MAX_COURSES; i++) {
        printf("Enter course name: ");
        fgets(student->courses[i].courseName, sizeof(student->courses[i].courseName), stdin);
        
        printf("Enter CA result for %s: ", student->courses[i].courseName);
        scanf("%f", &student->courses[i].caResult);
        
        printf("Enter exam result for %s: ", student->courses[i].courseName);
        scanf("%f", &student->courses[i].examResult);
        
        // Consume newline character left in the input buffer
        getchar();
    }
}

void printStudentReport(Student *student) {
    printf("\nReport Card\n");
    printf("Name: %s\n", student->name);
    printf("Matricule: %d\n", student->matricule);
    
    float totalScore = 0.0;
    
    for (int i = 0; i < MAX_COURSES; i++) {
        Course course = student->courses[i];
        float totalMarks = (course.caResult * 0.4) + (course.examResult * 0.6);
        totalScore += totalMarks;
        
        printf("\nCourse Name: %s", course.courseName);
        printf("CA Result: %.2f\n", course.caResult);
        printf("Exam Result: %.2f\n", course.examResult);
        printf("Total Marks: %.2f\n", totalMarks);
        
        if (totalMarks >= 50.0) {
            printf("Status: Passed\n");
        } else {
            printf("Status: Failed\n");
        }
    }
    
    float averageScore = totalScore / MAX_COURSES;
    printf("\nAverage Score: %.2f\n", averageScore);
}

int main() {
    int numStudents;
    
    printf("Enter the number of students to enter details for (maximum 10): ");
    scanf("%d", &numStudents);
    
    getchar();  // Consume the newline character left in the input buffer
    
    Student students[MAX_STUDENTS];
    
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", (i + 1));
        enterStudentDetails(&students[i]);
    }
    
    int searchMatricule;
    char searchName[50];
    
    printf("\nEnter matricule number to search for a student's report card: ");
    scanf("%d", &searchMatricule);
    
    getchar();  // Consume the newline character left in the input buffer
    
    printf("\nEnter name to search for a student's report card: ");
    fgets(searchName, sizeof(searchName), stdin);
    
    for (int i = 0; i < numStudents; i++) {
        if (students[i].matricule == searchMatricule && strcmp(students[i].name, searchName) == 0) {
            printStudentReport(&students[i]);
            return 0;
        }
    }
    printf("\nNo report card found for the given matricule and name.\n");
    return 0;
}
