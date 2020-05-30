#include <bits/stdc++.h>

using namespace std;

class Person
{
    public:
    string name;
    int age;
    Person()
    {
    }
    Person(string s, int n)
    {
        name = s;
        age = n;
    }
};

class personCmp
{
    public:
    bool operator()(Person a, Person b){
        return a.age < b.age;
    }

};

int main()
{
    Person p1("car", 33);
    Person p2("biek", 3);
    Person p3("cycle", 91);
    // we have to provide the comparator class insted of passing comparator function
    // example of comparator function.... this is the reverse priority queue
    // priority_queue<int, vector<int>, grater<int>> pq;
    priority_queue<Person, vector<Person>, personCmp> pq;

    pq.push(p1);
    pq.push(p2);
    pq.push(p3);
    //now get the oldest 2 persons from the queue
    int k = 2;
    for(int i=0; i<k; i++)
    {
        Person result = pq.top();
        cout<<result.name<<" "<<result.age<<endl;
        pq.pop();
    }
    return 0;
}