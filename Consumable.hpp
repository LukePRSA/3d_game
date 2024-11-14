#include <iostream>
#include <SFML/Graphics.hpp>

class Consumable{


    private:
        sf::Sprite consumable_sprite;
        sf::Texture consumable_texture;
        float x;
        float y;
        bool does_exist;

    public:
        Consumable(float starting_pos_x, float starting_pos_y){
            this-> x = starting_pos_x;
            this-> y = starting_pos_y;

            consumable_sprite.setTexture(consumable_texture); 
            consumable_sprite.setPosition(x,y);

            
        }
        void handleSize(){
            
            float desiredWidth = 200.0f;
            float desiredHeight = 200.0f;
            float scaleX = desiredWidth / consumable_texture.getSize().x;
            float scaleY = desiredHeight / consumable_texture.getSize().y;

            consumable_sprite.setScale(scaleX, scaleY);
        }

        



};