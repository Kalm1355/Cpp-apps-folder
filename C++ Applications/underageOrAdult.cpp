#include <iostream>

using namespace std;

int main(){

    int birthYear;
    int currentYear;

    cout << "What's your birth year? " << endl;
    cin >> birthYear;

    cout << "What's the current year? " << endl;
    cin >> currentYear;

    int age = currentYear - birthYear;

    if(age >= 18){
        cout << "You are an adult" << endl;
    }else{
        cout << "You are still underage" << endl;
    }

    return 0;
}
