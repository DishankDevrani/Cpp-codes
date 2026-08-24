#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Dishank Devrani"<<endl<<"Roll number:2503201000473"<<endl;
    //priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(30);
    pq.push(50);
    pq.push(70);
    cout<<"Priority Queue elements (max-heap)\n";
    while(!pq.empty())
    {
        cout<<"Top element"<<pq.top()<<endl;
        pq.pop();
        cout<<"Remaining size: "<<pq.size()<<"\n";
    }
    if(pq.empty()){
        cout<<"Priority Queue is now empty\n";
    }
}