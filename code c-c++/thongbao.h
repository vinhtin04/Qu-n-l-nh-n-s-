#include <iostream>
using namespace std;

class tbao
{
private: 
	string nd,name;
	int dt,mt,yt;
public:
	tbao() {}
	tbao(string name,string nd, int dt, int mt, int yt) {
		this->name=name;
        this->nd = nd;
        this->dt = dt;
        this->mt = mt;
        this->yt = yt;
    }
    void setname(string name)
    {
    	this->name=name;
	}
	string getname()
	{
		return name;
	}
    void setnd(string nd) { this->nd = nd; }
    string getnd() { return nd; }
    void setnn(int dt, int mt, int yt) 
	{ 
		this->dt = dt; 
		this->mt = mt; 
		this->yt = yt; 
	}
    int getdt() 
	{ 
		return dt;
	}
	int getmt() 
	{ 
		return mt;
	}
	int getyt() 
	{ 
		return yt;
	}
};
