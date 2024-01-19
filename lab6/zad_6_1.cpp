#include <iostream>
 
using namespace std;

int n;

int Oblicz() {
  for (int i = 0; i <= n; i++)
    {
        if (i%3 != 0 && i%5 == 0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}

int main()
{
    cout<<"Podaj n: ";
    cin>>n;
    Oblicz();
    return 0;
}