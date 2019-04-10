#include <iostream>
#include <vector>
#include "heap.hpp"

using namespace std;
int main() {

    vector<int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    v.push_back(3);
    v.push_back(8);

    heap<vector<int>, int> hospital(v);

    cout << hospital << endl;

    hospital.pop();
    hospital.push(10);

    cout << hospital << endl;

    cout << hospital.size() << endl;
    cout << hospital.is_empty() << endl;
    hospital.clear();
    cout << hospital.is_empty() << endl;

    return 0;
}