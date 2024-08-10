#include<iostream>
using namespace std;

int main() {
    
    float num1, num2;

    cout <<"Enter 1st number "<<endl;
    cin >> num1;

    cout<<"Enter 2nd number " <<endl;
    cin >> num2;

    char op;
    cout<<"Enter the Operation you want to perform :" <<endl;
    cin >> op;

    switch( op ) {

        case '+':  cout << (num1+num2) <<endl; 
                  break;

        case '-': cout<< (num1-num2) <<endl;
                  break;  

        case '*': cout<< (num1*num2) <<endl;
                  break;

        case '/': cout<< (num1/num2) <<endl;
                  break;

        default: cout<<"INVALID !! Please enter a valid Operation"<< endl;
    }
    return 0;
}
