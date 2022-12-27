#include <SFML/Graphics.hpp>//Подключаем графическую библиотеку SFML

namespace Game //Создание именного пространства
{
	class Ball //Создание класса 
	{
	public:
		sf::CircleShape shape; //Объявленте примитива круга

		void moveOfBall()
		{
			//Добавление работы склавиатурой (передвижение на WASD)
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) shape.setPosition(shape.getPosition() + sf::Vector2f(-0.1, 0));
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) shape.setPosition(shape.getPosition() + sf::Vector2f(0.1, 0));
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) shape.setPosition(shape.getPosition() + sf::Vector2f(0, 0.1));
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) shape.setPosition(shape.getPosition() + sf::Vector2f(0, -0.1));

		}
	};
}