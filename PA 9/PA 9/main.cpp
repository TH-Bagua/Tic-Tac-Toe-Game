#include "boardFunctions.cpp"

int main(void)
{
    sf::RenderWindow window(sf::VideoMode(1600, 1000), "SFML works!");
    sf::CircleShape shape(200.f);
    shape.setFillColor(sf::Color::Blue);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
    //change
	return 0;
}