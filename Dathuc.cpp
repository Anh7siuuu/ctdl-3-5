#include"DA thuc.h"
int main(){
    Da_Thuc* dathuc1 = new Da_Thuc;
    Da_Thuc* dathuc2 = new Da_Thuc;
    dathuc1->first = nullptr;
    dathuc2->first = nullptr;
    cout << "Nhap da thuc 1 " << '\n';
        for(int i=0; i<3; i++){
            int n;
            float c;
            cout << "bac phan tu " << i+1 << ": ";
            cin >> n;
            cout << "He so: ";
            cin >> c;
            Phan_Tu* p = Create_PhanTu(c, n);
            Nhap_DaThuc(dathuc1, p);
        }
        cout << "Nhap Da thuc 2 " << '\n';
        for(int i=0; i<3; i++){
            int n;
            float c;
            cout << "Bac Phan tu " << i+1 << ": ";
            cin >> n;
            cout << "He so: ";
            cin >> c; 
            Phan_Tu* p = Create_PhanTu(c, n);
            Nhap_DaThuc(dathuc2, p);
        }
        Dathuc_Display(dathuc1);
}