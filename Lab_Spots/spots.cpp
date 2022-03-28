#include "Spots.h"
#include <QRandomGenerator>
#include <QTime>

Spots::Spots()
{
    startGame();
}

bool  Spots::check(int n, int z)
{
    for (auto i = 0; i < 4; i++)
        for (auto j = 0; j < 4; j++)
        {
            if(z == 0)
                return true;
            if(table[i][j] == n)
                return false;
            z--;
        }
    return true;
}

void Spots::startGame()
{
    //QTime midnight(0, 0, 0);
    //srand(midnight.secsTo(QTime::currentTime()));
    QRandomGenerator *rnd = QRandomGenerator::global();
    do
    {
        for (auto i = 0, z = 0; i < 4; i++)
            for (auto j = 0; j < 4; j++)
            {
                do
                {
                    table[i][j] = rnd->bounded(16);
                    //table[i][j] = rand() % 16;
                }while(!check(table[i][j], z));

                copyTable[i][j] = table[i][j];
                z++;
            }
    }while(isFinished());
}

void Spots::restartGame()
{
    for (auto i = 0; i < 4; i++)
        for (auto j = 0; j < 4; j++)
        {
            table[i][j] = copyTable[i][j];
        }
}

bool Spots::isFinished()
{
    for (auto i = 0, z = 0; i < 3; i++)
        for (auto j = 0; j < 4; j++)
            if (table[i][j] != z++)
                return false;
    if(table[3][0]!=12 || table[3][3]!=15)
        return false;
    return true;
}

bool Spots::move(int r, int c)
{
    if (r!=0 && table[r-1][c]==15)
    {
        table[r-1][c] = table[r][c];
        table[r][c] = 15;
        return true;
    }
    if (r!=3 && table[r+1][c]==15)
    {
        table[r+1][c] = table[r][c];
        table[r][c] = 15;
        return true;
    }
    if (c!=0 &&table[r][c-1]==15)
    {
        table[r][c-1] = table[r][c];
        table[r][c] = 15;
        return true;
    }
    if (c!=3 &&table[r][c+1]==15)
    {
        table[r][c+1] = table[r][c];
        table[r][c] = 15;
        return true;
    }
    return false;
}

int Spots::getItem(int i, int j) const
{
    return table[i][j];
}
