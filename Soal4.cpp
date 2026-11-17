#include <iostream>
using namespace std;

// jangan pedulikan using namespace stdny mendadak dipakai balik diriku mendadak panik disrh reverse linked list dan mau ga mau demi kecepatan peunlisan kode using namespace dikembalikan
struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};



//IN-ORDER
void inOrder(Node* root, int batasAtas, int batasBawah) {
    if (root != nullptr) {
        inOrder(root->kiri,batasAtas,batasBawah);
        if((root->data>=batasBawah)&&(root->data<=batasAtas)){
            std::cout << root->data << " ";
        }
        inOrder(root->kanan, batasAtas, batasBawah);
    }
}



// bakal jalan dari root ampe ketemu null baru buat node baru
void tambah(Node*& root, int data){
    if(root==nullptr){
        root = new Node();
        root->data=data;
        root->kiri=nullptr;
        root->kanan=nullptr;
        return;        
    }
    
    // input lbh bsr dri root
    if(data > root->data){
        tambah(root->kanan, data);
    }
    // input lbh kecil dri root
    else if(data<root->data){
        tambah(root->kiri, data);
    }

    else{
        std::cout<<"Angka sudah ada didalam tree!\n";
    }

    return;
}

int main() {

    Node* root = nullptr;
    int angka;

    std::cout<<"Masukkan angka (0=stop) : ";
    std::cin>>angka;

    while(angka!=0){
        tambah(root,angka);
        std::cin>>angka;
    }
    
    int batasAtas = -1;
    int batasBawah =-1;
    cout<<"Input batas atas: ";cin>>batasAtas;
    cout<<"Input batas bawah: ";cin>>batasBawah;
    // cek nilai cin g dibuat karna user dianggap berakal
    std::cout << "Nilai didalam batas dari kecil ke besar : ";
    inOrder(root,batasAtas,batasBawah);
    std::cout << '\n';

    return 0;
}