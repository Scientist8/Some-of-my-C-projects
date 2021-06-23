
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Kitap_Turu {
    Roman, Siir, Oyku,
};

struct Tarih {
    int Gun, Ay, Yil;
};

struct Kitap_Kayit {
    int KitapNo;
    char KitapAdi[20];
    char YazarAdi[30];
    struct Tarih BasimTarihi;
    enum Kitap_Turu KitapTuru;
};

void Dosya_Yazma(char *Dosya)
{
    struct Kitap_Kayit kitap;
    
    printf("KitapNo giriniz:");
    scanf("%d", &kitap.KitapNo);
    printf("Kitap Adı giriniz:");
    scanf("%s", kitap.KitapAdi);
    printf("Yazar Adı giriniz:");
    scanf("%s", kitap.YazarAdi);
    printf("Kitap Basım Tarihi giriniz ( gün ay yil arada bosluk olacak sekilde):");
    scanf("%d%d%d", &kitap.BasimTarihi.Gun,&kitap.BasimTarihi.Ay,&kitap.BasimTarihi.Yil);
    printf("Kitap Türü giriniz (0: Roman, 1: Siir, 2: Oyku):");
    scanf("%d", &kitap.KitapTuru);
    
    FILE* fp = fopen(Dosya, "a+b");
    fwrite((void*)&kitap, sizeof(kitap), 1, fp);
    fclose(fp);
}

void Kayit_Listeleme(char *Dosya)
{
    FILE* fp = fopen(Dosya, "rb");
    if ( fp == NULL )
    {
        printf("kayıt bulunamadı !\n");
        return;
    }
    
    struct Kitap_Kayit kayit;
    
    while (!feof(fp)) {
        if (!fread(&kayit, sizeof(kayit), 1, fp))
        {
            printf("Kitap No: %d\n", kayit.KitapNo);
            printf("Kitap Adı: %s\n", kayit.KitapAdi);
            printf("Yazar Adı: %s\n", kayit.YazarAdi);
            printf("Kitap Basım Tarihi: %d/%d/%d\n", kayit.BasimTarihi.Gun, kayit.BasimTarihi.Ay, kayit.BasimTarihi.Yil);
            printf("Kitap Türü: %s\n", kayit.KitapTuru == Roman ? "Roman" : (kayit.KitapTuru == Siir ? "Siir" : "Oyku"));
        }
    }
    
    fclose(fp);
}

int Kayit_sayisi(char *Dosya)
{
    FILE* fp = fopen(Dosya, "rb");
    if ( fp == NULL )
    {
        printf("kayıt bulunamadı !\n");
        return 0;
    }
    
    int cnt = 0;
    struct Kitap_Kayit kayit;
    while (!feof(fp))
    {
        if (!fread(&kayit, sizeof(kayit), 1, fp))
            cnt++;
    }
    fclose(fp);
    
    return cnt;
}

main()
{
    // kayitlar ""Kutuphane.bin" adli binary dosyasinda saklanacak.
    char Dosya[]="Kutuphane.bin";
    int k;
    // Dosyaya kayit yazma
    Dosya_Yazma(Dosya);
    // dosyadaki tüm kayitlarin listelenmesi
    Kayit_Listeleme(Dosya);
    // Dosyadaki kayýt sayisi
    k=Kayit_sayisi(Dosya);
    printf("Dosyada %d tane kayit vardir",k);
}