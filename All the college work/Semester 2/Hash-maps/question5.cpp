/*Two strings word1 and word2, are considered almost equivalent if the differences between the frequencies of each letter from 'a' to 'z'
between word1 and word2 is atmost 3. Given those strings, each of length n(same) print "TRUE" if word1 and word2 are almost equivalent or
"FALSE" otherwise.*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    string word1;
    string word2;
    cout<<"Enter the 1st string: "<<endl;
    getline(cin,word1);
    cout<<"Enter the 2nd string: "<<endl;
    getline(cin,word2);
    map<string,int>count1;
    map<string,int>count2;
    for(char i:word1){
        count1[i]++;
    }
    for(char i:word2){
        count2[i]++;
    }

}