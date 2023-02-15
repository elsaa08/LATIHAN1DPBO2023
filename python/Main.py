from Mahasiswa import Mahasiswa

# Saya [Elsa Nabiilah] [2108805] mengerjakan LATIHAN 1 dalam mata kuliah
# Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan
# kecurangan seperti yang telah dispesifikasikan.
# Aamiin.
# */
# class Main():
#  @staticmethod
# def main(args):
mhs = [None] * (100)  # deklarasi array alokasi 100
# deklarasi variabel
Pilih = 0
searchid = 0
search = 0
cekid = 0
nimbaru = ""
namabaru = ""
psbaru = ""
fkbaru = ""


while (True):
    print("\n|-----------------------------------------|")
    print("|------Pilih Menu yang Diinginkan---------|")
    print("|-----------------------------------------|")
    print("(*Note: Mahasiswa harus di Add dulu)\n")
    print("(1). Tambah Data Mahasiswa")
    print("(2). Tampilkan Data Mahasiswa")
    print("(3). Update Data Mahasiswa")
    print("(4). Delete Data Mahasiswa")
    print("\n jika sudah selesai \'tekan ctrl+c\' ^*^ \n")
    Pilih = int(input())  # inputan menu
    if (Pilih == 1):  # jika user input menu 1
        while (True):
            print("\n+++++++++++| TAMBAHKAN DATA MAHASISWA| +++++++++++")
            Mahasiswa.count += 1  # iterasi
            i = 0
            i = Mahasiswa.count
            # inputan user data mahasiswa
            print("   > NIM : ")
            newnim = input()
            print("   > Nama : ")
            newname = input()
            print("   > Program Studi : ")
            newprog = input()
            print("   > Fakultas : ")
            newfak = input()
            mhs[i] = Mahasiswa(i, newnim, newname, newprog, newfak)
            print("\n1. Tambah lagi 0. Udah")
            k = int(input())  # inputan user menu tambah/udah
            if (k == 0):
                break
     # break
    elif (Pilih == 2):
        # jika user pilih menu 2
        print("\n************| Menampilkan Data Mahasiswa |************")
    # int j = 0;
        j = 1
        while (j <= Mahasiswa.count):
            if (mhs[j] != None):
                print(mhs[j].toString())  # memangiil output function
            # print(mhs[j].())
            print("\n  ---------------------\n")
            j += 1
            break
    elif (Pilih == 3):
        # jika user input menu 3
        print("\n&&&&&&&&| UPDATE DATA MAHASISWA |&&&&&&&&")
        print(" > Masukan ID : ")
        search = int(input())  # input id
        j = 1
        while (j <= Mahasiswa.count):
            if (mhs[j] != None):
                cekid = mhs[j].getid()
            # ceknama = mhs[j].getnama()
                if (cekid == search):  # jika id sama dengan id yg dicari
                    print("============ DATA DITEMUKAN =========")
                    print("ID            : " + str(cekid))
                    print("NIM           : " + mhs[j].getnim())
                    print("Nama          : " + mhs[j].getnama())
                    print("Program Studi : " + mhs[j].getprogstud())
                    print("Fakultas      : " + mhs[j].getfak())
                    print("==================================\n")
                    print("   > Masukan NIM (update) : ")
                  #  input user untuk data yg akan di update

                    nimbaru = input()
                    print("   > Masukan Nama (update) : ")
                    namabaru = input()
                    print("   > Masukan Program Studi (update) : ")
                    psbaru = input()
                    print("   > Masukan Fakultas (update) : ")
                    fkbaru = input()
                    # simpen di array
                    mhs[j] = Mahasiswa(
                        cekid, nimbaru, namabaru, psbaru, fkbaru)
                    print(
                        "\n^^ Data sudah diubah...\n tekan menu (2). untuk melihat hasilnya\n")
            j += 1
            break
    elif (Pilih == 4):
        # jika user pilih menu 4
        print("$$$$$$$$$$$$$$$$$| DELETE DATA MAHASISWA |$$$$$$$$$$$$$$$$$")
        print(" > Masukan ID : ")
        searchid = int(input())  # user input id yg akan di delete
        if (mhs[searchid] != None):
            mhs[searchid] = None  # hapus
            print("Selamat, sudah terhapus......")
        else:
            print("GAGAL! coba restart")
   # break
# break
