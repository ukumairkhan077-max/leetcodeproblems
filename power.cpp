#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int first_number;
    int second_number;
    cout<<"Enter first and second number: ";
    cin>>first_number;
    cin>>second_number;
    int result= pow(first_number,second_number);
    cout<<result;
    return 0;
}