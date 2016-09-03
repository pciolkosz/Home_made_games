#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <unistd.h>

using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window", sf::Style::Default);
    window.setVerticalSyncEnabled(true);

    sf::Image image;
    image.loadFromFile("sky.jpg");
    sf::Texture texture;
   // if (!texture.loadFromFile(, sf::IntRect(0, 0, 800, 600)))
    {
        // error...
    }
    sf::Sprite sprite;
    sprite.setTexture(texture);

    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Black);
        window.draw(sprite);
        window.display();

    }

    return 0;
}