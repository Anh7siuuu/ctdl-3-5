#include <iostream>
using namespace std;
struct Phan_Tu{
    float HeSo;
    int Bac;
    Phan_Tu* Link;
};
struct Da_Thuc{
    Phan_Tu* first;
};
void Da_Thuc_init(Da_Thuc* dathuc){
    dathuc->first = nullptr;
} 
Phan_Tu* Create_PhanTu(float &HeSo, int &Bac){
    Phan_Tu* newNode = new Phan_Tu;
    newNode->Bac = Bac;
    newNode->HeSo = HeSo;
    newNode->Link = nullptr;
    return newNode;
}
void Nhap_DaThuc(Da_Thuc* dathuc, Phan_Tu* phantu ){
    if(phantu->HeSo == 0){return;}
    if(dathuc->first == nullptr || dathuc->first->Bac > phantu->Bac ){
        phantu->Link = dathuc->first;
        dathuc->first = phantu;
        return;
    }
    Phan_Tu* q = dathuc->first;
    while(q->Link != nullptr && q->Link->Bac < phantu->Bac){
        q = q->Link;
    } 
    phantu->Link = q->Link;
    q->Link = phantu;
}
Da_Thuc* Cong_Da_Thuc(Da_Thuc* dathuc, Da_Thuc* dathuc1){
    Phan_Tu* p = dathuc->first;
    Phan_Tu* q = dathuc1->first;
    while(p != nullptr && q != nullptr ){
        if( p->Bac == q->Bac){
            p->HeSo = p->HeSo + q->HeSo;
        }
        if(p->Bac > q->Bac){
            q = q->Link;
        }
        if(p->Bac < q->Bac){
            p = p->Link;
        }
    }
    return dathuc;
}
void Dathuc_Display(Da_Thuc* dathuc){
    Phan_Tu* p = dathuc->first;
    while(p != nullptr){
        cout << p->HeSo << "x^"<< p->Bac << " + ";
    }
}
