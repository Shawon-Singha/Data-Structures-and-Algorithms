
#include<stdio.h>
#include<string.h>

struct Customer{
    char name[60];
    char id[5];
    char items[3][50];
};

int main(){
    struct Customer custom[2];
    for(int j=0;j<2;j++){
    printf("Cusmoter name: ");
    gets(custom[j].name);
    printf("Cusmoter ID: ");
    gets(custom[j].id);
    for(int i=0;i<3;i++){
        printf("Item %d: ",i+1);
        gets(custom[j].items[i]);
    }
    }

    for (int j = 0; j<2; j++) {
    printf("Customer name: %s\n", custom[j].name);
    printf("Customer ID: %s\n", custom[j].id);
    for (int i = 0; i <3; i++) {
        printf("Item %d: %s\n", i+1 , custom[j].items[i]);
    }
    printf("\n");
}

    return 0;
}
   