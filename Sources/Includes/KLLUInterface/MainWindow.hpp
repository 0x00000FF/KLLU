#pragma once

#include <SFML/Graphics.hpp>

class MainWindow : public sf::RenderWindow
{
    int m_execResult = 0;

public:
    MainWindow();
    MainWindow(const MainWindow& _window) = delete;
    MainWindow(MainWindow&&) = default;

    const int execResult() const;
};