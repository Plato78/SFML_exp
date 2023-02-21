#include "explotion.h"
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(800, 600), "SFML Works!");
	Explosion exp1;
	ExpInit(exp1, Vector2f{ 400.f,300.f });
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна 
		window.clear();
		expDraw(window, exp1);
		window.display();
	}

	return 0;
}