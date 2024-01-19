#include <iostream>
 
using namespace std;
int i, lz, a, b;

struct uczniowie
{
    string imie;
    int informatyka;
    int matematyka;
    int chemia;
    int polski;
};
    

int main()
{
    struct uczniowie listaUczniow[6];
    for ( i = 0; i < 6; i++)
    {
        cout<<"Podaj imie ucznia nr "<<i<<": ";
        cin>>listaUczniow[i].imie;
        cout<<"Podaj ocene z informatyki: ";
        cin>>listaUczniow[i].informatyka;
        cout<<"Podaj ocene z matematyki: ";
        cin>>listaUczniow[i].matematyka;
        cout<<"Podaj ocene z chemii: ";
        cin>>listaUczniow[i].chemia;
        cout<<"Podaj ocene z jezyka polskiego: ";
        cin>>listaUczniow[i].polski;
        cout<<endl;
    }
    cout<<"Podaj liczbe zapytan: ";
    cin>>lz;
    for ( i = 0; i < lz; i++)
    {
        cout<<endl<<endl<<"Podaj numer ucznia [0..5]: ";
        cin>>a;
        cout<<"Podaj nr przedmiotu [0..3]: ";
        cin>>b;
        switch (b)
        {
        case 0:
        cout<<listaUczniow[a].imie<<", ocena z informatyki: "<<listaUczniow[a].informatyka;
            break;
        case 1:
        cout<<listaUczniow[a].imie<<", ocena z matematyki: "<<listaUczniow[a].matematyka;
            break;
        case 2:
        cout<<listaUczniow[a].imie<<", ocena z chemii: "<<listaUczniow[a].chemia;
            break;
        case 3:
        cout<<listaUczniow[a].imie<<", ocena z jezyka polskiego: "<<listaUczniow[a].polski;
            break;
        default:
            break;
        }
    }
    
    return 0;
}