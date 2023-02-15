
/*
Saya [Elsa Nabiilah] [2108805] mengerjakan LATIHAN 1 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan
 kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Mahasiswa mhs[] = new Mahasiswa[100]; // membuat array list dari file class mahasiswa
        // ArrayList<Mahasiswa> mhs[] = new ArrayList<>();
        int i = 0;
        // deklarasi variabel
        String newnim = "";
        String newname = "";
        String newprog = "";
        String newfak = "";

        String nimbaru = "";
        String namabaru = "";
        String psbaru = "";
        String fkbaru = "";

        while (true) {
            int Pilih = 0;
            Scanner in = new Scanner(System.in); // scanner
            // menu
            System.out.println("\n|-----------------------------------------|");
            System.out.println("|------Pilih Menu yang Diinginkan---------|");
            System.out.println("|-----------------------------------------|");
            System.out.println("(*Note: Mahasiswa harus di Add dulu)\n");
            System.out.println("(1). Tambah Data Mahasiswa");
            System.out.println("(2). Tampilkan Data Mahasiswa");
            System.out.println("(3). Update Data Mahasiswa");
            System.out.println("(4). Delete Data Mahasiswa");
            System.out.println("\n jika sudah selesai 'tekan ctrl+c' ^*^ \n");
            // input menu
            try {
                Pilih = in.nextInt();
            } catch (Exception e) {
                System.out.println("Input salah!");
            }
            switch (Pilih) {
                // jika user input menu 1
                case 1:
                    while (true) {
                        System.out.println("\n+++++++++++| TAMBAHKAN DATA MAHASISWA| +++++++++++");
                        Mahasiswa.count++; // iterasi

                        i = Mahasiswa.count;
                        // inputan user data mahasiswa

                        System.out.println("   > NIM : ");
                        in.nextLine();
                        newnim = in.nextLine();

                        System.out.println("   > Nama : ");
                        newname = in.nextLine();

                        System.out.println("   > Program Studi : ");
                        newprog = in.nextLine();

                        System.out.println("   > Fakultas : ");
                        newfak = in.nextLine();

                        // simpan di arraylist
                        mhs[i] = new Mahasiswa(i, newnim, newname, newprog, newfak);
                        // if (i != null) {
                        // mhs[i].setid(i);
                        // mhs[i].setnim(newnim);
                        // mhs[i].setnama(newname);
                        // mhs[i].setprogstud(newprog);
                        // mhs[i].setfak(newfak);
                        // }
                        System.out.println("\n1. Tambah lagi 0. Udah");
                        // meminta inputan user untuk menu tambah data atau stop
                        int k = 0;
                        try {
                            k = in.nextInt();
                        } catch (Exception e) {
                            System.out.println("Ketik 0 atau 1");
                        }
                        if (k == 0) {
                            break;
                        }
                    }
                    break;
                case 2:
                    System.out.println("\n************| Menampilkan Data Mahasiswa |************");
                    // menampilkan semua data mahasiswa
                    for (int j = 1; j <= Mahasiswa.count; j++) {
                        if (mhs[j] != null) {
                            System.out.println("> ID             : " + mhs[j].getid() +
                                    "\n> NIM            : " + mhs[j].getnim() +
                                    "\n> Nama           : " + mhs[j].getnama() +
                                    "\n> Program Studi  : " + mhs[j].getprogstud() +
                                    "\n> Fakultas       : " + mhs[j].getfak());
                            System.out.println("\n  ---------------------\n");
                        }
                    }
                    break;
                case 3:
                    // jika user memilih menu nomor 3
                    System.out.println("\n&&&&&&&&| UPDATE DATA MAHASISWA |&&&&&&&&");
                    System.out.println(" > Masukan ID : ");
                    int search = in.nextInt();
                    for (int j = 1; j <= Mahasiswa.count; j++) {
                        if (mhs[j] != null) {
                            int cekid = mhs[j].getid();
                            if (cekid == search) { // jika id data mahasiswa sama dengan ID yang diinput user maka
                                System.out.println("============ DATA DITEMUKAN =========");
                                System.out.println("NIM           : " + mhs[j].getnim());
                                System.out.println("Nama          : " + mhs[j].getnama());
                                System.out.println("Program Studi : " + mhs[j].getprogstud());
                                System.out.println("Fakultas      : " + mhs[j].getfak());
                                System.out.println("=====================================\n");
                                // meminta inputan update
                                System.out.println("   > Masukan NIM (update) : ");
                                in.nextLine();
                                nimbaru = in.nextLine();

                                System.out.println("   > Masukan Nama (update) : ");
                                namabaru = in.nextLine();

                                System.out.println("   > Masukan Program Studi (update) : ");
                                psbaru = in.nextLine();

                                System.out.println("   > Masukan Fakultas (update) : ");
                                fkbaru = in.nextLine();
                                // simpan di new array
                                mhs[j] = new Mahasiswa(cekid, nimbaru, namabaru, psbaru, fkbaru);
                                System.out.println(
                                        "\n^^ Data sudah diubah...\n tekan menu (2). untuk melihat hasilnya\n");
                            }
                        }
                    }
                    break;
                case 4:
                    // jika user memilih menu 4
                    System.out.println("$$$$$$$$$$$$$$$$$| DELETE DATA MAHASISWA |$$$$$$$$$$$$$$$$$");
                    System.out.println(" > Masukan ID : ");
                    int searchid = in.nextInt();
                    if (mhs[searchid] != null) {
                        mhs[searchid] = null; // menghapus (disama denganin null)
                        System.out.println("Selamat, sudah terhapus......");
                    } else {
                        System.out.println("GAGAL! coba restart");
                    }
                    break;
                // default:
                // break;
            }
        }

    }
}
