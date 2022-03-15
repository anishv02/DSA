// Online C++ compiler to run C++ program online
#include<iostream>
#include<stack>
using namespace std;

void Reverse(string s){
    
    stack<string> st;
    for(int i=0;i<s.length();i++)
    {
        string word = "";
        while(s[i]!=' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main() {
    // Write C++ code here
    string s = "Hey, How are you doing?";
    Reverse(s);

    return 0;
}