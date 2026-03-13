// code de leonella EKOUMOU, dans le cadre de l'apprentissage de c++ , cours algorithmne du bts sio cned
// code permettant d'afficher la table de 10 d'un chiffre entrée par l'utilisateur

#include <iostream>

using namespace std;

int main()
{
    int val,i;
    cout<<"Entrer le nombre dont vous chercher la table de 10 :";
    cin>>val;

    for(i=1;i<=10;i++)
    {
        cout<<val<<"*"<<i<<"="<<val*i<<endl;
    }

    return 0;
}
