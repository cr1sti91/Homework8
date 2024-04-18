#include <iostream>
#include <string>


bool verificareCont(std::string username, std::string password) {

    const std::string correctUsername = "CristianTacu"; 
    const std::string correctPassword = "mypassword123"; 

    //Verficarea daca usernameul introdus este corect
    if (username == correctUsername) 
    {
        //Daca usernameul introdus este corect, verificam parola introdusa
        if (password == correctPassword) {
            //Returnam true daca password si username sunt corecte
            std::cout << "Datele introduse sunt corecte!" << std::endl;
            return true;
        }
        else 
        {   
            //Afisarea erorii in cazul in care parola este incorecta
            std::cerr << "Eroare, parola incorecta!" << std::endl;
            return false;
        }
    } 
    else
    {
        //Afisarea erorii in cazul in care username este incorect
        std::cerr << "Eroare, nume utilizator incorect!" << std::endl;
        return false;
    }
}

int main()
{   
    std::string password, username;

    std::cout << "Pentru autentificare introduce-ti va rog username si password!" << std::endl;
    //Citirea username si password de la utilizator
    std::cout << "username : "; 
    std::cin >> username; 
    std::cout << "password : "; 
    std::cin >> password; 
    std::cout << std::endl;

    //Chemarea functiei cu username si password date de utilizator
    //si utilizarea valorii booleane intoarse de catre functie
    if (verificareCont(username, password)) {
        std::cout << "Autentificare cu succes!" << std::endl;
    }
    else
    {
        std::cerr << "Autentificare esuata!" << std::endl;
    }

}
