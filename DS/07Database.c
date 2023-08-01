//Create a Database for customers in a store who buys exactly 3 items and display the database.

#include<stdio.h>
#include<string.h>

struct Cusmoter{
    char name[60];
    char id[5];
    char items[3][50];
};

int main(){
    struct Cusmoter cus[2];
    for(int j=0;j<2;j++){
    printf("Cusmoter name: ");
    gets(cus[j].name);
    printf("Cusmoter ID: ");
    gets(cus[j].id);
    for(int i=0;i<3;i++){
        printf("Item %d: ",i+1);
        gets(cus[j].items[i]);
    }
    }

    for (int j = 0; j<2; j++) {
    printf("Customer name: %s\n", cus[j].name);
    printf("Customer ID: %s\n", cus[j].id);
    for (int i = 0; i <3; i++) {
        printf("Item %d: %s\n", i+1 , cus[j].items[i]);
    }
    printf("\n");
}

    return 0;
}
   