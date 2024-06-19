#include <iostream>
#include <vector>
using namespace std;

class duan
{
private:
	int d,y,m,stv,mda;
	string ten;
public:
	vector<int> tv;
	duan() {}
    duan(string ten, int d, int m, int y, int stv, int mda) {
        this->ten = ten;
        this->d = d;
        this->m = m;
        this->y = y;
        this->stv = stv;
        this->mda = 2024000+mda;
    }
    void set(string ten, int d, int m, int y, int stv, int mda)
    {
    	this->ten = ten;
        this->d = d;
        this->m = m;
        this->y = y;
        this->stv = stv;
        this->mda = 202400+mda;
	}
	void setname(string ten)
	{
		this->ten=ten;
	}
    string getname()
    {
		return ten;
	}
	int getd()
	{
		return d;
	}
	int getm()
	{
		return m;
	}
	int gety()
	{
		return y;
	}
	int getstv()
	{
		return stv;
	}
	int getmda()
	{
		return mda;
	}
};
