#include<iostream>
using namespace std;

void Binary(int x){
    int bin[32],i=0;
    while(x>0){
        bin[i]=x%2;
        x=x/2;
        i++;
    }
    cout << "The Binary value is: ";
    for(int j=i-1;j>=0;j--){
        cout << bin[j];
   }
   cout << endl;
}

int main(){
    int a;
    printf("Input any decimal number:");
    scanf("%d",&a);

    Binary(a);
    return 0;
}