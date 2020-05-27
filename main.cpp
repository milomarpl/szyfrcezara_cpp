#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    while(getline(cin,tekst)){
     for(int i=0; i<tekst.size();i++)
    {
         if(tekst[i]!=' ') {
            if(tekst[i]=='Z') tekst[i]=tekst[i]-23;
            else if(tekst[i]=='Y') tekst[i]=tekst[i]-23;
            else if(tekst[i]=='X') tekst[i]=tekst[i]-23;
            else tekst[i]=tekst[i]+3;
         }
    }
    cout<<tekst;
    }
    return 0;
}


