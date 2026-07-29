#include <bits/stdc++.h>
using namespace std;

int precedence(char op){
    if(op=='^')
        return 3;
    else if(op=='*' || op=='/')
        return 2;
    else if(op=='+' || op=='-')
        return 1;
    else
        return 0;
}

bool isOperator(char ch){
    return (ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^');
}

string infixToPrefix(string s){
    reverse(s.begin(), s.end());

    for(int i=0; i<s.length(); i++){
        if(s[i]=='(')
            s[i]=')';
        else if(s[i]==')')
            s[i]='(';
    }

    stack<char> st;
    string prefix = "";

    for(int i=0; i<s.length(); i++){
        char ch = s[i];

        if(isalnum(ch)){
            prefix += ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                prefix += st.top();
                st.pop();
            }
            if(!st.empty())
                st.pop();
        }
        else if(isOperator(ch)){
            while(!st.empty() && ((precedence(st.top()) > precedence(ch)) ||
                  (precedence(st.top()) == precedence(ch) && ch == '^'))){
                prefix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.empty()){
        prefix += st.top();
        st.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;
}

int main(){
    string s;
    cout << "Enter infix expression: ";
    cin >> s;

    cout << "Prefix expression: " << infixToPrefix(s);

    return 0;
}