#include <math.h>
#include <stdio.h>

int main()
{
    int n,cifre=0,prva;
    scanf("%d",&n);
    int m=n;         // pomocna promenljiva;
    
    /*delimo broj sa 10 dok ne dodjemo do 0 
    kako bi nasli broj cifara*/
    while(m!=0)
    {
        m/=10;
        cifre++;
    } 
    
    prva = n/pow(10,cifre-1);     //prvu cifru nalazimo tako sto broj podelimo sa 10^broj cifara
    int ostatak=0;               //ostatak pri deljenju sa 10
    int brojalica=0;            //potrebno da odredimo da li je poslednji broj 0
    m=n;                       //posto smo menjali m vratimo ga da nam bude jednako n
    
    /*dok god nam je ostatak pri deljenju sa 10
    (odnosno poslednja cifra) jednaka 0 idemo dalje
    i svaki put,broj delimo sa 10 i uvecavamo brojalicu*/
    while (ostatak==0)
    {
        ostatak = m%10;
        m/=10;
        brojalica++;
    }
    int zadnjakojanijenula=ostatak;          //zadnji broj koji nije nula jednak je ostatku iz prethodnog koraka
    int sredina=n-prva*pow(10,cifre-1);     //sredina su brojevi izmedju prve i poslednje cifre
    if(brojalica==1)                       //ukoliko nam je brojalica 1 znaci da poslednja cifra nije 0 i da treba da je oduzmemo od sredine
    sredina-=ostatak;                     //oduzimamo ostatak od sredine
    
    /*racunanje konacnog broja tako sto pomnozimo poslednju cifru(koja nije nula) sa 10^broj cifara
    i dodamo sredinu i prvu cifru na kraju*/
    int konacan=zadnjakojanijenula*pow(10,cifre-1)+sredina+prva; 
    
    printf("KONACNO:%d",konacan);           //ispis rezultata
    return 0;
}
