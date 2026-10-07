#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int k;
    int id;
    float grade;
};

int main(void){
    struct Student s1;
    struct Student s2;

    strcpy(s1.name, "Alice Johnson");
    s1.k =1;
    s1.id = 1001;
    s1.grade = 9.1f;

    strcpy(s2.name, "Bob Smith");
    s2.k=2;
    s2.id = 1002;
    s2.grade =8.7f;

    printf("Student %d: %s, ID: %d, Grade: %.1f\n", s1.k, s1.name, s1.id, s1.grade);
    printf("Student %d: %s, ID: %d, Grade: %.1f\n", s2.k, s2.name, s2.id, s2.grade);

return 0;
}