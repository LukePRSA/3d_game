#include <iostream>
#include <SFML/Graphics.hpp>
#include <Game.hpp>
class Player{
    private:
        sf::Sprite player_sprite;
        sf::Texture player_texture;

    public:

        Player(){
            player_texture.loadFromFile("PlayerTexture.png");
            player_sprite.setPosition(100.0f, 100.0f);
            player_sprite.setTexture(player_texture);
            Game::getEntityVector().push_back(player_sprite);
        }

        sf::Sprite& getPlayerSprite(){
            return player_sprite;
        }
        
        
        void handleMovementOfPlayer(){
            float speed_of_player = 5.0f;
            sf::Vector2f movement(0.0f, 0.0f);

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) Game::getEntityVector()[0].setPosition(Game::getEntityVector()[0].getPosition().x, Game::getEntityVector()[0].getPosition().y - speed_of_player);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) Game::getEntityVector()[0].setPosition(Game::getEntityVector()[0].getPosition().x, Game::getEntityVector()[0].getPosition().y + speed_of_player);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) Game::getEntityVector()[0].setPosition(Game::getEntityVector()[0].getPosition().x - speed_of_player, Game::getEntityVector()[0].getPosition().y);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) Game::getEntityVector()[0].setPosition(Game::getEntityVector()[0].getPosition().x + speed_of_player, Game::getEntityVector()[0].getPosition().y);

            //std::cout << "Player Position: " << player_pos.x << ", " << player_pos.y << std::endl;
        }
         
};