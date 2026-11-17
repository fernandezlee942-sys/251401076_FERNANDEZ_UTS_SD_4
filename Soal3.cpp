// FIN

#include <iostream>
using namespace std;

struct Node{
    string nama;
    Node* next;
};
Node* front = nullptr;
Node* rear = nullptr;

int QSize = 0;

void Enqueue(string data){
    Node* newNode = new Node();
    
    newNode->nama = data;
    newNode->next = nullptr;
    if(front==nullptr){
        front=newNode;
        rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
    QSize++;
}

void ShowQueue(){
    Node* temp = front;
    std::cout<<"Isi queue : ";
    while(temp!=nullptr){
        std::cout<<temp->nama<<" ";
        temp= temp->next;
    }
    std::cout<<"\n";

}

void Front(){
    if(front==nullptr){
        std::cout<<"Queue kosong!"<<std::endl;
        return;
    }
    std::cout<<"Front : "<< front->nama<<std::endl;
}

void Rear(){
    if(front==nullptr){
        std::cout<<"Queue kosong!"<<std::endl;
        return;
    }
    std::cout<<"Rear : "<<rear->nama<<std::endl;
}

void Size(){
    Node* temp = front;
    int size = 0;

    while(temp!=nullptr){
        size++;
        temp=temp->next;
    }
    std::cout<<"Size : "<<size<<std::endl;
}

void Empty(){
    if(front == nullptr){
        std::cout<<"Queue Kosong"<<std::endl;
    }
    else{
        std::cout<<"Queue tidak kosong"<<std::endl;
    }
}

void Dequeue(){
    if(front==nullptr){
        std::cout<<"Queue kosong!"<<std::endl;
        return;
    }

    Node* hapus = front;
    std::cout<<"Pop : "<<front->nama<<std::endl;

    if(front->next==nullptr){
        front=nullptr;
        rear=nullptr;
    }
    else{
        front=front->next;
    }

    delete hapus;
    
    ShowQueue();
    std::cout<<"\n";
    QSize--;
}

int main(){
    int menu=-1;
    while (true)
    {
        cout<<"Input Menu: \n";
        cout<<"1. Tambahkan pelanggan ke antrean \n";
        cout<<"2. Hapus pelanggan paling depan\n";
        cout<<"3. tampilakan pelanggan paling depan\n";
        cout<<"4. tampilakan pelanggan paling belakang\n";
        cout<<"5. Hitung jumlah pelanggan menunggu\n";
        cout<<"Input Menu: ";cin>>menu;

        if(menu==1){
        string nilai;
        cout<<"Input nama pelanggan: ";cin>>nilai;
        Enqueue(nilai);
        }
        else if (menu==2){
            Dequeue();
        }
        else if(menu==3){
            cout<<"pelanggan paling depan: "<<front->nama<<endl;
        }
        else if(menu ==4){
            cout<<"Pelanggan paling belakang: "<<rear->nama<<endl;
        }
        else if(menu==5){
            cout<<"Jumlah orang mengantri : "<<QSize<<endl;
        }
                
    }
}