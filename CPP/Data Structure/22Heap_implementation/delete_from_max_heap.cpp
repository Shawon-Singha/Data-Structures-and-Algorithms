#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v,int x){
    
        v.push_back((x)); 

        int currentIndex = v.size()-1;

         while(currentIndex != 0){
            int parent_Index = (currentIndex-1)/2;
            //cout << parent_Index << endl;

            if(v[parent_Index] < v[currentIndex]) swap(v[parent_Index],v[currentIndex]);

            else break;

            currentIndex = parent_Index;
         }
}

void delete_heap(vector<int>&v){
    v[0] = v.size()-1;
    v.pop_back();

    int cur_idx = 0;

    while(true){
        int left_idx = cur_idx*2+1;
        int right_idx = cur_idx*2+2;

        int last_idx = v.size()-1;

        if(left_idx <= last_idx && right_idx <= last_idx){

            if(v[left_idx] >= v[right_idx] && v[left_idx] > v[cur_idx]){
                swap(v[left_idx],v[cur_idx]);
                cur_idx = left_idx;
            }

            else if(v[left_idx] < v[right_idx] && v[right_idx] > v[cur_idx]){
                swap(v[right_idx],v[cur_idx]);
                cur_idx = right_idx;
            }

            else{
                break;
            }
        }

        else if(left_idx <= last_idx){
            if(v[left_idx] > v[cur_idx]){
                swap(v[left_idx],v[cur_idx]);
                cur_idx = left_idx;
            }

            else{
                break;
            }
        }

        else if(right_idx <= last_idx){
            if(v[right_idx]>v[cur_idx]){
                swap(v[right_idx],v[cur_idx]);
                cur_idx = right_idx;
            }

            else{
                break;
            }
        }

        else {
            break;
        }
    }

}

void display(vector<int> v){
    for(int val : v){
        cout << val << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0;i<n;i++){
        int x;
        cin >> x;
        insert_heap(v,x);
    }

    delete_heap(v);

    display(v);
}