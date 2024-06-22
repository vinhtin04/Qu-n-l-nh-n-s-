#include <iostream>
using namespace std;

class nhansu {
private:
    string name, que, email, vtcv, dt, hv, da, qh, tt;
    int d, m, y, msnv, ml, ds, ms, ys, l;
public:
    nhansu() {}
    nhansu(string name="", string que="", int d=0, int m=0, int y=0, string email="", int msnv=-1, string vtcv="", int ml=0, int ds=0, int ms=0, int ys=0, string dt="", string hv="", string da="", string qh = "nhan vien", string tt = "-", int l = 0) {
        this->name = name;
        this->que = que;
        this->d = d;
        this->m = m;
        this->y = y;
        this->email = email;
        this->msnv = 20240000+msnv;
        this->vtcv = vtcv;
        this->ml = ml;
        this->ds = ds;
        this->ms = ms;
        this->ys = ys;
        this->dt = dt;
        this->hv = hv;
        this->da = da;
        this->tt = tt;
        this->l = l;
    }

    void set(string name, string que, int d, int m, int y, string email, int msnv, string vtcv, int ml, int ds, int ms, int ys, string dt, string hv, string da, string qh = "nhan vien", string tt = "-", int l = 0) {
        this->name = name;
        this->que = que;
        this->d = d;
        this->m = m;
        this->y = y;
        this->email = email;
        this->msnv = 20240000 + msnv;
        this->vtcv = vtcv;
        this->ml = ml;
        this->ds = ds;
        this->ms = ms;
        this->ys = ys;
        this->dt = dt;
        this->hv = hv;
        this->da = da;
        this->tt = tt;
        this->l = l;
    }
	void setduan(string da)
	{
		this->da=da;
	}
    void setl(int l)
    {
        this->l = l;
    }

    int getl()
    {
        return l;
    }

    void settt(string tt)
    {
        this->tt = tt;
    }

    void setname(string name)
    {
        this->name = name;
    }


    void setml(int ml) {
        this->ml = ml;
    }

    void setmsnv(int msnv) {
        this->msnv = 20240000 + msnv;
    }

    string getqh() { return qh; }
    string getname() { return name; }
    string getque() { return que; }
    string getemail() { return email; }
    string getvtcv() { return vtcv; }
    string getdt() { return dt; }
    string gethv() { return hv; }
    string getda() { return da; }
    int getd() { return d; }
    int getm() { return m; }
    int gety() { return y; }
    int getmsnv() { return msnv; }
    int getml() { return ml; }
    int getds() { return ds; }
    int getms() { return ms; }
    int getys() { return ys; }
    string gettt() { return tt; }

    void display() {
        cout << "Ten: " << name << endl;
        cout << "Que: " << que << endl;
        cout << "Ngay sinh: " << d << "/" << m << "/" << y << endl;
        cout << "Email: " << email << endl;
        cout << "Ma so: " << msnv << endl;
        cout << "Vi tri cong viec: " << vtcv << endl;
        cout << "Muc luong: " << ml << "$" << endl;
        cout << "Ngay vao lam: " << ds << "/" << ms << "/" << ys << endl;
        cout << "Dan toc: " << dt << endl;
        cout << "Hoc van: " << hv << endl;
        cout << "Du an dang tham gia: " << da << endl;
    }
    void displaynv()
	{
		cout << "Ten: " << name << endl;
        cout << "Que: " << que << endl;
        cout << "Ngay sinh: " << d << "/" << m << "/" << y << endl;
        cout << "Email: " << email << endl;
        cout << "Ma so: " << msnv << endl;
        cout << "Vi tri cong viec: " << vtcv << endl;
        cout << "Ngay vao lam: " << ds << "/" << ms << "/" << ys << endl;
        cout << "Dan toc: " << dt << endl;
        cout << "Du an dang tham gia: " << da << endl;
	}
};


