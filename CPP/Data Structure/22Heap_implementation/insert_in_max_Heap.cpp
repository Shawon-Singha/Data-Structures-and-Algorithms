#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v; //max heap arry
    
    int n;
    cin >> n;

    for (int i = 0;i<n;i++){
        
        int x; 
        cin >> x; //insert value

        v.push_back((x)); //push in last of the array

        int currentIndex = v.size()-1;
        //cout << currentIndex << endl;

         while(currentIndex != 0){
            int parent_Index = (currentIndex-1)/2;
            //cout << parent_Index << endl;

            if(v[parent_Index] < v[currentIndex]) swap(v[parent_Index],v[currentIndex]);

            else break;

            currentIndex = parent_Index;

         }
    }

     for(int value : v){
        cout << value << " ";
     }

    return 0;
}