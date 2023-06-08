#include<iostream>
using namespace std;
int add(int a , int b){
    int x;
    x = a+b;
    return x;
}
int main(){
    int sum = 0;
    sum = add(34,23);
    cout<<sum;
}