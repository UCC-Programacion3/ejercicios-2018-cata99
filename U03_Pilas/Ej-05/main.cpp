#include <iostream>
#include "../Pila/Pila.h"

using namespace std;
int main() {
    char txt[20];
    cin>>txt;
    Pila<char> P;
    for (int i = 0; txt[i] !='\0' ; ++i)
    {
        if(txt[i]=='+'||txt[i]=='*'||txt[i]=='-'||txt[i]=='/')
        {
            if (!P.esVacia())
            {
            if((P.peek()=='+'||P.peek()=='-')) {
                P.push(txt[i]);
            }
            else {
               cout<<P.pop();
               P.push(txt[i]);
            }
            }else
            P.push(txt[i]);
        }else
            cout<<txt[i];

    }
    while(!P.esVacia())
    {
        cout<<P.pop();
    }
}