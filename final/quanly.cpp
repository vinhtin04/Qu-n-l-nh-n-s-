#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "nhansu.h"
#include "dangnhap.h"
#include "request.h"
#include "thongbao.h"
#include "duan.h"

using namespace std;

vector<nhansu> a;
vector<dnhap> adn;
vector<req> r;
vector<tbao> tb; 
vector<duan> prj;
int dem=0; 

void nhaptt() {
    a.push_back(nhansu("Trung", "que", 0, 0, 0, "trung@gmail.com", 0, "giam doc", 10000, 14, 5, 2024, "kinh", "dai hoc", "-", "admin", "-", 5000));
    r.push_back(req(0));
    adn.push_back(dnhap(20240000, "trung..."));
    a.push_back(nhansu("Vinh", "thanh hoa", 17, 8, 2004, "vinhtin04@gmail.com", 1, "thu ki", 10000, 14, 5, 2024, "kinh", "dai hoc", "-", "admin", "-", 4000));
    r.push_back(req(0));
	adn.push_back(dnhap(20240001, "vinh17804"));
}

int mdan=0;

void plusduan()
{
	int i=1;
    int n;
    string name;
    int k;
    int d, m, y, snv;
    cout << "So du an moi: ";
    cin >> n;
    cin.ignore(); 
    while (i <= n) {
        cout << "du an thu " << i << " :" << endl;
        cout << "        Ten du an: ";
        cin.ignore();
        getline(cin, name);
        cout << "        Thoi diem hoat dong: ";
        cin >> d >> m >> y; 
        cout << "        So luong nhan vien: ";
        cin >> snv;
        prj.push_back(duan(name,d,m,y,snv,i-1)) ;
        for (int j=0; j<snv; j++)
        {
        	if (j==0) cout << "                     Leadder(msnv): ";
        	else cout << "                     thanh vien thu " << j+1 << " (msnv):";
			cin >> k;
			prj[i-1].tv.push_back(k);
			a[k%10000].setduan(name);
		}
        i++; 
    }
    cout << "Hoan tat" << endl;
}

void delda() {
    int k;
    int n;
    cout << "So du an can xoa: ";
    cin >> n;
    for (int j = 0; j < n; j++) {
        cout << "STT du an: ";
        cin >> k;
		for (int i=0; i<prj[k-1].tv.size(); i++)
		{
			a[prj[k-1].tv[i]%10000].setduan("-");
		}
		prj.erase(prj.begin()+k);
    }
}

void plusthongbao()
{
	string s, ten;
	int d,m,y;
	cout << "Tieu de thong bao: ";
	cin.ignore();
	getline(cin, ten);
	cout << "Ngay/thang/nam: ";
	cin >> d >> m >> y;
	cout << "Noi dung:";
	cin.ignore();
	getline(cin, s);
	tb.insert(tb.begin(), tbao(ten,s,d,m,y));;
	dem++;
}

void displaytb()
{
	cout << left << setw(5) << "STT" << setw(20) << "Tieu de Thong bao" << endl;
    for (int j = 0 ; j < dem; j++) {
        cout << left << setw(5) << j+1 << setw(20) << tb[j].getname() << endl;
    }
    char c;
    cout << "ban co muon xem thong tin chi tiet(y/n): ";
    cin >> c;
    int k;
    while (c == 'y')
    {
        cout << "STT cua thong bao: ";
        cin >> k;
        cout << "Tieu de thong bao: " << tb[k-1].getname() << endl;
        cout << "Thoi gian: " << tb[k-1].getdt() << "/" << tb[k-1].getmt() << "/" << tb[k-1].getyt() << endl;
        cout << "Noi dung: " << tb[k-1].getnd() << endl;
        cout << "tiep tuc(y/n): ";
        cin >> c;
	}
}
int mm = 1;
void tao() { // them nhan vien
    int i=1;
    int n;
    string name, que, email, vtcv, dt, hv, da;
    int d, m, y, msnv, ml, ds, ms, ys;
    cout << "So nhan vien moi: ";
    cin >> n;
    cin.ignore(); 
    int dem=0;
    while (i <= n) {
    	dem++;
    	int kk=-1; 
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j].getname() == "")
            {
                kk = j;
                break;
            }
        }
        cout << "Nhan vien thu " << dem << " :" << endl;
        cout << "        Ten: ";
        getline(cin, name);
        cout << "        Que: ";
        getline(cin, que);
        cout << "        Ngay, thang, nam sinh: ";
        cin >> d >> m >> y;
        cout << "        Email: ";
        cin.ignore(); 
        getline(cin, email);
        msnv = mm + i; 
        cout << "        Vi tri cong viec: ";
        getline(cin, vtcv);
        cout << "        Muc luong($): ";
        cin >> ml;
        cout << "        Ngay vao lam: ";
        cin >> ds >> ms >> ys;
        cout << "        Dan toc: ";
        cin.ignore(); 
        getline(cin, dt);
        cout << "        Hoc van: ";
        getline(cin, hv);
        if (kk==-1) 
		{
			a.push_back(nhansu(name, que, d, m, y, email, i, vtcv, ml, ds, ms, ys, dt, hv, da, "nhan vien", "-", ml));
            adn.push_back(dnhap(20240000+i, "123456"));
            r.push_back(req(0));
            mm++;
        }
        else
        {
	        a[kk].set(name, que, d, m, y, email, kk, vtcv, ml, ds, ms, ys, dt, hv, da, "nhan vien", "-", ml);
	        adn[kk].setsi(20240000+kk, "123456");
	        r[kk].setnn(0);
		}
        i++; 
    }
    cout << "Hoan tat" << endl;
}

void dptv(int k)
{
	cout << "Name: " << prj[k-1].getname() << endl;
	cout << "Ngay hoat dong: " << prj[k-1].getd() << "/" << prj[k-1].getm() << "/" << prj[k-1].gety() << endl;
	cout << "Thanh vien: " << endl;
	for (int i=0; i<prj[k-1].tv.size(); i++)
	{
		cout << "\t" << i+1 << ": " << prj[k-1].tv[i] << endl;
	}
}

int vt;

void hienthi() //hien thi thong tin
{
	int dem1=0;
    cout << left << setw(5) << "STT" << setw(20) << "Ten" << setw(15) << "Ma So NV" << setw(25) << "Vi Tri Cong Viec" << endl;
    for (int j = 0; j <= mm; j++) {
    	if (a[j].getname()!="")
    	{
    		dem1++;
	        cout << left << setw(5) << dem1
	             << setw(20) << a[j].getname()
	             << setw(15)<< a[j].getmsnv()
	             << setw(25) << a[j].getvtcv() << endl;
		}
    }
    if (vt < 2)
    {
        char c;
        cout << "ban co muon xem thong tin chi tiet(y/n): ";
        cin >> c;
        int k;
        while (c == 'y')
        {
            cout << "Ma so nhan vien: ";
            cin >> k;
            if (k%10000 > mm || a[k%10000].getname()=="") cout << "khong tim thay nhan vien" << endl; 
            else a[k%10000].display();
            cout << "tiep tuc(y/n): ";
            cin >> c;
        }
    }
    else
    {
    	char c;
        cout << "ban co muon xem thong tin chi tiet(y/n): ";
        cin >> c;
        int k;
        while (c == 'y')
        {
            cout << "Ma so nhan vien(4 so cuoi): ";
            cin >> k;
            a[k].displaynv();
            cout << "tiep tuc(y/n): ";
            cin >> c;
    	}
	}
}

void hienthida()
{
	int dem1=0;
	cout << left << setw(5) << "STT" 
         << setw(20) << "Ten du an" 
         << setw(15) << "So thanh vien" << endl; 
    for (int j = 0; j < prj.size(); j++) {
    	if (prj[j].getname()!="")
    	{
    		dem1++;
        	cout << left 
             << setw(5) << dem1 
             << setw(20) << prj[j].getname()
             << setw(15) << prj[j].getstv() 
             << endl;
		}
    }
    if (vt<2)
    {
    	char c;
    	int k;
    	cout << "ban muon xem chi tiet khong(y/n): ";
    	cin >> c;
    	while (c=='y')
    	{
    		cout << "STT du an: ";
    		cin >> k;
    		while (k-1>prj[k].tv.size()) {
				cout << "khong tim thay project. Nhap lai: ";
    			cin >> k;
			}
			dptv(k);
    		cout << "Tiep tuc(y/n): ";
    		cin >> c;
		}
	}
}


void del() // xoa nhan vien 
{
    int k;
    int n;
    cout << "co bao nhieu nhan vien nghi viec: ";
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
    	cout << "ma so nhan vien: ";
        cin >> k;
        a[k%1000].setname("");
    }
}

void doimk()
{
	int tk;
	string mk,mkm;
	cout << "Tai khoan: ";
	cin >> tk;
	while (tk != adn[vt].gettk() && tk!=0)
	{
		cout << "Sai tai khoan: " << endl;
		cout << "Nhan 0 de thoat" << endl;
		cin >> tk;
	}
	cout << "Mat khau: ";
	cin.ignore();
	getline(cin, mk);
	while (mk!=adn[vt].getmk() && mk!="Out")
	{
		cout << "Sai Mat khau: " << endl;
		cout << "Nhan Out de thoat" << endl;
		getline(cin, mk);
	}
	if (mk==adn[vt].getmk())
	{
		cout << "Mat khau moi: ";
		getline(cin, mk);
		cout << mk << endl;
		cout << "Xac nhan mat khau moi: ";
		getline(cin, mkm);
		while (mkm!=mk) 
		{
			cout << "Xac nhan lai: ";
			getline(cin, mkm);
		}
		adn[vt].setmk(mkm);
	}
	cout << "hoan tat";
}

int demrq = 0;

void dangnhap() {  // dang nhap
    int tk;
    string mk;
    int kt = -1;
    char c='n';
    while (kt == -1) {
        cout << "tai khoan: ";
        cin >> tk;
        cout << "mat khau: ";
        cin.ignore();
        getline(cin, mk);
        for (int j = 0; j <= mm; j++) {
            if (tk == adn[j].gettk()) {
                if (mk == adn[j].getmk()) {
                    vt = j;
                    kt = 1;
                    break;
                }
                else {
                    cout << "mat khau khong chinh xac" << endl;
                    cout << "Quen mat khau(y/n): ";
                    cin >> c;
                    if (c=='y') doimk();
                    break;
                }
            }
            else if (j == mm) {
                cout << "tai khoan khong ton tai!" << endl;
            }
        }
    }
}

void request() {     // request nhan vien
    int x;
    string s, st;
    cout << "1. Xin nghi " << endl;
    cout << "2. Xin den muon " << endl;
    cout << "3. Xin ung luong " << endl;
    cout << "4. Xin tang luong " << endl;
    cout << "5. Khac" << endl;
    cout << "6. Back" << endl;
    cin >> x;
    if (x!=6)
    {
    	demrq++;
    	if (x == 1) {
	        r[vt].setxin("Xin nghi");
	        r[vt].setnn(r[vt].getnn() + 1);
	        if (r[vt].getnn() == 9) {
	            cout << "ban da nghi 9/10 buoi" << endl;
	            cout << "nghi qua 10 buoi se tru 100% luong" << endl;
	        }
	    }
	    if (x == 2) {
	        r[vt].setxin("Xin den muon");
	        r[vt].setndm(r[vt].getndm() + 1);
	        cout << "den muon 3 buoi bang 1 ngay nghi" << endl;
	    }
	    if (x == 3) r[vt].setxin("Xin ung luong");
	    if (x == 4) r[vt].setxin("Xin tang luong");
	    if (x == 5)
	    {
	    	cout << "Noi dung: ";
	        cin.ignore();
	        getline(cin, s);
	        r[vt].setxin(s);
	    }
	    cout << "ly do: ";
	    cin.ignore();
	    getline(cin, s);
	    r[vt].setLydo(s);
	}
}

void displaytt()
{
	cout << left << setw(5) << "STT" << setw(20) << "MSNV" << setw(20) << "Trang thai hoat dong"  << setw(20) << "Luong thang" << endl;
    for (int j = 0 ; j < dem; j++) {
    cout << left << setw(5) << j+1 
		 << setw(20) << a[j].getmsnv() 
		 << setw(20) << a[j].gettt()
		 << setw(20) << a[j].getl() << endl;
	}
}

void tongket()
{
    cout << left << setw(5) << "STT" << setw(20) << "Ten" << setw(15) << "Ma So NV" << setw(25) << "trang thai hoat dong" << setw(25) << "Luong nhan duoc" << endl;
    for (int j = 0; j <= mm; j++) {
        if (r[j].getnn() > 10) a[j].setl(0);
        cout << left << setw(5) << j
             << setw(20) << a[j].getname()
             << setw(15) << a[j].getmsnv()
             << setw(25) << a[j].gettt()
             << setw(25) << a[j].getl() << endl;
             
    }
}

void reset()
{
	int ki=5;
	cout << "1. Reset ngay" << endl;
	cout << "2. Reset thang" << endl;
	cin >> ki;
	if (ki==1)
	{
		for (int j = 2; j <= mm; j++)
	    {
	        r[j].setLydo("");
	        r[j].setxin(0);
	        a[j].settt("-");
	    }
	} 
	else
	{
		for (int j = 2; j <= mm; j++)
	    {
	        r[j].setLydo("");
	        r[j].setxin(0);
	        a[j].settt("-");
	        a[j].setl(a[j].getml());
	        r[j].setnn(0);
	        r[j].setndm(0);
	    }
	}
    
}

void Diemdanh()
{
	cout << mm << endl; 
    string dd = "";
    int ki=0;
    int k,kl;
    int dem1=0;
	while (ki!=5)
	{
	    cout << "1. Check request" << endl;
	    cout << "2. Tong ket" << endl;
	    cout << "3. diem danh" << endl;
	    cout << "4. Reset" << endl; 
	    cout << "5. Back" << endl;
		cout << "Nhap tac vu: ";
    	cin >> ki;
	    if (ki==1)
	    {
	    	if (demrq>0) 
	    	{
				cout << left << setw(5) << "STT"
				     << setw(20) << "Ma So NV"
				     << setw(15) << "Noi dung" << endl;
				
				for (int j = 2; j <= mm; j++) {
				    if (r[j].getxin() != "") {
				        dem1++;
				        cout << left << setw(5) << dem1
				             << setw(20) << a[j].getmsnv()
				             << setw(15) << r[j].getxin() << endl;
				    }
				}
			}
			else cout << "Khong co request";
			string c;
			cout << "Xem chi tiet(y/n): ";
			cin >> c;
			while (c=="y")
		    {
		    	
		    	int kt;
		    	cout << "MSNV: " << endl;
		    	cin >> kt;
		    	kt%=1000;
		    	cout << left << setw(5) << "MSNV" << setw(20) << "Noi dung" << setw(15) << "Ly do" << endl;
		    	cout << left << setw(5) << a[kt].getmsnv()
			             << setw(20) << r[kt].getxin()
			             << setw(15)<< r[kt].getLydo() << endl;
			    cout << "1.Dong y" << endl;
			    cout << "2.Tu choi" << endl;
			    int mt;
			    cin >> mt;
			    if (mt==2) 
				{
					r[kt].setxin("");
					demrq--;
				} 
			    if (demrq>0)
			    {
			    	cout << left << setw(5) << "STT"
					     << setw(20) << "Ma So NV"
					     << setw(15) << "Noi dung" << endl;
					
					for (int j = 2; j <= mm; j++) {
					    if (r[j].getxin() != "") {
					        dem1++;
					        cout << left << setw(5) << dem1
					             << setw(20) << a[j].getmsnv()
					             << setw(15) << r[j].getxin() << endl;
					    }
					}
				}
				cout << "tiep tuc(y/n): ";
				cin >> c;
			}
		}
	    if (ki==3)
		    while (k >= 0)
		    {
		    	cout << "msnv: ";
		        cin >> k;
		        if (k<0) break;
		        cout << "trang thai(1.Presence/2.Late): ";
		        cin >> kl;
		        if (kl == 1) a[k%1000].settt("P");
		        if (kl == 2) a[k%1000].settt("L");
		    }
	    if (ki==2)
	    {
		    for (int j = 2; j <= mm; j++)
		    {
		        if (a[j].gettt() == "-")
		        {
		            if (r[j].getxin() == "Xin nghi")
		            {
		                a[j].settt("A");
		                a[j].setl(a[k].getl() - (a[k].getml() / 2));
		            }
		            else
		            {
		                a[j].settt("UA");
		                r[j].setnn(r[vt].getnn() + 2);
		                a[j].setl(a[j].getl() - 2 * (a[j].getml() / 2));
		            }
		        }
		        if (a[j].gettt() == "L")
		        {
		            if (r[j].getxin() == "Xin den muon")
		            {
		                a[j].settt("L");
		            }
		            else
		            {
		                a[j].settt("UL");
		                r[j].setndm(r[j].getndm() + 2);
		            }
		            if (r[j].getndm() % 3 == 0) a[j].setl(a[k].getl() - (a[k].getml() / 2));
		        }
		    }
			cout << left << setw(5) << "STT" << setw(20) << "Ten" << setw(15) << "Ma So NV" << setw(25) << "trang thai hoat dong" << setw(25) << "Luong nhan duoc" << endl;
		    for (int j = 2; j <= mm; j++) {
		        if (r[j].getnn() > 10) a[j].setl(0);
		        cout << left << setw(5) << j-1
		             << setw(20) << a[j].getname()
		             << setw(15) << a[j].getmsnv()
		             << setw(25) << a[j].gettt()
		             << setw(25) << a[j].getl() << endl;
             
    		}
		}
		if (ki==4) reset();
	}
}

int main() {
    nhaptt();
    int tvad, tvnv;
    string c = "Start";
    while (c!="End")
    {
    	dangnhap();
    	tvad=0;
    	tvnv=0;
    	while (tvad!=6 && tvnv!=5)
    	{
    		if (vt<2)
		    {
		    	cout << "1.Thong bao" << endl;
		    	cout << "2.Du an" << endl;
		    	cout << "3.List nhan vien" << endl;
		    	cout << "4.Check Request" << endl;
				cout << "5.Thong tin ca nhan" << endl;
				cout << "6.Dang xuat" << endl;
				cout << "Nhap tac vu: ";
				cin >> tvad ;
				if (tvad==1) 
				{
					int ki=0;
					if (tb.size()!=0) displaytb();
					cout << "1.Them thong bao" << endl;
					cout << "2.Back" << endl;
					cin >> ki;
					if (ki==1)
					{
						plusthongbao();
					}
				}
				if (tvad==2)
				{
					int ki=0;
					if (prj.size()!=0) hienthida();
					while (ki!=3)
					{
						cout << "1.Them du an moi" << endl;
						cout << "2.Xoa du an" << endl;
						cout << "3.Back" << endl;
						cin>> ki;
						if (ki==1) 
						{
							plusduan();
							if (prj.size()!=1) hienthida(); 
						}
						if (ki==2) delda();
					}
				}
				if (tvad==3)
				{
					int ki=0;
					hienthi();
					while (ki!=3)
					{
						cout << "1.Them nhan vien moi" << endl;
						cout << "2.Xoa nhan vien" << endl;
						cout << "3.Back" << endl;
						cin>> ki;
						if (ki==1) 
						{
							tao();
							hienthi(); 
						}
						if (ki==2) del();
					}
				}
				if (tvad==4)
				{
					Diemdanh();
				}
				if (tvad==5)
				{
					int ki=0;
					a[vt].display();
					while (ki!=2)
					{
						cout << "1. Doi mat khau: " << endl;
						cout << "2. Back" << endl;
						cin >> ki;
						if (ki==1) doimk();
					}	
				}
			}
			else
			{
				cout << "1.Thong bao" << endl;
		    	cout << "2.Du an" << endl;
		    	cout << "3.Request" << endl;
				cout << "4.Thong tin ca nhan" << endl;
				cout << "5.Dang xuat" << endl;
				cout << "Nhap tac vu: ";
				cin >> tvnv;
				if (tvnv==1) 
				{
					int ki=0;
					displaytb();
					cout << "1.Back" << endl;
					cin >> ki;
				}
				if (tvnv==2)
				{
					for (int j=0; j<prj.size(); j++)
					{
						if (a[vt].getda()==prj[j].getname()) hienthida();
					}
				}
				if (tvnv==3)
				{
					request();
				}
				if (tvnv==4)
				{
					int ki=0;
					a[vt].display();
					while (ki!=2)
					{
						cout << "1. Doi mat khau: " << endl;
						cout << "2. Back" << endl;
						cin >> ki;
						if (ki==1) doimk();
					}	
				}
			}
		}
	}
    return 0;
}

