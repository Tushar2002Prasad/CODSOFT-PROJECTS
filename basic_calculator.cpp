#include<iostream>

using namespace std;

int main(){
    double num1,num2;
    char operations;
    cout << " ----- BASIC CALCULATOR -----" << endl;
    cout<<"Enter 1st number: ";
    cin>>num1;
    
    cout<<"Enter 2nd number: ";
    cin>>num2;
    cout << endl;
    
    cout << " Enter '+' to perform Addition " << endl;
    cout << " Enter '-' to perform Substraction " << endl;
    cout << " Enter '*' to perform Multiplication " << endl;
    cout << " Enter '/' to perform Division " << endl;
    cout << endl;
    cout<<"ENTER THE OPERATOR TO PERFORM THE OPERATION: ";
    cin>>operations;
    switch(operations){
        case '+':
        {
            cout<<" The Addition of "<< num1 << " + " << num2 << " = " << (num1 + num2);
            break;
        }
        case '-':
        {
            cout<<" The Substraction of "<< num1 << " - " << num2 << " = " << (num1 - num2);
            break;
        }
        case '*':
        {
            cout<<" The Substraction of "<< num1 << " - " << num2 << " = " << (num1 * num2);
            break;
        }
        case '/': 
        {
            if(num2==0){
                cout<< " The divison operation is not possible as denominator is 0 !!!"<<endl;
                break;
            }
            else{
                cout<<" The Substraction of "<< num1 << " - " << num2 << " = " << (num1 / num2);
                break;
            }
        }
        default: {
            cout<<"Valid operator is not entered !!! "<<endl;
            
        }
    }
    return 0;
}