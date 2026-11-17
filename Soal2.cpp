#define fernandezLebihGantengDariJustinBieber true
#include <iostream>
// using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void ReverseLinkedList(Node*&head, Node*& tail){

    // plz jangan khawatirkan kompleksitaasnya karna ini yg kepikirn saat itu gw ingat di leetcode disrh rekursif atau apapun itu
    if(head==nullptr){
        std::cout<<"Linked list kosong\n";
        return;
    }
    if(head->data==tail->data){
        std::cout<<"linked list cmn 1 elemen dan g ada bedanya jika reverse atau ga! \n";
    }


    // int counter=0;
    Node* temp = head;
    // while (temp!=nullptr)
    // {
    //     counter+=1;
    //     temp=temp->next;
    // }
    
    // Node** arr[counter];
    // temp=head;
    // int i =0;
    // while (temp!=nullptr)
    // {
    //     arr[i]=&temp;
    //     temp=temp->next;
    //     i+=1;
    // }

    // i need gpt to fkin help me with this
    // how do you even use pointer pointer in order to just do smtg like arr[i].next = arr[i-1]
    // i tried, like fr
    // for(int i=counter;i<0;i++){
    //     arr[i]*->next=arr[i-1];



    // }



    // Node* temp1 = head;
    // // sblm
    // while((temp!=nullptr)){
    //     temp=temp->next;
    //     if(temp->next->data==tail->data){
    //         Node* oldtail = tail;
    //         tail->next = temp;


    //     }

    // }    
    // head->next=nullptr;

    return;
    
    // dsfkhjasfdlkjhaslfkjasdf
}

void InsertAtStart(int value, Node*& head, Node*& tail){
    // newnode.next = head, head = new node
    Node* NodeBaru = new Node();
    NodeBaru->data=value;
    NodeBaru->next=head;
    if((head==nullptr)&&(tail==nullptr)){
        tail = NodeBaru;
    }
    head = NodeBaru;
}




void DeleteAfterValue(Node*& head, float value){
    Node* temp = head;

    if(head==nullptr){
        std::cout<<"Linked list kosong!\n";
        return;
    }
    
    while(temp!=nullptr){
        if (temp->data==value)
        {
            if (temp->next==nullptr)
            {
                std::cout<<"Tidak ada node setelah nilai ini!\n";
                return;
            }
            Node* tempNext = temp->next;
            temp->next = temp->next->next;
            delete tempNext;
            return;
        }
        temp=temp->next;
    }
    
    if(temp==nullptr){
        std::cout<<"Nilai tidak ditemukan!\n";
        return;
    }
}

void ShowLinkedList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<"\n";
}



void DeleteAll(Node*& head, Node*& tail){
    while(head != nullptr){
        Node* hapus = head;
        head = head->next;
        delete hapus;
    }
    tail = nullptr;
} // when we use exit the fernandez lebih ganteng dri justin bieber we need to delete the whole thing

int main(){
    InsertAtStart(100,head,tail);
    InsertAtStart(200,head,tail);
    InsertAtStart(150,head,tail);

    int menu;
    int nilai;
    int nilaiMasuk;
    while (fernandezLebihGantengDariJustinBieber)
    {
        // cuman menu buat kalau mau coba ulang2
        std::cout<<"Pilih Menu : \n";
        std::cout<<"1. Tampilkan Linked List\n";
        std::cout<<"2. Tambah nilai di paling depan linked list(ga diminta soal cmn agak buang waktu kalo dihps)\n";
        std::cout<<"3. Menghapus node yang berada tepat didepan sebuah nilai\n";
        std::cout<<"4. Balikkan linked list\n";
        std::cout<<"5. Exit\n";
        std::cout<<"Pilih Menu : ";
        std::cin>>menu;

        switch (menu)
        {
        case 1:
            ShowLinkedList(head);
            break;

        case 2:
            // cause im too lazy to care for the user when they input string or some dumbass big int lets just assume tht the user got a working braincells and will input integer like a sane human being
            std::cout<<"Masukkan Nilai yang ingin diinput : "; std::cin>>nilai;
            InsertAtStart(nilai, head, tail);
            break;

        case 3:            
            std::cout<<"Masukkan Nilai node dibelakang node yg ingin dihapus : "; std::cin>>nilai;
            DeleteAfterValue(head,nilai);
            break;

        case 4:
            ReverseLinkedList(head,tail);
            break;

        default:
            DeleteAll(head, tail);
            return 0;
        }

    }

    return 0;
}