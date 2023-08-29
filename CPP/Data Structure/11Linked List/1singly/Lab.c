#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int sid;
    char sname[50];
    struct Student* next;
};

int main() {
    
    //allocate the memory....
    struct Student* student1 = (struct Student*)malloc(sizeof(struct Student));
    struct Student* student2 = (struct Student*)malloc(sizeof(struct Student));


    student1->sid = 1240;
    strcpy(student1->sname, "Lamia");
    student1->next = student2;

    student2->sid = 1351;
    strcpy(student2->sname, "Zaira");
    student2->next = NULL;

    
    struct Student* head = student1;
    student1->next = student2;

    
    printf("Student Information:\n");
    struct Student* current = head;

    while (current != NULL)  // print those value..
    {
        
        for(int i = 1;i<=2;i++){
            printf("SID%d: %d, SName%d: %s\n", i,current->sid,i, current->sname);
           current = current->next;
        }
       
        
    }

    current = head;
    while (current != NULL)  //Delete allocate memory...
    {
        struct Student* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;

}