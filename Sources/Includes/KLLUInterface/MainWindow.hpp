#pragma once

#include <SFML/Graphics.hpp>

class MainWindow : public sf::RenderWindow
{
    int m_execResult = 0;

public:
    MainWindow() : RenderWindow({ 300, 300 }, L"Knowledge's Logic Unit") 
    {
        _beginWindowLoop();
    }

    MainWindow(const MainWindow& _window) = delete;
    MainWindow(MainWindow&&) = default;

    const int execResult() const;

private:
    void _beginWindowLoop();
};