#include <iostream>
 
using namespace std;
 
int n;
string wiadomosc, komplet;
 
int main()
{
    cout<<"Podaj liczbe konkatenacji: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Wiadomość "<<i<<": ";
        cin>>wiadomosc;
        komplet = komplet+" "+wiadomosc;
    }
    cout<<komplet;
 
    return 0;
}