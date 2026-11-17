#include <iostream>

// using namespace std;
// g diminta nama mahasiswa jdi dibiarkan

// tipe b
// 15.20

int main(){

    // 0 tgs
    // 1 kuis
    // 2 uts
    // 3 praktikum
    float nilai[5][4];
    for (int i=0;i<5;i++){
        std::cout<<"Input Nilai Tugas Mahasiswa ke-"<<i+1<<": "; std::cin>>nilai[i][0];
        std::cout<<"Input Nilai Kuis Mahasiswa ke-"<<i+1<<": "; std::cin>>nilai[i][1];
        std::cout<<"Input Nilai UTS Mahasiswa ke-"<<i+1<<": "; std::cin>>nilai[i][2];
        std::cout<<"Input Nilai Praktikum Mahasiswa ke-"<<i+1<<": "; std::cin>>nilai[i][3];
    }

    float ratarata[5];
    for (int i=0;i<5;i++){
        ratarata[i]=float(nilai[i][0]+nilai[i][1]+nilai[i][2]+nilai[i][3])/4;
    }
    
    // rata2max
    float temp = 0;
    int x = 0;
    for(int i=0;i<5;i++){
        if (ratarata[i]>temp)
        {
            temp = ratarata[i];
            x=i;
        }        
    }
    // rata2minim
    float tempp = 0;
    int y = 0;
    for(int i=0;i<5;i++){
        if (ratarata[i]<tempp)
        {
            tempp = ratarata[i];
        }
        
    }
    
    int counter=0;
    for(int i=0;i<5;i++){
        if (ratarata[i]>=75)
        {
            counter+=1;
        }
    }
    
    for (int i=0;i<5;i++){
        std::cout<<"Rata-rata mahasiswa ke-"<<i+1<<" adalah : "<<ratarata[i]<<std::endl;
    }


    std::cout<<"Mahasiswa dengan rata - rata tertinggi adalah mahasiswa ke-"<<x+1<<" dengan nilai: "<<ratarata[x]<<std::endl;
    std::cout<<"Mahasiswa dengan rata - rata terendah adalah mahasiswa ke-"<<y+1<<" dengan nilai: "<<ratarata[y]<<std::endl;
    std::cout<<"Mahasiswa dengan rata - rata diatas/sama dengan 75 ada: "<<counter<<" Orang"<<std::endl;
}
