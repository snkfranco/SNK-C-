
#include <iostream>
#include <Windows.h>
#include <string.h>

int main()
{
    system("cls");
    std::cout << " [+] Connecting...";
    Sleep(2000);
    system("cls");
    std::cout << "\n [+] Welcome to SNK Community\n";
    std::cout << "\n I'm glad to have you here!";
    Sleep(2000);
    int option;
    Menu:
    system("cls");
    std::cout << "\n\n SNK OPTIONS";
    std::cout << "\n\n [1] Youtube";
    std::cout << "\n [2] Twitter";
    std::cout << "\n [3] E-mail";
    std::cout << "\n [4] Exit";
    std::cout << "\n\n Enter your option -->";

    std::cin >> option;

    switch (option)
    {

        case 1
            : goto Youtube_redirect;

        case 2
            : goto Twitter_redirect;
        
        case 3
            : goto Email_redirect;
        
        case 4
            : goto Exit;

    }

Youtube_redirect: 
    {
    system("cls");
    std::cout << "\nHere is my YouTube link:\n";
    std::cout << "https://www.youtube.com/channel/UCMlLCE9vDuCOFVpdxgMzc2A\n\n";
    Sleep(1000);
    std::cout << "Have fun :)";
    Sleep(2000);
    goto Menu;
    }

Twitter_redirect:
{
    system("cls");
    std::cout << "\nHere is my Twitter link: \n";
    std::cout << "https://www.youtube.com/channel/UCMlLCE9vDuCOFVpdxgMzc2A\n\n";
    Sleep(1000);
    std::cout << "Have fun :)";
    Sleep(2000);
    goto Menu;
    }

Email_redirect:
{
    system("cls");
    std::cout << "\nHere is my E-mail: \n";
    std::cout << "snkcommunitysnk@gmail.com\n\n";
    Sleep(1000);
    std::cout << "See you soon! :)";
    Sleep(2000);
    goto Menu;
    }

Exit: 
{
    system("cls");
    std::cout << "\nExiting\n\n";
    std::cout << "Thanks for using my loader. Don't forget to subscribe!\n\n";
    Sleep(1000);
    std::cout << "See you soon! :)";
    Sleep(2000);
    return 0;
}

}