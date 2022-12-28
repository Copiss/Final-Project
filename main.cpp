#include <SFML/Graphics.hpp> //Подключаем графическую библиотеку SFML
#include <SFML/Audio.hpp> //Подключаем музыкальную библиотеку SFML
#include<Ball1.h>//Подключение файла

using namespace Game; //подключение именного пространства

void FieldBoundaries(Ball& ball, sf::RenderWindow& window) // Метод задания границ игрового поля
{
    //Задание границ игрового поля
    if ((ball.shape.getPosition().x + 2 * ball.shape.getRadius() >= window.getSize().x) || (ball.shape.getPosition().x - 2 * ball.shape.getRadius() <= -50)) ball.shape.setPosition(375, 275);
    if ((ball.shape.getPosition().y + 2 * ball.shape.getRadius() >= window.getSize().y) || (ball.shape.getPosition().y - 2 * ball.shape.getRadius() <= -50)) ball.shape.setPosition(375, 275);

}

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!"); //Создание окна, установление разрешения, названия

    Ball ball;//Создание объекта ball
    ball.shape.setRadius(20); //Установка радиуса шарика
    ball.shape.setPosition(100, 100); //Установка изначальной позиции круга
    sf::Color colorOfShape(255, 192, 203);//задание цвета кружочка (внутренней части)
    ball.shape.setFillColor(colorOfShape); //Установка цвета кружочка (внутренней части)
    ball.shape.setOutlineThickness(5);//Задание толщины контура
    ball.shape.setOutlineColor(sf::Color(247, 104, 166));//Установка цвета контура

    sf::Texture background;//Объявление объекта текстуры
    if (!(background.loadFromFile("assets/R.png")))//Фон берём из файла
    {
        background.loadFromFile("../assets/R.png");
    }
    sf::Sprite pp(background);//Создание спрайта заднего фона

    sf::Music nyn;//Объявляем музыку
    if (!(nyn.openFromFile("assets/Nyan_Cat_-_Nyan_Cat_Theme__musmore.com_.wav")))//Забираем музыку из файла
    {
        nyn.openFromFile("../assets/Nyan_Cat_-_Nyan_Cat_Theme__musmore.com_.wav");
    }
    nyn.play();//Включаем музыку
    nyn.setLoop(true);//Делаем, чтоб музыка играла на повторе

    while (window.isOpen()) //До тех пор пока открыто окно выполняется:
    {
        //Добавление работы окна
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();//Отчистка буфера

        ball.moveOfBall();// Добавление работы склавиатурой(передвижение на WASD)

        FieldBoundaries(ball, window);
        //Поочерёдная прорисовка элементов
        window.draw(pp);
        window.draw(ball.shape);
        window.display();
    }

    return 0;
}

