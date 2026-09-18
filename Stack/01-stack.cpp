/*implementing Stack using vector*/

#include <iostream>
#include <vector>
using namespace std;


class Stack{
    vector<int>v;

    public:

    void push(int n){
        v.push_back(n);
    }

    void pop(){
        v.pop_back();

    }

    int top (){
        return v[v.size()-1];
    }

    bool empty(){
        return v.size() == 0;
    }
};

int main() {

    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    cout<< endl;


    return 0;
}