#include<bits/stdc++.h>
using namespace std;

class student {
public:
    string name;
    int id;
    int marks;

    student(string name, int id, int marks) {
        this->name = name;
        this->id = id;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(student a, student b) {
        return a.marks < b.marks;
    }
};

int main() {
    int n;
    cin >> n;

    priority_queue<student, vector<student>, cmp> pq;

    for (int i = 0; i < n; i++) {
        string name;
        int id, marks;

        cin >> name >> id >> marks;

        student obj(name, id, marks);

        pq.push(obj);
    }

    while (!pq.empty()) {
        cout << pq.top().name << " " << pq.top().id << " " << pq.top().marks << endl;

        pq.pop();
    }
  return 0;
}
