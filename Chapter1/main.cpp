#include <SFML/Graphics.hpp>
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <locale>
int main()
{
	AllocConsole();  
    freopen("CONOUT$", "w", stdout); 
    //SetConsoleOutputCP(1251); //win 1251
    //SetConsoleOutputCP(65001); // utf-8
    //std::cout << "Привет, мир! " << std::endl;
    std::cout << "Hello world!" << std::endl;
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        //window.draw(shape);
        window.display();
    }

    return 0;
}
