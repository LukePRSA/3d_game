#include <iostream>
#include <SFML/Graphics.hpp>

int TILE_SIZE = 20;


enum TileType{
    TILE_GRASS,
    TILE_STONE,
    TILE_MOONLIGHT,
    TILE_WALL,
    TILE_CHEST
};


class Tile{
    private:
        TileType tile_type;
        sf::Sprite tile_sprite;
        sf::Texture tile_texture;

    public:
        Tile(char tile_id, int pos_index){
            switch(tile_id){
                case 'G':
                    tile_type = TILE_GRASS;
                    tile_texture.loadFromFile("TileTextures/Grass.png");
                    tile_sprite.setTexture(tile_texture);
                    tile_sprite.setPosition(pos_index * TILE_SIZE, pos_index * TILE_SIZE);
                    break;
                case 'S':
                    tile_type = TILE_STONE;
                    tile_texture.loadFromFile("TileTextures/Stone.png");
                    tile_sprite.setTexture(tile_texture);
                    tile_sprite.setPosition(pos_index * TILE_SIZE, pos_index * TILE_SIZE);
                    break;
                case 'M':
                    tile_type = TILE_MOONLIGHT;
                    tile_texture.loadFromFile("TileTextures/Moonlight.png");
                    tile_sprite.setTexture(tile_texture);
                    tile_sprite.setPosition(pos_index * TILE_SIZE, pos_index * TILE_SIZE);
                    break;
                case 'W':
                    tile_type = TILE_WALL;
                    tile_texture.loadFromFile("TileTextures/Consumable.png");
                    tile_sprite.setTexture(tile_texture);
                    tile_sprite.setPosition(pos_index * TILE_SIZE, pos_index * TILE_SIZE);
                    break;
                case 'T':
                    tile_type = TILE_CHEST;
                    tile_texture.loadFromFile("TileTextures/Chest.png");
                    tile_sprite.setTexture(tile_texture);
                    tile_sprite.setPosition(pos_index * TILE_SIZE, pos_index * TILE_SIZE);
            }
        }

};