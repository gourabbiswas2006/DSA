#include <vector>
#include <iostream>
 using namespace std;
 void changeA(int* ptr)//pass by reference 
 {
     *ptr=20;
 }

 int main()
 {
    int a =10;
    changeA(&a);//switching the number 10 with 20
    cout<<"inside main fnx: "<< a << '/n';
    return 0; 
 }