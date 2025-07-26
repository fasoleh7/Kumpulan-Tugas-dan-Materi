//fathurrohman solehudin
//21040012
//2A

#include <iostream>
#include <conio.h>
using namespace std;

void aturan()
{
    cout<<"Quiz hanya dapat dikerjakan sekali. kerjakan dengan jujur !" <<endl;
    cout<<"  A = Baik Sekali"<<endl;
    cout<<"  B = Baik"<<endl;
    cout<<"  c = cukup"<<endl;
    cout<<"  D = Kurang"<<endl;
}

int nim, benar, nilai,jmlbenar,lulus,salah;
	string nama, kelas;
	

	struct quiz{
		string soal;
		string pg;
		char jawaban;
		char key;
	
	};

int main (){
	
	quiz s[20];
	
	s[0].soal="1. Anda dapat mengisi layer maupun seleksi dengan menggunakan 'Fill' Berikut ini yang tidak termasuk dalam pilihan 'Fill' adalah mengisi layer dengan.";
	s[0].pg="a. Image \nb. Foreground color \nc. Background color \nd. Black (warna hitam)";
	s[0].key='a';
	
	s[1].soal="2. Anda dapat mengisi layer maupun seleksi dengan menggunakan ''Fill'. Berikut ini yang tidak termasuk dalam pilihan ''Fill' adalah mengisi layer dengan";
	s[1].pg="a. Image\nb. Foreground color\nc. Background color\nd. Black (warna hitam)";
	s[1].key='a';
	
	s[2].soal="3. Sub menu 'Mode'' pada menu Image dipergunakan untuk";
	s[2].pg="a. Melihat dan mengatur preset pada brush \nb. Mengatur keyboard shurtcut \nc. Membuat duplikasi image pada workspace \nd. Mengubah mode warna yang akan digunakan pada image";
	s[2].key='d';
	
	s[3].soal="4. Menu image dipergunakan untuk";
	s[3].pg="a. Mengatur kalibrasi warna pada monitor \nb. Melakukan setting dan perubahan image yang sedang aktif \nc. Mengatur layout halaman \nd. Memunculkan pilihan file handling";
	s[3].key='b';

	s[4].soal="5. Rasterize dipergunakan untuk mengubah layer dari";
	s[4].pg="a. Vektor ke bitmap/raster\nb. Grayscale ke bitmap/raster \nc. Bitmap/raster ke duotone";
	s[4].key='a';
		
	s[5].soal="6. Jika Anda mempergunakan terlalu banyak layer pada image yang sedang Anda kerjakan akan terjadi";
	s[5].pg="a. Terbentuk noise pada image \nb. Image menjadi buram \nc. Aplikasi menjadi berat karena terbebani ukuran file yang besar \nd. Kemampuan komputer untuk memproses image bertambah";
	s[5].key='c';	
	
	s[6].soal="7. Pasangan sub menu dan fungsinya pada menu layer berikut adalah benar, kecuali";
	s[6].pg="a. New - membuat layer baru \nb. New fill layer - membuat layer vektor \nc. Add vector mask - membuat vektor masking. \nd. Arange - melakukan pengaturan posisi layer";
	s[6].key='c';
	
	s[7].soal="8. Dalam submenu New pada menu layer Anda dapat membuat....";
	s[7].pg="a. Layer menu \nb. Layer set \nc. Action set \nd. History";
	s[7].key='b';
	
	s[8].soal="9. Submenu 'Type'dipergunakan untuk....";
	s[8].pg="a. Mengubah parameter content yang dibuat dengan perintah New Adjustment Layer \nb. Mengubah image vektor menjadi raster \nc. Membuat penyesuaian pada layer huruf \nd. Membuat slice baru pada layer aktif";
	s[8].key='c';
	
	s[9].soal="10. Untuk membuat masking baru pada layer yang sedang aktif dipergunakan....";
	s[9].pg="a. Enable/disable layer masking \nb. Create clipping mas \nc. Arrange \nd. Add layer mask";
	s[9].key='d';
	
	s[10].soal="11. Untuk mengambil sample dan meletakkannya pada image lain menggunakan tools";
	s[10].pg="a. Stamp tool \nb. Marquee \nc. Shape tool \nd. Canvas;";
	s[10].key='a';
	
	s[11].soal="12. Ikon yang digunakan untuk membuat seleksi berbentuk segi empat, elips, serta baris adalah";
	s[11].pg="a. Marque \nb. Cropping \nc. Stamp \nd. MDodge";
	s[11].key='a';
	
	s[12].soal="13. Berikut ini yang tidak terdapat pada tools palatte adalah";
	s[12].pg="a. Dodge tool \nb. Brush tool \nc. Clone stamp tool \nd. Opacity tool";
	s[12].key='c';
	
	s[13].soal="14. Tool yang dipergunakan untuk membuat efek image gelap seperti dibakar adalah...";
	s[13].pg="a. Dodge \nb. Multiply \nc. Overlay \nd. Burn";
	s[13].key='d';
	
	s[14].soal="15. Untuk memodifikasi bentuk path menggunakan tool ";
	s[14].pg="a. Blur \nb. Path \nc. Path Selection \nd. Hand";
	s[14].key='c';
	
	s[15].soal="16. Untuk mempergunakan rectangular dan elliptical marquee dengan cara ";
	s[15].pg="a. Tekan tombol M pada keyboard \nb. Tekan tombol F1 \nc. Menekan tombol shift \nd. Tekan tombol F10";
	s[15].key='d';
	
	s[16].soal="17. Berikut ini yang termasuk submenu pada lasso tool adalah  ";
	s[16].pg="a. Rectangular \nb. Elliptical marquee \nc. Magnetic lasso \nd. Magic wand";
	s[16].key='a';
	
	s[17].soal="18. Fungsi dari polygonal lasso adalah";
	s[17].pg="a. Untuk membuat kotak atau lingkaran yang lebih sempurna \nb. Untuk membuat seleksi secara bebas \nc. Untuk membuat seleksi secara bebas \nd. Untuk membuat seleksi pada image yang bersudut";
	s[17].key='d';
	
	s[18].soal="19. Untuk menambah seleksi tekan …. sambil mengklik bidang yang ingin diseleksih";
	s[18].pg="a. Alt \nb. Shift \nc. Enter \nd. f4";
	s[18].key='b';
	
	s[19].soal="20. Untuk mengurai seleksi digunakan tombol …. sambil mengklik bidang yang dikurangi seleksinya.";
	s[19].pg="a. Alt \nb. Shift \nc. Enter \nd. F5";
	s[19].key='a';
	

    string nila[4] = {
        "Baik Sekali","Baik","Cukup","Kurang"
    };


    //Pembukaan
    cout<<"====== ====== ====== ====== "<<endl;
    cout<<"====== ==== QUIZ === ====== "<<endl;
    cout<<"By.FathurrohmanS === ====== "<<endl<<endl;
    cout<<"Tuliskan NIM :  ";
    cin>>nim;
    cout<<"Tuliskan Nama Lengkap :  ";
    cin.ignore();getline(cin,nama);
    cout<<"Tuliskan Kelas : ";
    cin>>kelas;
    cout<<endl<<"selamat datang "<<nama<<" di Quiz yang di buat oleh fathurrohman"<<endl<<endl;
    aturan();
    cout<<"Apakah anda sudah siap?  :) :)"<<endl;
	getch();
	system("cls");
	
	
	//Quiz
	for(int i=0;i<20;i++){
	cout<<s[i].soal<<endl;
	cout<<s[i].pg<<endl;

	cout<<"Masukkan jawaban anda = ";
	cin>>s[i].jawaban;
	cout<<"   \n";
	if(s[i].jawaban==s[i].key) {jmlbenar++;}
	else {salah++;}
	
	}

	//Jawaban Benar
	cout<<"====== ====== ====== ======"<<endl;
	cout<<"====== == Jawaban == ======"<<endl;
	cout<<"====== ====== ====== ======"<<endl;

	for( int i=0; i<20; i++){
    cout<<endl<<"pertanyaan # "<<(i+1)<<endl;
    cout<<s[i].soal<<endl;
    cout<<s[i].pg<<endl;
    cout<<"jawaban yang benar : "<<s[i].key;
	cout<<"\n\n\n====== ====== ====== ====== ====== ====== ====== ======"<<endl;
  
	}
	cout<< "Terimakasih telah mengerjakan QUIZ dengan jujur"<<endl<<endl;
	cout<<"tekan enter untuk melihat hasil"<<endl;
	getch();
	system("cls");

	//Printing hasil
	cout<<endl<<endl;
	cout<<"====== ====== ====== ======"<<endl;
	cout<<"====== === Hasil === ======"<<endl;
	cout<<"====== ====== ====== ======"<<endl;



	nilai=nilai+jmlbenar*5;	
	
	cout<< "Total pertanyaan : "<<20 <<endl;
	cout<<"Benar : "<<jmlbenar<<endl;
	cout<<"salah : "<<salah<<endl;
	cout<< "Total poin : "<<nilai <<endl<<endl;
	cout<<"====== ====== ====== ======"<<endl;
	cout<< "Nama : "<<nama<<endl;
	cout<< "Nim  : "<<nim<<endl;
	
	
	//nilai berdasarkan point
	if (nilai > 85){
		cout<< "Nilai Mutu : "<<nila[0]<<endl<<endl;
		lulus = 1;
	}
	else if ((nilai <= 85) && (nilai > 75)){
		cout<<"nilai mutu : "<<nila[1]<<endl<<endl;
		lulus = 1;
	}
	else if ((nilai <= 75) && (nilai > 60)){
		cout<<"nilai mutu : "<<nila[2]<<endl<<endl;
		lulus = 2;	
	}
	else{
		cout<<"nilai mutu : "<<nila[3]<<endl<<endl;
		lulus = 2;;
		}
	
	
	//kelulusan berdasarkan nilai mutu
	switch (lulus)
			{
				case 1:
					cout<<"ANDA LULUS !!"<<endl;
					cout<<"Selamat dan tetap semangat belajar "<<nama<<" ^^"<<endl;
					break;
				case 2:
					cout<<"ANDA BELUM LULUS !!"<<endl;
					cout<<"Jangan menyerah dan tetap semangat belajar "<<nama<<" ^^"<<endl;
					break;
		
			}
	
	getch();
	return 0;
}



