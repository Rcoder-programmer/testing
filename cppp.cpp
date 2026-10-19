#include <iostream>
using namespace std;
int add(int a,int b)
{
    cout << "ADDITION:" << a+b << endl;
}
int sub(int a,int b)
{
    cout << "SUBTRACTION:" << a-b << endl;
}
int mul(int a,int b)
{
    cout << "MULTIPLICATION:" << a*b << endl;
}

int main(){
    int a;
    int b;
    cout << "Enter Number 1:";
    cin >> a;
    cout << "Enter Number 2:";
    cin >> b;
    add(a,b);
    sub(a,b);
    mul(a,b);
    
}
