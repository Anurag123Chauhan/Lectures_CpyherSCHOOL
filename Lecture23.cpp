#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fs;

    fs.open("text.txt");

    string name;
    int age;

    fs>>name>>age;
    cout<<name<<" is "<<age<<" years old";
    fs.close();
    return 0;
}