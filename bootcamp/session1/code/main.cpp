#include <stdio.h>
#include <string.h>
#include <stdlib.h> // dynamic memory allocation
struct Course {
    char ID[10]; // 10 bytes
    char namaDosen[255]; // 255 bytes
};

// CRUD : Creat Read Update Delete
struct Student {
    char name[255]; //255 byte
    double GPA; // 8 byte
    Course c[2];
};

// Create
Student* create(char *name, double GPA, char *ID, char *namaDosen) {
    // 6 baris
    Student *newStudent = (Student*)malloc(sizeof(Student));

    return newStudent; // return variabel pointer yg merujuk ke address newStudent
}

// Read
void read(Student *s) { // pointer yg merujuk ke alamat student
    printf("Name: %s\n", s->name);
    printf("GPA: %lf\n", s->GPA);
    printf("Course ID: %s\n", s->c.ID);
    printf("Nama Dosen: %s\n", s->c.namaDosen);
}

int main () {
    Student s = {"Dodi", 3.9, {"COMP6047", "Pak Indra"}};
    // Student s;
    // strcpy(s.c[0].namaDosen, "Pak Aki");
    // printf("%s ", s.name);
    // printf("%s", s.c.namaDosen);
    
    return 0;
}