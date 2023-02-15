<?php
//Saya [Elsa Nabiilah] [2108805] mengerjakan LATIHAN 1 dalam mata kuliah
//Desain Pemrograman Berorientasi Objek
//untuk keberkahanNya maka saya tidak melakukan
//kecurangan seperti yang telah dispesifikasikan.
//Aamiin
class human
{
    //deklar variabel
    private $NIM = "";
    private $nama = "";
    private $kelas = "";
    private $prodi = "";
    private $fakultas = "";
    private $semester = "";

    public function __construct($NIM = "", $nama = "", $kelas = "", $prodi = "", $fakultas = "", $semester = "")
    {
        $this->NIM = $NIM;
        $this->nama = $nama;
        $this->kelas = $kelas;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
        $this->semester = $semester;
    }
    //getter setter method
    public function setnim($NIM)
    {
        $this->NIM = $NIM;
    }
    public function getnim()
    {
        return $this->NIM;
    }

    public function setnama($nama)
    {
        $this->nama = $nama;
    }
    public function getnama()
    {
        return $this->nama;
    }

    public function setkelas($kelas)
    {
        $this->kelas = $kelas;
    }

    public function getkelas()
    {
        return $this->kelas;
    }

    public function setprodi($prodi)
    {
        $this->prodi = $prodi;
    }
    public function getprodi()
    {
        return $this->prodi;
    }

    public function setfakultas($fakultas)
    {
        $this->fakultas = $fakultas;
    }
    public function getfakultas()
    {
        return $this->fakultas;
    }

    public function setsemester($semester)
    {
        $this->semester = $semester;
    }
    public function getsemester()
    {
        return $this->semester;
    }

    public function print()
    {
        echo "<table>";
        return
            //  "<table width = '850' border='1'>" .
            "<tr>" .
            "<tr><td>NIM</td><td>:</td><td>" . $this->getnim() . "</td></tr>" .
            "<tr><td>Nama</td><td>:</td><td>" . $this->getnama() . "</td></tr>" .
            "<tr><td>Kelas</td><td>:</td><td>" . $this->getkelas() . "</td></tr>" .
            "<tr><td>Prodi</td><td>:</td><td>" . $this->getprodi() . "</td></tr>" .
            "<tr><td>Fakultas</td><td>:</td><td>" . $this->getfakultas() . "</td><tr>" .
            "<tr><td>Semester</td><td>:</td><td>" . $this->getsemester() . "</td><tr>" .
            "<tr/>";
    }
    //echo '<hr>';
}
// echo "<table width = '850' border='1'>
// <tr>
// <td>NIM</td>
// <td>Nama</td>
// <td>Kelas</td>
// <td>Prodi</td>
// <td>Angkatan</td>
// <td>semester</td>