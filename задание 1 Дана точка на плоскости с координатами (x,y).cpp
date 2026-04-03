#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
 int x,y;
 cout<<"Введите x и y ";
 cin>>x>>y;
 cout<<"Точка ("<<x<<","<<y<<") - ";
 
 if (fabs(x)<10 && fabs(y)<5)
 {
    cout<<"да";
 }
 else if (fabs(x)>10 || fabs(y)>5)
 {
    cout<<"нет";
 }
 else 
 {
    cout<<"На границе";
 } 
 return 0; 
}