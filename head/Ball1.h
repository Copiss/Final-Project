#pragma once
#include <SFML/Graphics.hpp>

namespace Game //�������� �������� ������������
{
	class Ball //�������� ������ 
	{
	public:

		sf::CircleShape shape;

		void moveOfBall();
	};
}