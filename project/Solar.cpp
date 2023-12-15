#include <SFML/Graphics.hpp>
//window.setVerticalSyncEnabled(true);
sf::CircleShape sun(150);
sun.setPosition(100, 100);
sun.setOrigin(100,100);
sf::Texture SunTexture;
SunTexture.loadFromFile("sun.png");
sun.setTexture(&SunTexture);
//SunTexture.setRepeated(true);
sf::CircleShape shape(10);
shape.setPosition(300,300);
shape.setFillColor(sf::Color(0,255,0));
//sun.setTextureRect(sf::IntRect(10, 10, 100, 100));
float t = 0;
//бесконечный цикл
while (window.isOpen())
{
sf::Event event;
while (window.pollEvent(event))
{
if (event.type == sf::Event::Closed)
window.close();
}
//sun.setPosition(10*t,10*t);
window.clear();
window.draw(sun);
window.draw(shape);
window.display();
//t+=0.1;
//std::this_thread::sleep_for(std::chrono::milliseconds(100));
}
