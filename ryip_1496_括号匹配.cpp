#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

void f1() {
    char c[256], c2[256];
    cin.getline(c, 256);

    int j=0;
    for(int i = 0; i < strlen(c); i++) {
        if(c[i] == '(' || c[i] == '[') {
            c2[j++] = c[i];
            cout<<"i="<<i<<", j="<<j<<", c2="<<c2<<endl;
        } else if(c[i] == ')') {
            if(j >= 1 && c2[j-1] == '(')
                j--;
            else
                c2[j++] = c[i];
            cout<<"i="<<i<<", j="<<j<<", c2="<<c2<<endl;
        } else if(c[i] == ']') {
            if(j >= 1 && c2[j-1] == '[')
                j--;
            else
                c2[j++] = c[i];
            cout<<"i="<<i<<", j="<<j<<", c2="<<c2<<endl;
        }
    }

    if(j == 0) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}


int main()
{
    char c[256];
    cin.getline(c, 256);
    
    stack<char> cs;
    for(int i = 0; i < strlen(c); i++) {
        cout<<"i="<<i<<endl;
        
        if(c[i] == '(' || c[i] == '[') {
            cs.push(c[i]);
                cout<<cs.top()<<endl;
        }
        
        if(c[i] == ')' || c[i] == ']') {
            if(cs.empty()) {
                cout<<"NO1"<<endl;
                return 0;
            }

            cout<<cs.top()<<endl;
            if(cs.top() == c[i]) {
                cout<<"pop "<<cs.top()<<endl;
                cs.pop();
            } else {
                cout<<"NO2"<<endl;
                return 0;
            }
        }
    }

    if(cs.empty())
        cout<<"YES"<<endl;
    else
        cout<<"NO3"<<endl;
    return 0;
}
