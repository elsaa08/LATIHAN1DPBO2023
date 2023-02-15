/*
Saya [Elsa Nabiilah] [2108805] mengerjakan LATIHAN 1 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan
 kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

class Mahasiswa {
    private int id = 0;
    private String nim;
    private String nama;
    private String progstud;
    private String fak;
    static int count = 0;

    public Mahasiswa() {
        this.id = 0;
        this.nim = "";
        this.nama = "";
        this.progstud = "";
        this.fak = "";
    }

    public Mahasiswa(int id, String nim, String nama, String progstud, String fak) {
        this.id = id;
        this.nim = nim;
        this.nama = nama;
        this.progstud = progstud;
        this.fak = fak;
    }

    // getter setter method
    public int getid() {
        return this.id;
    }

    void setid(int id) {
        this.id = id;
    }

    public String getnim() {
        return this.nim;
    }

    public void setnim(String nim) {
        this.nim = nim;
    }

    public String getnama() {
        return this.nama;
    }

    public void setnama(String nama) {
        this.nama = nama;
    }

    public String getprogstud() {
        return this.progstud;
    }

    public void setprogstud(String progstud) {
        this.progstud = progstud;
    }

    public String getfak() {
        return this.fak;
    }

    public void setfak(String fak) {
        this.fak = fak;
    }
}
