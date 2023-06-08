#include<iostream>
using namespace std;
int add(int a , int b){
    int x;
    x = a+b;
    return x;
}
int main(){
    int sum = 0;
    sum = add(2,3);
    cout<<sum;
}