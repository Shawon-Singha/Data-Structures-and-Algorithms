#include <bits/stdc++.h>
using namespace std;

int main()
{

    // priority_queue<int> pq; // boro thake choto

    priority_queue<int,vector<int>,greater<int>> pq; //choto thake boro

    while (true)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
        }

        else if (c == 1)
        {
            pq.pop();
        }

        else if (c == 2)
        {
            cout << pq.top() << endl;
        }

        else
        {
            break;
        }
    }

    return 0;
}