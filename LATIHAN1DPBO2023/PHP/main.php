<?php
/*
Saya [Elsa Nabiilah] [2108805] mengerjakan LATIHAN 1 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan
 kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
require('human.php');

//membuat list dan diisi data
$listmhs = new human('2108805', 'Elsa Nabiilah', 'C2', 'Ilmu Komputer', 'FPMIPA', '4');
echo "<p><h1>Data Mahasiswa</h1></p>";

echo $listmhs->print();
echo '<hr>';
echo "<img src='elsa.jpg" . "' width='80' height='100'/>";

//echo '<hr>';
$listmhs2 = new human('2108801', 'Ajun', 'B', 'Pendidikan Ilmu Komputer', 'FPMIPA', '4');
echo $listmhs2->print();

echo '<hr>';
echo "<img src='ajun.jpg" . "' width='90' height='100'/>";
