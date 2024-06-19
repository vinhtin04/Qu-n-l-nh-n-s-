#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int tk;
    char mk[100]; 
} dnhap;
void dnhap_init(dnhap* this) {
    this->tk = 0;
    strcpy(this->mk, "");
}
void dnhap_init_param(dnhap* this, int tk, const char* mk) {
    this->tk = tk;
    strncpy(this->mk, mk, sizeof(this->mk) - 1); 
    this->mk[sizeof(this->mk) - 1] = '\0'; 
}
void dnhap_setsi(dnhap* this, int tk, const char* mk) {
    this->tk = tk;
    strncpy(this->mk, mk, sizeof(this->mk) - 1);
    this->mk[sizeof(this->mk) - 1] = '\0';
}
void dnhap_setmk(dnhap* this, const char* mk) {
    strncpy(this->mk, mk, sizeof(this->mk) - 1);
    this->mk[sizeof(this->mk) - 1] = '\0';
}
int dnhap_gettk(dnhap* this) {
    return this->tk;
}
const char* dnhap_getmk(dnhap* this) {
    return this->mk;
}

typedef struct {
    int d, y, m, stv, mda;
    char ten[100];
    int tv[100]; // Gi? �?nh s? d?ng m?t m?ng s? nguy�n cho tv
} duan;

// H�m kh?i t?o kh�ng tham s?
void duan_init(duan *du) {
    du->d = 0;
    du->y = 0;
    du->m = 0;
    du->stv = 0;
    du->mda = 0;
    strcpy(du->ten, "");
    // Kh?i t?o m?ng tv (gi? s? m?ng tv r?ng)
    memset(du->tv, 0, sizeof(du->tv));
}

// H�m kh?i t?o v?i tham s?
void duan_init_param(duan *du, const char *ten, int d, int m, int y, int stv, int mda) {
    strcpy(du->ten, ten);
    du->d = d;
    du->m = m;
    du->y = y;
    du->stv = stv;
    du->mda = 2024000 + mda;
    // Kh?i t?o m?ng tv (gi? s? m?ng tv r?ng)
    memset(du->tv, 0, sizeof(du->tv));
}

// H�m setter setname
void duan_setname(duan *du, const char *ten) {
    strcpy(du->ten, ten);
}

// H�m getter getname
const char* duan_getname(duan *du) {
    return du->ten;
}

// H�m getter getd
int duan_getd(duan *du) {
    return du->d;
}

// H�m getter getm
int duan_getm(duan *du) {
    return du->m;
}

// H�m getter gety
int duan_gety(duan *du) {
    return du->y;
}

// H�m getter getstv
int duan_getstv(duan *du) {
    return du->stv;
}

// H�m getter getmda
int duan_getmda(duan *du) {
    return du->mda;
}

// �?nh ngh?a c?u tr�c d? li?u t��ng ?ng v?i l?p nhansu trong C++
typedef struct {
    char name[100];
    char que[100];
    char email[100];
    char vtcv[100];
    char dt[100];
    char hv[100];
    char da[100];
    char qh[100];
    char tt[100];
    int d, m, y, msnv, ml, ds, ms, ys, l;
} nhansu;

// H�m kh?i t?o kh�ng tham s?
void nhansu_init(nhansu *ns) {
    strcpy(ns->name, "");
    strcpy(ns->que, "");
    strcpy(ns->email, "");
    strcpy(ns->vtcv, "");
    strcpy(ns->dt, "");
    strcpy(ns->hv, "");
    strcpy(ns->da, "");
    strcpy(ns->qh, "nhan vien");
    strcpy(ns->tt, "-");
    ns->d = 0;
    ns->m = 0;
    ns->y = 0;
    ns->msnv = -1;
    ns->ml = 0;
    ns->ds = 0;
    ns->ms = 0;
    ns->ys = 0;
    ns->l = 0;
}

// H�m kh?i t?o v?i tham s?
void nhansu_init_param(nhansu *ns, const char *name, const char *que, int d, int m, int y, const char *email, int msnv, const char *vtcv, int ml, int ds, int ms, int ys, const char *dt, const char *hv, const char *da, const char *qh, const char *tt, int l) {
    strcpy(ns->name, name);
    strcpy(ns->que, que);
    strcpy(ns->email, email);
    strcpy(ns->vtcv, vtcv);
    strcpy(ns->dt, dt);
    strcpy(ns->hv, hv);
    strcpy(ns->da, da);
    strcpy(ns->qh, qh);
    strcpy(ns->tt, tt);
    ns->d = d;
    ns->m = m;
    ns->y = y;
    ns->msnv = 20240000 + msnv;
    ns->ml = ml;
    ns->ds = ds;
    ns->ms = ms;
    ns->ys = ys;
    ns->l = l;
}

// H�m setter setname
void nhansu_setname(nhansu *ns, const char *name) {
    strcpy(ns->name, name);
}

// H�m getter getname
const char* nhansu_getname(nhansu *ns) {
    return ns->name;
}

// H�m getter getque
const char* nhansu_getque(nhansu *ns) {
    return ns->que;
}

// H�m getter getemail
const char* nhansu_getemail(nhansu *ns) {
    return ns->email;
}

// H�m getter getvtcv
const char* nhansu_getvtcv(nhansu *ns) {
    return ns->vtcv;
}

// H�m getter getdt
const char* nhansu_getdt(nhansu *ns) {
    return ns->dt;
}

// H�m getter gethv
const char* nhansu_gethv(nhansu *ns) {
    return ns->hv;
}

// H�m getter getda
const char* nhansu_getda(nhansu *ns) {
    return ns->da;
}

// H�m getter getqh
const char* nhansu_getqh(nhansu *ns) {
    return ns->qh;
}

// H�m getter getd
int nhansu_getd(nhansu *ns) {
    return ns->d;
}

// H�m getter getm
int nhansu_getm(nhansu *ns) {
    return ns->m;
}

// H�m getter gety
int nhansu_gety(nhansu *ns) {
    return ns->y;
}

// H�m getter getmsnv
int nhansu_getmsnv(nhansu *ns) {
    return ns->msnv;
}

// H�m getter getml
int nhansu_getml(nhansu *ns) {
    return ns->ml;
}

// H�m getter getds
int nhansu_getds(nhansu *ns) {
    return ns->ds;
}

// H�m getter getms
int nhansu_getms(nhansu *ns) {
    return ns->ms;
}

// H�m getter getys
int nhansu_getys(nhansu *ns) {
    return ns->ys;
}

// H�m getter gettt
const char* nhansu_gettt(nhansu *ns) {
    return ns->tt;
}

// H�m setter setduan
void nhansu_setduan(nhansu *ns, const char *da) {
    strcpy(ns->da, da);
}

// H�m setter setl
void nhansu_setl(nhansu *ns, int l) {
    ns->l = l;
}

// H�m getter getl
int nhansu_getl(nhansu *ns) {
    return ns->l;
}

// H�m setter settt
void nhansu_settt(nhansu *ns, const char *tt) {
    strcpy(ns->tt, tt);
}

// H�m setter setqh
void nhansu_setqh(nhansu *ns, const char *qh) {
    strcpy(ns->qh, qh);
}

// H�m setter setml
void nhansu_setml(nhansu *ns, int ml) {
    ns->ml = ml;
}

// H�m setter setmsnv
void nhansu_setmsnv(nhansu *ns, int msnv) {
    ns->msnv = 20240000 + msnv;
}

// H�m hi?n th? th�ng tin
void nhansu_display(nhansu *ns) {
    printf("Ten: %s\n", ns->name);
    printf("Que: %s\n", ns->que);
    printf("Ngay sinh: %d/%d/%d\n", ns->d, ns->m, ns->y);
    printf("Email: %s\n", ns->email);
    printf("Ma so: %d\n", ns->msnv);
    printf("Vi tri cong viec: %s\n", ns->vtcv);
    printf("Muc luong: %d$\n", ns->ml);
    printf("Ngay vao lam: %d/%d/%d\n", ns->ds, ns->ms, ns->ys);
    printf("Dan toc: %s\n", ns->dt);
    printf("Hoc van: %s\n", ns->hv);
    printf("Du an dang tham gia: %s\n", ns->da);
}

// H�m hi?n th? th�ng tin nh�n vi�n
void nhansu_displaynv(nhansu *ns) {
    printf("Ten: %s\n", ns->name);
    printf("Que: %s\n", ns->que);
    printf("Ngay sinh: %d/%d/%d\n", ns->d, ns->m, ns->y);
    printf("Email: %s\n", ns->email);
    printf("Ma so: %d\n", ns->msnv);
    printf("Vi tri cong viec: %s\n", ns->vtcv);
    printf("Ngay vao lam: %d/%d/%d\n", ns->ds, ns->ms, ns->ys);
    printf("Dan toc: %s\n", ns->dt);
    printf("Du an dang tham gia: %s\n", ns->da);
}

// �?nh ngh?a c?u tr�c d? li?u t��ng ?ng v?i l?p req trong C++
typedef struct {
    char xin[100];
    int nn, ndm;
    char lydo[100];
} req;

// H�m kh?i t?o v?i tham s?
void req_init(req *r, int nn, const char *lydo, const char *xin, int ndm) {
    r->nn = nn;
    strcpy(r->lydo, lydo);
    strcpy(r->xin, xin);
    r->ndm = ndm;
}

// H�m setter setLydo
void req_setLydo(req *r, const char *lydo) {
    strcpy(r->lydo, lydo);
}

// H�m getter getLydo
const char* req_getLydo(req *r) {
    return r->lydo;
}

// H�m setter setnn
void req_setnn(req *r, int nn) {
    r->nn = nn;
}

// H�m getter getnn
int req_getnn(req *r) {
    return r->nn;
}

// H�m setter setxin
void req_setxin(req *r, const char *xin) {
    strcpy(r->xin, xin);
}

// H�m getter getxin
const char* req_getxin(req *r) {
    return r->xin;
}

// H�m setter setndm
void req_setndm(req *r, int ndm) {
    r->ndm = ndm;
}

// H�m getter getndm
int req_getndm(req *r) {
    return r->ndm;
}

// �?nh ngh?a c?u tr�c d? li?u t��ng ?ng v?i l?p tbao trong C++
typedef struct {
    char name[100];
    char nd[100];
    int dt, mt, yt;
} tbao;

// H�m kh?i t?o v?i tham s?
void tbao_init(tbao *t, const char *name, const char *nd, int dt, int mt, int yt) {
    strcpy(t->name, name);
    strcpy(t->nd, nd);
    t->dt = dt;
    t->mt = mt;
    t->yt = yt;
}

// H�m setter setname
void tbao_setname(tbao *t, const char *name) {
    strcpy(t->name, name);
}

// H�m getter getname
const char* tbao_getname(tbao *t) {
    return t->name;
}

// H�m setter setnd
void tbao_setnd(tbao *t, const char *nd) {
    strcpy(t->nd, nd);
}

// H�m getter getnd
const char* tbao_getnd(tbao *t) {
    return t->nd;
}

// H�m setter setnn
void tbao_setnn(tbao *t, int dt, int mt, int yt) {
    t->dt = dt;
    t->mt = mt;
    t->yt = yt;
}

// H�m getter getdt
int tbao_getdt(tbao *t) {
    return t->dt;
}

// H�m getter getmt
int tbao_getmt(tbao *t) {
    return t->mt;
}

// H�m getter getyt
int tbao_getyt(tbao *t) {
    return t->yt;
}

tbao tb[1000];
nhansu a[1000]; 
dnhap adn[1000]; 
req r[1000]; 
duan prj[1000]; 
int dem = 0;

void nhaptt() {
    nhansu_init_param(&a[0], "Trung", "que", 0, 0, 0, "trung@gmail.com", 0, "giam doc", 10000, 14, 5, 2024, "kinh", "dai hoc", "-", "admin", "-", 5000);
    req_init(&r[0], 0, "-", "-", 0);
    dnhap_init_param(&adn[0], 20240000, "trung...");
    nhansu_init_param(&a[1], "Vinh", "thanh hoa", 17, 8, 2004, "vinhtin04@gmail.com", 1, "thu ki", 10000, 14, 5, 2024, "kinh", "dai hoc", "-", "admin", "-", 4000);
    req_init(&r[1], 0, "-", "-", 0);
    dnhap_init_param(&adn[1], 20240001, "vinh17804");
}

int mdan = 0;

void plusduan() {
    int i = 1;
    int n;
    char name[100];
    int k;
    int d, m, y, snv;

    printf("So du an moi: ");
    scanf("%d", &n);
    getchar(); // clear the newline character from the buffer

    while (i <= n) {
        printf("du an thu %d :\n", i);
        printf("        Ten du an: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // remove the newline character from the end of the input
        printf("        Thoi diem hoat dong: ");
        scanf("%d %d %d", &d, &m, &y);
        printf("        So luong nhan vien: ");
        scanf("%d", &snv);

        duan_init_param(&prj[mdan], name, d, m, y, snv, i-1);

        for (int j = 0; j < snv; j++) {
            if (j == 0)
                printf("                     Leader(msnv): ");
            else
                printf("                     thanh vien thu %d (msnv): ", j + 1);
            scanf("%d", &k);
            prj[mdan].tv[j] = k;
            nhansu_setduan(&a[k % 10000], name);
        }
        getchar(); // clear the newline character from the buffer
        mdan++;
        i++;
    }
    printf("Hoan tat\n");
}

void delda() {
    int k;
    int n;
    printf("So du an can xoa: ");
    scanf("%d", &n);
    
    for (int j = 0; j < n; j++) {
        printf("STT du an: ");
        scanf("%d", &k);
        k--; // Adjust for zero-based indexing

        // Remove the project association from each employee
        for (int i = 0; i < prj[k].stv; i++) {
            nhansu_setduan(&a[prj[k].tv[i] % 10000], "-");
        }

        // Shift the projects array to remove the deleted project
        for (int i = k; i < mdan - 1; i++) {
            prj[i] = prj[i + 1];
        }

        // Decrease the project count
        mdan--;
    }
    printf("Hoan tat\n");
}

void plusthongbao() {
    char ten[100];
    char s[100];
    int d, m, y;

    printf("Tieu de thong bao: ");
    getchar(); // Clear the buffer
    fgets(ten, sizeof(ten), stdin);
    ten[strcspn(ten, "\n")] = '\0';

    printf("Noi dung thong bao: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Thoi diem thong bao: ");
    scanf("%d %d %d", &d, &m, &y);

    tbao_init(&tb[dem], ten, s, d, m, y);
    dem++;
    printf("Hoan tat\n");
}

void displaytb() {
    printf("%-5s%-20s\n", "STT", "Tieu de Thong bao");
    for (int j = 0; j < dem; j++) {
        printf("%-5d%-20s\n", j + 1, tb[j].name);
    }

    char c;
    printf("ban co muon xem thong tin chi tiet(y/n): ");
    getchar(); // Clear the buffer
    scanf("%c", &c);

    int k;
    while (c == 'y') {
        printf("STT cua thong bao: ");
        scanf("%d", &k);

        if (k > 0 && k <= dem) {
            printf("Tieu de thong bao: %s\n", tb[k-1].name);
            printf("Thoi gian: %02d/%02d/%04d\n", tb[k-1].dt, tb[k-1].mt, tb[k-1].yt);
            printf("Noi dung: %s\n", tb[k-1].nd);
        } else {
            printf("Thong bao khong ton tai.\n");
        }

        printf("tiep tuc(y/n): ");
        getchar(); // Clear the buffer
        scanf("%c", &c);
    }
}

int mm = 2;
void tao() {
    int i = 1;
    int n;
    char name[100], que[100], email[100], vtcv[100], dt[50], hv[50], da[50] = "-";
    int d, m, y, msnv, ml, ds, ms, ys;
    printf("So nhan vien moi: ");
    scanf("%d", &n);
    getchar(); // clear newline character from buffer
    while (i <= n) {
        int kk = -1;
        for (int j = 0; j < mm; j++) {
            if (strcmp(a[j].name, "") == 0) {
                kk = j;
                break;
            }
        }
        printf("Nhan vien thu %d :\n", i);
        printf("        Ten: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // remove the newline character
        printf("        Que: ");
        fgets(que, sizeof(que), stdin);
        que[strcspn(que, "\n")] = '\0'; // remove the newline character
        printf("        Ngay, thang, nam sinh: ");
        scanf("%d %d %d", &d, &m, &y);
        printf("        Email: ");
        getchar(); // clear newline character from buffer
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = '\0'; // remove the newline character
        msnv = mm + i;
        printf("        Vi tri cong viec: ");
        fgets(vtcv, sizeof(vtcv), stdin);
        vtcv[strcspn(vtcv, "\n")] = '\0'; // remove the newline character
        printf("        Muc luong($): ");
        scanf("%d", &ml);
        printf("        Ngay vao lam: ");
        scanf("%d %d %d", &ds, &ms, &ys);
        printf("        Dan toc: ");
        getchar(); // clear newline character from buffer
        fgets(dt, sizeof(dt), stdin);
        dt[strcspn(dt, "\n")] = '\0'; // remove the newline character
        printf("        Hoc van: ");
        fgets(hv, sizeof(hv), stdin);
        hv[strcspn(hv, "\n")] = '\0'; // remove the newline character
        if (kk == -1) {
            nhansu new_employee;
            nhansu_init_param(&new_employee, name, que, d, m, y, email, mm, vtcv, ml, ds, ms, ys, dt, hv, da, "nhan vien", "-", ml);
            a[mm] = new_employee;
            a[mm].l=ml;
            dnhap new_login;
            dnhap_init_param(&new_login, 20240000 + i, "123456");
            adn[mm] = new_login;
            req new_request;
            req_init(&new_request, 0, "-", "-", 0);
            r[mm] = new_request;
            mm++;
        } else {
            nhansu_setname(&a[kk], name);
            // Continue setting other fields for the found employee index kk
            a[kk].d = d;
            a[kk].m = m;
            a[kk].y = y;
            strcpy(a[kk].email, email);
            a[kk].msnv = kk;
            strcpy(a[kk].vtcv, vtcv);
            a[kk].ml = ml;
            a[kk].ds = ds;
            a[kk].ms = ms;
            a[kk].ys = ys;
            strcpy(a[kk].dt, dt);
            strcpy(a[kk].hv, hv);
            strcpy(a[kk].da, da);
            strcpy(a[kk].qh, "nhan vien");
            strcpy(a[kk].tt, "-");
            a[kk].l = ml;
            dnhap_setsi(&adn[kk], 20240000 + kk, "123456");
            req_setnn(&r[kk], 0);
        }
        i=i+1;
    }
    printf("Hoan tat\n");
}

void dptv(int k) {
    if (k < 1 || k > mdan) {
        printf("Invalid project number.\n");
        return;
    }
    printf("Name: %s\n", prj[k-1].ten);
    printf("Ngay hoat dong: %d/%d/%d\n", prj[k-1].d, prj[k-1].m, prj[k-1].y);
    printf("Thanh vien:\n");
    for (int i = 0; i < prj[k-1].stv; i++) {
        printf("\t%d: %d\n", i + 1, prj[k-1].tv[i]);
    }
}

int vt;

void hienthi() {
    int dem1 = 0;
    printf("%-5s%-20s%-15s%-25s\n", "STT", "Ten", "Ma So NV", "Vi Tri Cong Viec");
    for (int j = 0; j <= mm; j++) {
        if (strcmp(a[j].name, "") != 0) {
            dem1++;
            printf("%-5d%-20s%-15d%-25s\n", dem1, a[j].name, a[j].msnv, a[j].vtcv);
        }
    }

    if (vt < 2) {
        char c;
        printf("Ban co muon xem thong tin chi tiet(y/n): ");
        scanf(" %c", &c);
        int k;
        while (c == 'y') {
            printf("Ma so nhan vien: ");
            scanf("%d", &k);
            if (k % 1000 > mm || strcmp(a[k % 1000].name, "") == 0) {
                printf("Khong tim thay nhan vien\n");
            } else {
                nhansu_display(&a[k % 1000]);
            }
            printf("Tiep tuc(y/n): ");
            scanf(" %c", &c);
        }
    } else {
        char c;
        printf("Ban co muon xem thong tin chi tiet(y/n): ");
        scanf(" %c", &c);
        int k;
        while (c == 'y') {
            printf("Ma so nhan vien: ");
            scanf("%d", &k);
            nhansu_displaynv(&a[k%1000]);
            printf("Tiep tuc(y/n): ");
            scanf(" %c", &c);
        }
    }
}

void hienthida() {
    int dem1 = 0;
    printf("%-5s%-20s%-15s\n", "STT", "Ten du an", "So thanh vien");

    for (int j = 0; j < mdan; j++) {
        if (strcmp(prj[j].ten, "") != 0) {
            dem1++;
            printf("%-5d%-20s%-15d\n", dem1, prj[j].ten, prj[j].stv);
        }
    }

    if (vt < 2) {
        char c;
        int k;
        printf("Ban muon xem chi tiet khong(y/n): ");
        scanf(" %c", &c);

        while (c == 'y') {
            printf("STT du an: ");
            scanf("%d", &k);

            while (k - 1 >= mdan || prj[k - 1].stv == 0) {
                printf("Khong tim thay du an. Nhap lai: ");
                scanf("%d", &k);
            }

            dptv(k);
            printf("Tiep tuc(y/n): ");
            scanf(" %c", &c);
        }
    }
}

void del() {
    int k;
    int n;
    printf("Co bao nhieu nhan vien nghi viec: ");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++) {
        printf("Ma so nhan vien: ");
        scanf("%d", &k);
        if (k % 1000 >= 0 && k % 1000 < 1000) {
            // Set the name of the employee at index (k % 1000) to an empty string
            a[k % 1000].name[0] = '\0';
        } else {
            printf("Khong tim thay nhan vien\n");
        }
    }
}

void doimk() {
    int tk;
    char mk[100], mkm[100];
    printf("Tai khoan: ");
    scanf("%d", &tk);
    while (tk != adn[vt].tk && tk != 0) {
        printf("Sai tai khoan: \n");
        printf("Nhan 0 de thoat\n");
        scanf("%d", &tk);
    }
    if (tk == 0) return; // Exit if 0 is entered

    printf("Mat khau: ");
    scanf("%s", mk);
    while (strcmp(mk, adn[vt].mk) != 0 && strcmp(mk, "Out") != 0) {
        printf("Sai Mat khau: \n");
        printf("Nhan Out de thoat\n");
        scanf("%s", mk);
    }
    if (strcmp(mk, "Out") == 0) return; // Exit if "Out" is entered

    if (strcmp(mk, adn[vt].mk) == 0) {
        printf("Mat khau moi: ");
        scanf("%s", mk);
        printf("Xac nhan mat khau moi: ");
        scanf("%s", mkm);
        while (strcmp(mkm, mk) != 0) {
            printf("Xac nhan lai: ");
            scanf("%s", mkm);
        }
        strcpy(adn[vt].mk, mkm); // Set new password
    }
    printf("hoan tat\n");
}

int demrq=0;

void dangnhap() { 
    int tk;
    char mk[100];
    int kt = -1;
    char c = 'n';
    while (kt == -1) {
        printf("tai khoan: ");
        scanf("%d", &tk);
        printf("mat khau: ");
        scanf("%s", mk);
        for (int j = 0; j <= mm; j++) {
            if (tk == adn[j].tk) {
                if (strcmp(mk, adn[j].mk) == 0) {
                    vt = j;
                    kt = 1;
                    break;
                } else {
                    printf("mat khau khong chinh xac\n");
                    printf("Quen mat khau(y/n): ");
                    scanf(" %c", &c);
                    if (c == 'y') doimk();
                    break;
                }
            } else if (j == mm) {
                printf("tai khoan khong ton tai!\n");
            }
        }
    }
}

const int MAX_LEN=10000;

void request() {     // request nhan vien
    int x;
    char s[MAX_LEN];
    printf("1. Xin nghi\n");
    printf("2. Xin den muon\n");
    printf("3. Xin ung luong\n");
    printf("4. Xin tang luong\n");
    printf("5. Khac\n");
    printf("6. Back\n");
    scanf("%d", &x);
    if (x != 6) {
        demrq++;
        if (x == 1) {
            req_setxin(&r[vt], "Xin nghi");
            req_setnn(&r[vt], req_getnn(&r[vt]) + 1);
            if (req_getnn(&r[vt]) == 9) {
                printf("ban da nghi 9/10 buoi\n");
                printf("nghi qua 10 buoi se tru 100%% luong\n");
            }
        }
        if (x == 2) {
            req_setxin(&r[vt], "Xin den muon");
            req_setndm(&r[vt], req_getndm(&r[vt]) + 1);
            printf("den muon 3 buoi bang 1 ngay nghi\n");
        }
        if (x == 3) req_setxin(&r[vt], "Xin ung luong");
        if (x == 4) req_setxin(&r[vt], "Xin tang luong");
        if (x == 5) {
            printf("Noi dung: ");
            getchar(); // To consume the newline character left by previous scanf
            fgets(s, sizeof(s), stdin);
            s[strcspn(s, "\n")] = 0; // Remove newline character from fgets
            req_setxin(&r[vt], s);
        }
        printf("ly do: ");
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = 0; // Remove newline character from fgets
        req_setLydo(&r[vt], s);
    }
}

void displaytt() {
    printf("%-5s%-20s%-20s%-20s\n", "STT", "MSNV", "Trang thai hoat dong", "Luong thang");
    for (int j = 0; j < mm; j++) {
        printf("%-5d%-20d%-20s%-20d\n", j+1, a[j].msnv, a[j].tt, a[j].l);
    }
}

void tongket() {
    printf("%-5s%-20s%-15s%-25s%-25s\n", "STT", "Ten", "Ma So NV", "Trang thai hoat dong", "Luong nhan duoc");
    for (int j = 0; j <= mm; j++) {
        if (req_getnn(&r[j]) > 10) {
            a[j].l = 0;
        }
        printf("%-5d%-20s%-15d%-25s%-25d\n", j, a[j].name, a[j].msnv, a[j].tt, a[j].l);
    }
}

void reset() {
    int ki=5;
    printf("1. Request ngay\n");
    printf("2. Request thang\n");
    scanf("%d" , &ki);
    if (ki==1)
    {
        for (int j = 2; j < mm; j++) {
            req_setLydo(&r[j], ""); // Đặt lý do là chuỗi rỗng
            req_setxin(&r[j], ""); // Đặt loại yêu cầu là chuỗi rỗng
            nhansu_settt(&a[j], "-");
        }
    }
    else
    {
        for (int j = 2; j < mm; j++) {
            req_setLydo(&r[j], ""); // Đặt lý do là chuỗi rỗng
            req_setxin(&r[j], ""); // Đặt loại yêu cầu là chuỗi rỗng
            nhansu_settt(&a[j], "-");
            nhansu_setl(&a[j], nhansu_getml(&a[j]));
            req_setndm(&r[j],0);
            req_setnn(&r[j],0);
        }
    }
    
}

void Diemdanh() {
    int ki = 0;
    int k, kl;
    int dem1 = 0;
    while (ki != 5) {
        printf("1. Check request\n");
        printf("2. Tong ket\n");
        printf("3. diem danh\n");
        printf("4. Reset\n");
        printf("5. Back\n");
        printf("Nhap tac vu: ");
        scanf("%d", &ki);
        
        if (ki == 1) {
            if (demrq > 0) {
                printf("%-5s%-20s%-15s\n", "STT", "Ma So NV", "Noi dung");
                for (int j = 2; j <= demrq; j++) {
                    if (strcmp(req_getxin(&r[j]), "") != 0) {
                        dem1++;
                        printf("%-5d%-20d%-15s\n", dem1, nhansu_getmsnv(&a[j]), req_getxin(&r[j]));
                    }
                }
            } else {
                printf("Khong co request\n");
            }
            
            char c;
            printf("Xem chi tiet(y/n): ");
            scanf(" %c", &c);
            
            while (c == 'y') {
                int kt;
                printf("MSNV: ");
                scanf("%d", &kt);
                kt %= 1000;
                printf("%-5s%-20s%-15s\n", "MSNV", "Noi dung", "Ly do");
                printf("%-5d%-20s%-15s\n", nhansu_getmsnv(&a[kt]), req_getxin(&r[kt]), req_getLydo(&r[kt]));
                
                printf("1.Dong y\n");
                printf("2.Tu choi\n");
                int mt;
                scanf("%d", &mt);
                if (mt == 2) {
                    req_setxin(&r[kt], "");
                    demrq--;
                }
                
                if (demrq > 0) {
                    printf("%-5s%-20s%-15s\n", "STT", "Ma So NV", "Noi dung");
                    for (int j = 2; j <= mm; j++) {
                        if (strcmp(req_getxin(&r[j]), "") != 0) {
                            dem1++;
                            printf("%-5d%-20d%-15s\n", dem1, nhansu_getmsnv(&a[j]), req_getxin(&r[j]));
                        }
                    }
                }
                printf("tiep tuc(y/n): ");
                scanf(" %c", &c);
            }
        }
        
        if (ki == 3) {
            while (k >= 0) {
                printf("msnv: ");
                scanf("%d", &k);
                if (k < 0) break;
                printf("trang thai(1.Presence/2.Late): ");
                scanf("%d", &kl);
                if (kl == 1) {
                    nhansu_settt(&a[k % 1000], "P");
                }
                if (kl == 2) {
                    nhansu_settt(&a[k % 1000], "L");
                }
            }
        }
        
        if (ki == 2) {
            for (int j = 2; j <= mm; j++) {
                if (strcmp(nhansu_gettt(&a[j]), "-") == 0) {
                    if (strcmp(req_getxin(&r[j]), "Xin nghi") == 0) {
                        nhansu_settt(&a[j], "A");
                        nhansu_setl(&a[j], nhansu_getl(&a[j]) - (nhansu_getml(&a[j]) / 2));
                    } else {
                        nhansu_settt(&a[j], "UA");
                        nhansu_setl(&a[j], nhansu_getl(&a[j]) - 2 * (nhansu_getml(&a[j]) / 2));
                    }
                }
                
                if (strcmp(nhansu_gettt(&a[j]), "L") == 0) {
                    if (strcmp(req_getxin(&r[j]), "Xin den muon") == 0) {
                        nhansu_settt(&a[j], "L");
                    } else {
                        nhansu_settt(&a[j], "UL");
                        req_setndm(&r[j], req_getndm(&r[j]) + 1);
                    }
                    
                    if (req_getndm(&r[j]) % 3 == 0) {
                        nhansu_setl(&a[j], nhansu_getl(&a[j]) - (nhansu_getml(&a[j]) / 2));
                    }
                }
            }
            
            printf("%-5s%-20s%-15s%-25s%-25s\n", "STT", "Ten", "Ma So NV", "trang thai hoat dong", "Luong nhan duoc");
            for (int j = 2; j <= mm; j++) {
                if (req_getnn(&r[j]) > 10) {
                    nhansu_setl(&a[j], 0);
                }
                printf("%-5d%-20s%-15d%-25s%-25.2f\n", j - 1, nhansu_getname(&a[j]), nhansu_getmsnv(&a[j]), nhansu_gettt(&a[j]), nhansu_getl(&a[j]));
            }
        }
        
        if (ki == 4) {
            reset();
        }
    }
}

int main() {
    nhaptt();
    int tvad, tvnv;
    char c[10] = "Start";
    while (strcmp(c, "y") != 0) {
        dangnhap();
        tvad = 0;
        tvnv = 0;
        while (tvad != 6 && tvnv != 5) {
            if (vt < 2) {
                printf("1.Thong bao\n");
                printf("2.Du an\n");
                printf("3.List nhan vien\n");
                printf("4.Check Request\n");
                printf("5.Thong tin ca nhan\n");
                printf("6.Dang xuat\n");
                printf("Nhap tac vu: ");
                scanf("%d", &tvad);
                
                if (tvad == 1) {
                    int ki = 0;
                    if (dem > 0) {
                        displaytb();
                    }
                    else printf("Khong co thong bao!\n");
                    printf("1.Them thong bao\n");
                    printf("2.Back\n");
                    scanf("%d", &ki);
                    
                    if (ki == 1) {
                        plusthongbao();
                    }
                }
                if (tvad == 2) {
                    int ki = 0;
                    if (mdan != 0) {
                        hienthida();
                    }
                    while (ki != 3) {
                        printf("1.Them du an moi\n");
                        printf("2.Xoa du an\n");
                        printf("3.Back\n");
                        scanf("%d", &ki);
                        if (ki == 1) {
                            plusduan();
                            if (mdan != 1) {
                                hienthida();
                            }
                        }
                        if (ki == 2) {
                            delda();
                        }
                    }
                }
                
                if (tvad == 3) {
                    int ki = 0;
                    hienthi();
                    while (ki != 3) {
                        printf("1.Them nhan vien moi\n");
                        printf("2.Xoa nhan vien\n");
                        printf("3.Back\n");
                        scanf("%d", &ki);
                        if (ki == 1) {
                            tao();
                            hienthi();
                        }
                        if (ki == 2) {
                            del();
                        }
                    }
                }
                
                if (tvad == 4) {
                    Diemdanh();
                }
                
                if (tvad == 5) {
                    int ki = 0;
                    nhansu_display(&a[vt]);
                    while (ki != 2) {
                        printf("1. Doi mat khau: \n");
                        printf("2. Back\n");
                        scanf("%d", &ki);
                        if (ki == 1) {
                            doimk();
                        }
                    }
                }
            } else {
                printf("1.Thong bao\n");
                printf("2.Du an\n");
                printf("3.Request\n");
                printf("4.Thong tin ca nhan\n");
                printf("5.Dang xuat\n");
                printf("Nhap tac vu: ");
                scanf("%d", &tvnv);
                
                if (tvnv == 1) {
                    if (dem>0) displaytb();
                    else printf("Khong co thong bao!\n");
                    printf("1.Back\n");
                    int ki = 0;
                    scanf("%d", &ki);
                }
                
                if (tvnv == 2) {
                    for (int j = 0; j < mdan; j++) {
                        if (nhansu_getda(&a[vt]) == prj[j].ten) {
                            hienthida();
                        }
                    }
                }
                
                if (tvnv == 3) {
                    request();
                }
                
                if (tvnv == 4) {
                    int ki = 0;
                    nhansu_display(&a[vt]);
                    while (ki != 2) {
                        printf("1. Doi mat khau: \n");
                        printf("2. Back\n");
                        scanf("%d", &ki);
                        if (ki == 1) {
                            doimk();
                        }
                    }
                }
            }
        }
        printf("Ket thuc chuong trinh(y/n): ");
        scanf("%s", &c);
    }
    return 0;
}
