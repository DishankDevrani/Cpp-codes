#include <bits/stdc++.h>
using namespace std;
int rev_digits(int a){
    int digit{0};
    int n{0};
    while(a>0){
        digit=a%10;
        a=a/10;
        n=n*10+digit;
    }
    return n;
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    vector<int>nums;
    int x{0};
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    for(int i:nums){
        int y;
        y=rev_digits(i);
        nums.push_back(y);
    }
    cout<<"The array after adding the reversed numbers: "<<endl;
    for(int i:nums){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int> answer;
    for(int i:nums){
        answer.insert(i);
    }

    cout<<"The unique numbers are as follows: "<<endl;
    for(int elem:answer){
        cout<<elem<<" ";
    } 
    cout<<endl;


}