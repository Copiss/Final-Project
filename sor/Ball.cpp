#include <SFML/Graphics.hpp>//���������� ����������� ���������� SFML

namespace Game //�������� �������� ������������
{
	class Ball //�������� ������ 
	{
	public:
		sf::CircleShape shape; //���������� ��������� �����

		void moveOfBall()
		{
			//���������� ������ ������������ (������������ �� WASD)
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) shape.setPosition(shape.getPosition() + sf::Vector2f(-0.1, 0));
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) shape.setPosition(shape.getPosition() + sf::Vector2f(0.1, 0));
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) shape.setPosition(shape.getPosition() + sf::Vector2f(0, 0.1));
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) shape.setPosition(shape.getPosition() + sf::Vector2f(0, -0.1));

		}
	};
}