#pragma once
#include <SFML/Graphics.hpp>

namespace Game //Создание именного пространства
{
	class Ball //Создание класса 
	{
	public:

		sf::CircleShape shape;

		void moveOfBall();
	};
}