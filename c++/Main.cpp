/*
Saya [Elsa Nabiilah] [2108805] mengerjakan LATIHAN 1 dalam mata kuliah
Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan
 kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
#include "Mahasiswa.cpp"

class Main
{
public:
    static void main(vector<string> &args)
    {
        vector<Mahasiswa *> mhs(100); // make a vector
        // sampai user memberhentikan kode program
        while (true)
        {
            int Pilih = 0; // initialize
            // menu output
            cout << "\n|-----------------------------------------|" << endl;
            cout << "|------Pilih Menu yang Diinginkan---------|" << endl;
            cout << "|-----------------------------------------|" << endl;
            cout << "(*Note: Mahasiswa harus di Add dulu)\n"
                 << endl;
            cout << "(1). Tambah Data Mahasiswa" << endl;
            cout << "(2). Tampilkan Data Mahasiswa" << endl;
            cout << "(3). Update Data Mahasiswa" << endl;
            cout << "(4). Delete Data Mahasiswa" << endl;
            cout << "\n jika sudah selesai \'tekan ctrl+c\' ^*^ \n"
                 << endl;

            // input menu
            cin >> Pilih;
            switch (Pilih)
            {
                // jika user pilih menu 1
            case 1:
                while (true)
                {
                    cout << "\n+++++++++++| TAMBAHKAN DATA MAHASISWA| +++++++++++" << endl;
                    // iterasi count yang akan mendapatkan ID
                    Mahasiswa::count++;
                    int i = 0;
                    i = Mahasiswa::count;
                    // inputan user NIM, nama, program studi dan fakultas
                    cout << "   > NIM : " << endl;
                    string newnim;
                    cin >> newnim;
                    cout << "   > Nama : " << endl;
                    string newname;
                    cin >> newname;
                    cout << "   > Program Studi : " << endl;
                    string newprog;
                    cin >> newprog;
                    cout << "   > Fakultas : " << endl;
                    string newfak;
                    cin >> newfak;
                    mhs[i] = new Mahasiswa(i, newnim, newname, newprog, newfak);
                    cout << "\n1. Tambah lagi 0. Udah" << endl;
                    int k;
                    cin >> k;
                    // jika k = 0 (udahan programnya)
                    if (k == 0)
                    {
                        break; // berhentikan program
                    }
                }
                break;
            case 2:
                // jika user pilih menu 2
                cout << "\n************| Menampilkan Data Mahasiswa |************" << endl;
                // menampilkan hasil data mahasiswa yang telah ditambah
                for (int j = 1; j <= Mahasiswa::count; j++)
                {
                    if (mhs[j] != nullptr)
                    {
                        cout << mhs[j]->toString() << endl; // memanggil fungsi yang ada pada class
                        // cout << "ID            : " + mhs[j]->getid() << endl;
                        // cout << "NIM           : " + mhs[j]->getnim() << endl;
                        // cout << "Nama          : " + mhs[j]->getnama() << endl;
                        // cout << "Program Studi : " + mhs[j]->getprogstud() << endl;
                        // cout << "Fakultas      : " + mhs[j]->getfak() << endl;
                        cout << "\n  ---------------------\n"
                             << endl;
                    }
                }
                break;
            case 3:
                // jika user pilih menu 3
                cout << "\n&&&&&&&&| UPDATE DATA MAHASISWA |&&&&&&&&" << endl;
                cout << " > Masukan ID : " << endl;
                int search;

                cin >> search; // meminta masukan input ID yang akan di update
                for (int j = 1; j <= Mahasiswa::count; j++)
                {
                    if (mhs[j] != nullptr)
                    {
                        int cekid = mhs[j]->getid(); // menempatkan id ke var baru
                        //  string ceknama = mhs[j]->getnama();
                        if (cekid == search) // jika id sama dengan inputan
                        {
                            // get data variabel
                            cout << "============ DATA DITEMUKAN =========" << endl;
                            cout << "ID            : " + to_string(cekid) << endl;
                            cout << "NIM           : " + mhs[j]->getnim() << endl;
                            cout << "Nama          : " + mhs[j]->getnama() << endl;
                            cout << "Program Studi : " + mhs[j]->getprogstud() << endl;
                            cout << "Fakultas      : " + mhs[j]->getfak() << endl;
                            cout << "==================================\n"
                                 << endl;
                            // input data nim, nama, program studi, fakultas yang akan di update
                            cout << "   > Masukan NIM (update) : " << endl;
                            string nimbaru;
                            cin >> nimbaru;

                            cout << "   > Masukan Nama (update) : " << endl;
                            string namabaru;
                            cin >> namabaru;
                            cout << "   > Masukan Program Studi (update) : " << endl;
                            string psbaru;

                            cin >> psbaru;
                            cout << "   > Masukan Fakultas (update) : " << endl;
                            string fkbaru;

                            cin >> fkbaru;
                            // simpan di array
                            mhs[j] = new Mahasiswa(cekid, nimbaru, namabaru, psbaru, fkbaru);
                            cout << "\n^^ Data sudah diubah...\n tekan menu (2). untuk melihat hasilnya\n"
                                 << endl;
                        }
                    }
                }
                break;
            case 4:
                // jka user pilih menu 4
                cout << "$$$$$$$$$$$$$$$$$| DELETE DATA MAHASISWA |$$$$$$$$$$$$$$$$$" << endl;
                cout << " > Masukan ID : " << endl;
                int searchid;
                // searchid = Settlement::input<int>();
                cin >> searchid;
                if (mhs[searchid] != nullptr)
                {
                    mhs[searchid] = nullptr; // jika sesuai dengan ID inputan user ditemukan, maka null (hapus)
                    cout << "Selamat, sudah terhapus......" << endl;
                }
                else
                {
                    cout << "GAGAL! coba restart" << endl;
                }
                break;
            }
        }
    }
};
int main(int argc, char **argv)
{
    vector<string> parameter(argv + 1, argv + argc);
    Main::main(parameter);
    return 0;
};