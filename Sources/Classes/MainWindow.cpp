#include <KLLUInterface/MainWindow.hpp>


const int MainWindow::execResult() const
{
    return m_execResult;
}


void MainWindow::_beginWindowLoop()
{
    sf::Event ev;

    while (this->isOpen())
    {
        this->pollEvent(ev);

        switch (ev.type)
        {

        }

        this->display();
    }
}