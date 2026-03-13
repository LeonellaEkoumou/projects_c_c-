 // auteur : leonella ekoumou
 // pour : le cours sur les algorithmne du bts sio du CNED
 // Code permettant de déterminer si le nombre entrer par l'utilisateur est premier.

 #include <iostream>

using namespace std;

int main()
{
    int val, diviseur;
    bool premier;

    cout<< "Enter un nombre entier supérieur a 1 = ";
    cin>>val;

    diviseur = 2;
    premier = true;

    while (premier && diviseur*diviseur<=val)
    {
        if (val%diviseur==0)
            premier = false;
            diviseur++;
    }
    if (premier)
        cout<<val<< ", est premier"<<endl;
    else
        cout<<val<<", n'est pas premier"<<endl;
    return 0;
}
