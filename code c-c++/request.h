#include <iostream>
using namespace std;

class req {
private:
    string xin;
    int nn, ndm;
    string lydo;
public:
    req(int nn = 0, string lydo = "", string xin = "", int ndm = 0) {
        this->nn = nn;
        this->lydo = lydo;
        this->xin = xin;
        this->ndm = ndm;
    }

    void setLydo(string lydo) { this->lydo = lydo; }
    string getLydo() { return lydo; }
    void setnn(int nn) { this->nn = nn; }
    int getnn() { return nn; }
    void setxin(string xin) { this->xin = xin; }
    string getxin() { return xin; }
    void setndm(int ndm) { this->ndm = ndm; }
    int getndm() { return ndm; }
};
