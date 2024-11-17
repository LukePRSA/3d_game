#include <iostream>
#include <SFML/Graphics.hpp>
#include <Game.hpp>
#include <Consumable.hpp>
#include <Player.hpp>


int main(){
    
    Game game;
    Player player;
   

    
    // Main loop to keep the window open and render
    while (game.getWindow().isOpen()) {
        sf::Event event;
        while (game.getWindow().pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                game.getWindow().close();
        }

        // Clear the window with a background color
        game.getWindow().clear(sf::Color::Black);

        //handle camera
        
        game.getWindow().setView(game.getCameraView());



        //handle player
        player.handleMovementOfPlayer();
        game.trackPlayer(player.getPlayerSprite().getPosition());

        //draw
        game.getWindow().draw(game.getBackgroundSprite());
        game.getWindow().setView(game.getCameraView());
        game.drawEntities();

        
        //misc testing


        // Display the window's content on the screen
        game.getWindow().display();
    }


    return 0;
}