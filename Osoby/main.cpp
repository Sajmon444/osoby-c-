#include <iostream>

using namespace std;

int main()
{
    int liczbaOsob;
    cout <<"Podaj ile osob wprowadzic "<< endl;
    cin>> liczbaOsob;

    string * imiona=new string[liczbaOsob];
    string * nazwiska=new string[liczbaOsob];
    int* lataUrodzenia=new int[liczbaOsob];
    string *plec= new string[liczbaOsob];
    int* stazPracy= new int[liczbaOsob];




for(int i = 0; i < liczbaOsob; i++){
    cout << "Podaj imie osoby " << i + 1 << ": ";
    cin >> imiona[i];
    cout << "Podaj nazwisko osoby " << i + 1 << ": ";
    cin >> nazwiska[i];
    cout << "Podaj rok urodzenia osoby " << i + 1 << ": ";
    cin >> lataUrodzenia[i];
    cout << "Podaj plec osoby " << i + 1 << " (k/m): ";
    cin >> plec[i];

     if ((2023 - lataUrodzenia[i]) >= 18) {
        cout << "Podaj staz pracy osoby " << i + 1 << ": ";
        cin >> stazPracy[i];

       if(plec[i]=="m"){

        if(stazPracy[i]>40){
            cout<<"emerytura "<<endl;


        }else{
        cout<<"Pracuj dalej "<<endl;

        }



       }else if(plec[i]=="k"){

        if(stazPracy[i]>30){
            cout<<"emerytura "<<endl;


        }else{
        cout<<"Pracuj dalej "<<endl;

        }
       }



     }else{
        cout<< endl << "status nieletni"<<endl;




     }




}

for(int i = 0; i < liczbaOsob; i++){
        cout<<endl<<"Nr osoby "<<i+1 <<endl;
     cout << "Imie: " << imiona[i] << endl;
        cout << "Nazwisko: " << nazwiska[i] << endl;
        cout << "Rok urodzenia: " << lataUrodzenia[i] << endl;
        cout << "Plec: " << plec[i] << endl;

}

    delete[] imiona;
   delete[]  nazwiska;
     delete[] lataUrodzenia;
     delete[]plec;
    delete[] stazPracy;
 return 0;
}



