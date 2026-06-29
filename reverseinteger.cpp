#include<iostream>
using namespace std;
int main(){
    int number;
    int reverse_number =0;
    int remainder;
    cout<<"enter a number: "<<endl;
    cin>>number;

    while(number>0){
        remainder=number%10;
        reverse_number=reverse_number*10+remainder;
        number=number/10;
        
    }
    cout<<"Reverse of given integer is:" <<" "<<reverse_number<<endl;
    return 0;


}