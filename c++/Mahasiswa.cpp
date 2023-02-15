/*
Saya [Elsa Nabiilah] [2108805] mengerjakan LATIHAN 1 dalam mata kuliah
Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan
 kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <list>

using namespace std;
class Mahasiswa
{
private:
    int id = 0;
    string nim;
    string nama;
    string progstud;
    string fak;

public:
    static int count; // membuat variabel public
    // initialize variabel
    Mahasiswa()
    {
        this->id = 0;
        this->nim = nullptr;
        this->nama = nullptr;
        this->progstud = nullptr;
        this->fak = nullptr;
    }
    // menempatkan variabel
    Mahasiswa(int id, string nim, string nama, string progstud, string fak)
    {
        this->id = id;
        this->nim = nim;
        this->nama = nama;
        this->progstud = progstud;
        this->fak = fak;
    }
    // getter setter method
    int getid()
    {
        return this->id;
    }
    void setid(int id)
    {
        this->id = id;
    }
    string getnim()
    {
        return this->nim;
    }
    void setnim(string nim)
    {
        this->nim = nim;
    }
    string getnama()
    {
        return this->nama;
    }
    void setnama(string nama)
    {
        this->nama = nama;
    }
    string getprogstud()
    {
        return this->progstud;
    }
    void setprogstud(string progstud)
    {
        this->progstud = progstud;
    }
    string getfak()
    {
        return this->fak;
    }
    void setfak(string fak)
    {
        this->fak = fak;
    }
    string toString()
    {
        return "> ID             : " + to_string(this->id) +
               "\n> NIM            : " + this->nim +
               "\n> Nama           : " + this->nama +
               "\n> Program Studi  : " + this->progstud +
               "\n> Fakultas       : " + this->fak;
    }
};
int Mahasiswa::count = 0;