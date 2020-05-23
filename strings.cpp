#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    cout << a.size() << " " << b.size() << endl;
    cout<<a+b<<endl;
    char hold;
    hold=a[0];
    a[0]=b[0];
    b[0]=hold;
    cout<<a+" "+b;
    return 0;
}