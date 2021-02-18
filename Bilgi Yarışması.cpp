#include<stdio.h>
#include<string.h>
void karsilama () {
	printf("BILGI YARISMAMIZA HOSGELDINIZ");
	printf("\nYarismaya baslamadan once asagidaki kurallari okuyunuz.\n[1]-Yarismada amac en yuksek puani almaktir.\n[2]-Yarismaya baslamadan once sisteme kayitli iseniz giris yapin,kayitli degilseniz kayit yapin.");
		
}
int secimfonksiyonu() {
	int secim;
	printf("\n\nLutfen asagidaki islemlerden birini seciniz.\n[1]-Giris Yap\n[2]-Kayit Ol");
	printf("\nSeciminizi giriniz=");
	scanf("%d",&secim);
	return secim;	
}
int girisyapfonksiyonu(char kullaniciadi[200],char kullanicisifre[200]) {
	char isimveri[200];
	char sifreveri[200];
	bool kontrol =false; //bool veritipini kullanarak kontrol deðiþkenine false atadýk.
	while (kontrol==false) // Hatalý giriþte sistemnin sürekli kullanýcý bilgileri istemesi için while ile döngü oluþturup kontrolü içine attýk.
	{
		printf("Lutfen kullanici adinizi giriniz=");
	    scanf("%s",&isimveri);
	    printf("Lutfen sifrenizi giriniz=");
	    scanf("%s",&sifreveri);
	    if(strcmp(isimveri,kullaniciadi)==0&&strcmp(sifreveri,kullanicisifre)==0) {
		printf("Tebrikler.Sisteme giris basarili.");
		kontrol=true; //Kullanýcý bilgilerini doðru girerse döngü devam etmeyip burada dursun diye yaptýk.
	    }
	    else{
		printf("!!UYARI!! Giris bilgileri yanlis.Lutfen tekrar deneyin.\n");
	    }	
	} 	
}
int kayitolfonksiyonu() {
	char isim[200];
	char sifre[200];
	printf("Lutfen kullanici adinizi belirleyiniz=");
	scanf("%s",&isim);
	printf("Lutfen kullanici sifrenizi belirleyiniz=");
	scanf("%s",&sifre);	
	printf("Giris bilgileriniz sisteme kaydedildi.\n****Giris ekranina yonlendiriliyorsunuz****\n");
	girisyapfonksiyonu(isim,sifre);	
}
int bilgiyarismasi() {
	char cevap[2];
	int  puan=0;
	int secim;
	int can=3;
	printf("\n\nYarisma Basladi");
	printf("\nGuncel puaniniz=%d",puan);
	while(can!=0) {
	if(puan==0) {
	printf("\n\n[SORU-1]Asagidakilerden hangisi Turkiye Cumhuriyeti'nin baskentidir?\na)-Istanbul\nb)-Izmir\nc)-Ankara\nd)-Eskisehir");
	printf("\nCevap=");
	scanf("%s",&cevap);
	if(strcmp(cevap,"c")==0) {
		printf("\nTebrikler.Dogru cevap.");
		puan+=10;
		printf("\nGuncel puan=%d",puan);
	}
	else{
		printf("\nMaalesef yanlis cevap.Dogru cevap c sikkidir.");
		printf("\nGuncel puan=%d",puan);
		can-=1;
		printf("\n'%d'caniniz kaldi.",can);
	}
	}
	if(puan==10) {
	printf("\n\n[SORU-2]Asagidakilerden hangisi ABD'nin baskentidir?\na)-Washington\nb)-New Jersey\nc)-New York\nd)-Florida");
	printf("\nCevap=");
	scanf("%s",&cevap);
	if(strcmp(cevap,"a")==0) {
		printf("\nTebrikler.Dogru cevap.");
		puan+=10;
		printf("\nGuncel puan=%d",puan);
	}
	else{
		printf("\nMaalesef yanlis cevap.Dogru cevap a sikkidir.");
		printf("\nGuncel puan=%d",puan);
		can-=1;
		printf("\n'%d' caniniz kaldi.",can);
	}
	}
	if(puan==20) {
	printf("\n\n[SORU-3]Asagidakilerden hangisi Rusya'nin baskentidir?\na)-St Petersburg\nb)-Yekaterinburg\nc)-Soci\nd)-Moskova");
	printf("\nCevap=");
	scanf("%s",&cevap);
	if(strcmp(cevap,"d")==0) {
		printf("\nTebrikler.Dogru cevap.");
		puan+=10;
		printf("\nGuncel puan=%d",puan);
	}
	else{
		printf("\nMaalesef yanlis cevap.Dogru cevap d sikkidir.");
		printf("\nGuncel puan=%d",puan);
		can-=1;
		printf("\n'%d' caniniz kaldi.",can);
	}
	}
	if(puan==30) {
	printf("\n\n[SORU-3]Asagidakilerden hangisi Almanya'nin baskentidir?\na)-Hamburg\nb)-Berlin\nc)-Munih\nd)-Frankfurt");
	printf("\nCevap=");
	scanf("%s",&cevap);
	if(strcmp(cevap,"b")==0) {
		printf("\nTebrikler.Dogru cevap.");
		puan+=10;
		printf("\nGuncel puan=%d",puan);
	}
	else{
		printf("\nMaalesef yanlis cevap.Dogru cevap b sikkidir.");
		printf("\nGuncel puan=%d",puan);
		can-=1;
		printf("\n'%d' caniniz kaldi.",can);
	}
	}
	if(puan==40) {
	printf("\n\n[SORU-4]Asagidakilerden hangisi Fransa'nin baskentidir?\na)-Paris\nb)-Marsilya\nc)-Lyon\nd)-Strazburg");
	printf("\nCevap=");
	scanf("%s",&cevap);
	if(strcmp(cevap,"a")==0) {
		printf("\nTebrikler.Dogru cevap.");
		puan+=10;
		printf("\nGuncel puan=%d",puan);
		can=0;// Son sorunun doðru kýsmýnda canýmýzý 0'a eþitledik ki döngü dursun ve program akýþý devam etsin.
	}
	else{
		printf("\nMaalesef yanlis cevap.Dogru cevap b sikkidir.");
		printf("\nGuncel puan=%d",puan);
		can-=1;
		printf("\n'%d' caniniz kaldi.",can);
	}
	}
	}
	return puan;//puan deðiþkeninden elde ettiðimiz veriyi int main fonksiyonuna gönderdik.
}
int yarismasonu (int puan) {
	printf("\nYarismamiz burada sonlanmistir.");
	printf("\nYarisma Skorunuz=%d",puan);
	
}

int main () {
	char kullaniciadi[200]="Muharrem";
	char kullanicisifre[200]="256963";
	karsilama();
	int mainsecim=secimfonksiyonu();
	if (mainsecim==1) {
		girisyapfonksiyonu(kullaniciadi,kullanicisifre);
		
	}
	else if(mainsecim==2) {
		kayitolfonksiyonu();
		
	}
	int skor=bilgiyarismasi();//bilgiyarismasi() fonksiyonu çalýþtý ve bir puan deðeri oluþturdu.Yukarýda bu deðeri buraya göndermiþtik.Þimdi ise bu deðeri skor deðiþkenine eþitledik.
	yarismasonu(skor);		// Daha sonra skor deðiþkenini de yarismasonu(skor) fonksiyonuna gönderdik. Böylece en son bitirme skorumuzu elde ettik.
	
	return 0;
}
