#include <bits/stdc++.h>
using namespace std;

int precedence(char op){
    if(op=='^')
        return 3;
    else if(op=='*'||op=='/')
        return 2;
    else if(op=='+'||op=='-')
        return 1;
    else
        return 0;
}

string infixToPostfix(string s){
    stack<char> st;
    string postfix = "";

    for(int i=0; i<s.length(); i++){
        char ch = s[i];

        if(isalnum(ch)){
            postfix += ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                postfix += st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && ((precedence(st.top()) > precedence(ch)) ||
                  (precedence(st.top()) == precedence(ch) && ch != '^'))){
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main(){
    string s;
    cout << "Enter infix expression: ";
    cin >> s;

    cout << "Postfix expression: " << infixToPostfix(s);

    return 0;
}