# __count = 0

# Saya [Elsa Nabiilah] [2108805] mengerjakan LATIHAN 1 dalam mata kuliah
# Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan
# kecurangan seperti yang telah dispesifikasikan.
# Aamiin.
# */
# deklarasi variabel
class Mahasiswa:
    __id = ""
    __nim = ""
    __nama = ""
    __progstud = ""
    __fak = ""
    count = 0  # variabel global (public)
   # Pilih = 0

    def __init__(self):
        self.__id = 0
        self.__nim = ""
        self.__nama = ""
        self.__progstud = ""
        self.__fak = ""

    def __init__(self, id=0,  nim="", nama="", progstud="", fak=""):
        self.__id = id
        self.__nim = nim
        self.__nama = nama
        self.__progstud = progstud
        self.__fak = fak
# getter setter method in py

    def getid(self):
        return self.__id

    def setid(self, id):
        self.id = id

    def getnim(self):
        return self.__nim

    def setnim(self, nim):
        self.nim = nim

    def getnama(self):
        return self.__nama

    def setnama(self, nama):
        self.nama = nama

    def getprogstud(self):
        return self.__progstud

    def setprogstud(self, progstud):
        self.progstud = progstud

    def getfak(self):
        return self.__fak

    def setfak(self, fak):
        self.fak = fak
# output function

    def toString(self):
        return "> ID             : " + str(self.__id) + "\n> NIM            : " + self.__nim + "\n> Nama           : " + self.__nama + "\n> Program Studi  : " + self.__progstud + "\n> Fakultas       : " + self.__fak
