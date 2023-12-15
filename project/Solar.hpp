#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

namespace ss
{
    class System
    {
    private:
        sf::RenderWindow* m_window = nullptr;
        //m_window.setVerticalSyncEnabled(true);
    public:
        System()
        {

        }
        ~System()
        {
            if (m_window != nullptr)
                delete m_window;
        }
        void Setup()
        {
            m_window = new sf::RenderWindow window(sf::VideoMode(3000, 3000), "The solar system");
        }
        void Run()
        {
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
        }

    };
};
