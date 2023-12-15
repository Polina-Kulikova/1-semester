#include <iostream>
#include <SFML/Graphics.hpp>

/*int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Application");
    sf::CircleShape shape;
    shape.setRadius(40.f);
    shape.setPosition(100.f, 100.f);
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
}*/

class AnimatedText {
public:
    AnimatedText(const std::string& text, float duration) :
            text(text),
            duration(duration),
            clock(),
            font(),
            sf_text(){
        if (!font.loadFromFile("arial.ttf")) {
            std::cerr << "Failed to load font." << std::endl;
        }
        sf_text.setFont(font);
        sf_text.setCharacterSize(24);
        sf_text.setFillColor(sf::Color::White);
    }

    void update() {
        float time_elapsed = clock.getElapsedTime().asSeconds();
        float progress = time_elapsed / duration;
        int num_characters = text.size();
        int num_visible_characters = static_cast<int>(num_characters * progress);
        sf_text.setString(text.substr(0, num_visible_characters));
    }

    void draw(sf::RenderWindow& window) {
        sf_text.setPosition(window.getSize().x / 2 - sf_text.getLocalBounds().width / 2,
                            window.getSize().y / 2 - sf_text.getLocalBounds().height / 2);
        window.draw(sf_text);
    }

private:
    std::string text;
    float duration;
    sf::Clock clock;
    sf::Font font;
    sf::Text sf_text;
};

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Animated Text");
    AnimatedText animated_text("Hello, world!", 13.f);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        animated_text.update();
        window.clear();
        animated_text.draw(window);
        window.display();
    }
    return 0;
}