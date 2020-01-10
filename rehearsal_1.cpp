#include<iostream>
#include<string>
using namespace std;
int main(){
    float grade;
    string name;
    cout << "What is your name?: ";
    cin >> name;
    cout << "what is your GPA?: ";
    cin >> grade;
    if(grade<3.50){
         cout << "Try harder, "<< name <<"!!!";
    }
    else {
        cout << name <<" InW Jrim Jrim!!!";
    }
    return 0;
}