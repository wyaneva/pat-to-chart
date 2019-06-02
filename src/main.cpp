#include <iostream>
#include "SFML/Graphics.hpp"

int main() {

  sf::RenderWindow window; 
  int w = 200, h = 200;
  window.create(sf::VideoMode(w, h), "hello");

  sf::CircleShape circle(100.f);
  circle.setFillColor(sf::Color::Blue);

  while(window.isOpen()) {

    sf::Event event;
    while(window.pollEvent(event)) {
      if(event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear();
    window.draw(circle);
    window.display();
  }

  return 0;
}
