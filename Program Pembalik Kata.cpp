#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    char str[100];
    int i,l;


    cout<<"MASUKKAN KATA = ";
    cin>>str;


    l=strlen (str);
    cout<<"MASUKAN KATA TERBALIK =";

    {
        for (i=l-l;l>=0;l--)
            cout<<str[i];
        }
        return 0;
    }









