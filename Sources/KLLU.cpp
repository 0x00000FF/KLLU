// KLLU.cpp : Defines the entry point for the application.
//

#include <KLLU.h>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    auto rw = sf::RenderWindow({300, 300}, "system");
    while (rw.isOpen())
    {
        sf::Event ev;

        switch (rw.pollEvent(ev)) {}
        rw.display();
    }
	return 0;
}
