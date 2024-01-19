#include <bits/stdc++.h>
using namespace std;

int main()
{
   // vector<int> v;

   // cout << v.size() << endl; // size of vector

   // // vector initial...
   // vector<int> v1(5);
   // for (int i = 0; i < v1.size(); i++)
   // {
   //    cout << v1[i] << " ";
   // }

   // cout << endl;

   // vector<int> v2(5, 10);
   // for (int i = 0; i < v2.size(); i++)
   // {
   //    cout << v2[i] << " ";
   // }

   // cout << endl;

   // // copy vector
   // vector<int> v3(v2);
   // for (int i = 0; i < v3.size(); i++)
   // {
   //    cout << v3[i] << " ";
   // }

   // cout << endl;

   // copy from array
   int a[6] = {1, 6, 5, 3, 4, 2};
   sort(a,a+6);

   vector<int> v4(a, a + 6);

   cout << v4.size() << endl;
   for (int i = 0; i < v4.size(); i++)
   {
      cout << v4[i] << " ";
   }
   return 0;
}