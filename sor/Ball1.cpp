#include <Ball1.h>

namespace Game 
{
	void Ball::moveOfBall()
	{
		//ƒобавление работы склавиатурой (передвижение на WASD)
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) shape.setPosition(shape.getPosition() + sf::Vector2f(-0.1, 0));
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) shape.setPosition(shape.getPosition() + sf::Vector2f(0.1, 0));
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) shape.setPosition(shape.getPosition() + sf::Vector2f(0, 0.1));
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) shape.setPosition(shape.getPosition() + sf::Vector2f(0, -0.1));
	}
}