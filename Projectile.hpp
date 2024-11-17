#include <iostream>
#include <SFML/Graphics.hpp>
#include <Game.hpp>


class Projectile{

    private:
        sf::CircleShape shape;
        sf::Vector2f velocity;
    public:
        Projectile(const sf::Vector2f& position, const sf::Vector2f& velocity ){
            this->velocity = velocity;
            shape.setRadius(5.0f);
            shape.setFillColor(sf::Color::Red);
            shape.setPosition(position);

        }
        void update(float delta_time){
            shape.move(velocity * delta_time);
        }

};