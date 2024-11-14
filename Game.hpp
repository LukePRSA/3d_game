#include <iostream>
#include <SFML/Graphics.hpp>
#ifndef GAME_H 
#define GAME_H

const int MAP_HEIGHT = 2000;
const int MAP_WIDTH = 2000;
class Game{

    private:
        sf::RenderWindow window;
        sf::View cameraView;
        sf::Vector2f starting_pos = sf::Vector2f(100.0f,100.0f);
        static std::vector<sf::Sprite> entities;  // Declare static member

    public:

        Game() : window(sf::VideoMode(1500,900), "2D Game"){

            window.setFramerateLimit(60);

            cameraView.setSize(window.getSize().x, window.getSize().y);  // Set to screen dimensions
            cameraView.setCenter(starting_pos);    
        }

        sf::RenderWindow& getWindow(){
            return window;
        }

        void drawEntities(){
            for(sf::Sprite& entity : entities){
                window.draw(entity);
            }
        }

        void trackPlayer(sf::Vector2f player_pos){
           
            // Center the camera on the player, with bounds checking
            float halfViewWidth = cameraView.getSize().x / 2;
            float halfViewHeight = cameraView.getSize().y / 2;

            float cameraX = std::max(halfViewWidth, std::min(player_pos.x, MAP_WIDTH - halfViewWidth));
            float cameraY = std::max(halfViewHeight, std::min(player_pos.y, MAP_HEIGHT - halfViewHeight));

            cameraView.setCenter(cameraX, cameraY);
                    
        }

        sf::View getCameraView(){
            return cameraView;
        }
        static std::vector<sf::Sprite>& getEntityVector(){
            return entities;
        }


};
std::vector<sf::Sprite> Game::entities; // This line defines the static member

#endif