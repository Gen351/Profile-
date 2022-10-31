#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
class profile {

        
    public:
        string name;
        string sex;
        int age;
        float height;
        float weight;
        
    profile(string Aname, string Asex, int Aage, float Aheight, float Aweight){
        name=Aname;
        sex=Asex;
        age=Aage;
        height=Aheight;
        weight=Aweight;
        }
        };
int main()
{

    profile one("Gen","Male",18,172,68);
    cout << "Enter Your Name: ";
    cin >> one.name;
    cout << "Enter Sex: ";
    cin >> one.sex;
    cout << "Enter Your Age: ";
    cin >> one.age;
    cout << "Enter Your Height in cm: ";
    cin >> one.height;
    cout << "Enter Your Weight in kg: ";
    cin >> one.weight;
    cout << one.name << endl;
    cout << one.sex << endl;
    cout << one.age << endl;
    cout << one.height << endl;
    cout << one.weight << endl;
    float m;
    m = one.weight/pow(one.height/100,2);
    cout << "BMI: " << m << endl;
    
    
    return 0;
}