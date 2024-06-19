#include <iostream>
using namespace std;

class dnhap {
private:
    int tk;
    string mk;
public:
    dnhap() {}

    dnhap(int tk, string mk) {
        this->tk = tk;
        this->mk = mk;
    }

    void setsi(int tk, string mk) {
        this->tk = tk;
        this->mk = mk;
    }
	
	void setmk(string mk)
	{
		this->mk = mk;
	}
    int gettk() { return tk; }
    string getmk() { return mk; }
};

