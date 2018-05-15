#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");

    sf::Texture map;
    map.loadFromFile("images/map_main.jpg");
    sf::Sprite map_spr;
    map_spr.setTexture(map);
    map_spr.setPosition(419,0);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(map_spr);
        window.display();
    }

    return 0;
}