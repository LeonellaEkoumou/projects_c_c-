#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Stockage des identifiants
    string user = "Leonella Ekoumou";
    string password = "MAGICAL GIRL#";

    printf("Welcome on the 29#TUI pc, Enter your informations for login \n");

    // Demande des identifiants
    printf("Enter your username\n");
    string g_user = get_string("");

    printf("Enter your secret password\n");
    string g_password = get_string("");

    // Vérification
    if (strcmp(user,g_user)== 0 && strcmp(password,g_password) == 0)
    {
        printf("✅ Connexion réussie, bienvenue %s !\n", user);
    }
    else
    {
        printf("❌ Identifiants incorrects.\n");
    }
}
