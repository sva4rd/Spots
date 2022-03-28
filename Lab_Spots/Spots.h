#ifndef SPOTS_H
#define SPOTS_H

class Spots
{
public:
    Spots();
    void startGame();
    void restartGame();
    bool isFinished();
    bool move(int r, int c);
    int getItem(int i, int j) const;
private:
    int table[4][4];
    int copyTable[4][4];
    bool check(int n, int z);
};

#endif // SPOTS_H
