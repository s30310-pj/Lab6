#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int n;
struct Student
{
    string imie;
    string nazwisko;
    int nrIndex;
};

 
int main()
{
    vector<Student> student = {
        {"Eugeniusz", "Szulc", 195}, 
        {"Anastazy", "Walczak", 13043}, 
        {"Błażej", "Nowak", 2934}, 
        {"Aleks", "Szewczyk", 405}, 
        {"Radosław", "Woźniak", 30}
    };
    cout<<"Wektor przed sortowaniem:"<<endl<<endl;
    for (const auto& array : student){
        cout<<array.nrIndex<<" "<<array.imie<<" "<<array.nazwisko<<endl;
    }
    
    return 0;
}