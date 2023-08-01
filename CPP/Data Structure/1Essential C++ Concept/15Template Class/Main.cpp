#include<iostream>
using namespace std;

template<class T>

class Arithametic
{
private: 
    T a;
    T b;
public:
    Arithametic(T a,T b){
        this->a = a;
        this->b = b;
    }

    T add(){
        T c = a+b;
        return c;
    }

    T sub(){
        T c = a+b;
        return c;
    }
};

int main(){

    Arithametic<int> ar(10,5);
    cout << ar.add() << endl
         << ar.sub() << endl;

    Arithametic<float> ar1(10.5,5.4);
    cout << ar1.add() << endl
         << ar1.sub() << endl;
    return 0; 
}