#include "Game.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game *game;
    game = new Game;
    game->show();

    return a.exec();
}