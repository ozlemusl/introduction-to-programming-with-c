<a name="br1"></a> 

**Programlamaya Gꢀrꢀş Ödev Metnꢀ**

Sꢀzden Türkꢀye Sanal Süper Lꢀg takımlarının lꢀg fꢀkstürünün hesaplamasını yapan bꢀr program yazmanız ꢀstenmektedꢀr.

**Problemꢀn tanımı ve ꢀstenen özellꢀkler aşağıda lꢀstelenmꢀştꢀr.**

\-

\-

Lꢀgte 10 takım bulunmaktadır. Bu sayı gerekꢀrse değꢀştꢀrꢀlebꢀlmelꢀdꢀr.

Galꢀbꢀyet ꢀçꢀn 2 puan, beraberlꢀk ꢀçꢀn 1 puan ve mağlubꢀyet ꢀçꢀn -1 puan kazanılır. Gerekꢀrse bu değerler

değꢀştꢀrꢀlebꢀlmelꢀdꢀr.

\-

Her takımın tek bꢀr karakterden oluşan takma ꢀsmꢀ ve en fazla 12 karakterden oluşan takım uzun ꢀsmꢀ

bulunmaktadır. Takımların takma ꢀsꢀmlerꢀ ‘A’, ‘B’, ‘C’, ‘D’, ‘E’, ‘F’, ‘G’, ‘H’, ‘I’, ‘J’ şeklꢀnde olmalıdır. Takımların uzun

ꢀsꢀmlerꢀ **“takꢀmlar.txt”** dosyasından okunmalıdır. Bu dosya savunma sırasında verꢀlecektꢀr.

Başlangıçta tüm takımların oynadığı maç sayısı ve puanları gꢀbꢀ özellꢀklerꢀ 0 olarak alınmalıdır.

Program oynanan maçları klavyeden veya dosyadan gꢀrꢀş olarak alıp puan durumu tablosunu güncellemek

amacıyla gelꢀştꢀrmelꢀdꢀr.

\-

\-

\-

\-

\-

\-

\-

\-

Klavyeden maç gꢀrꢀşꢀ yapıldığında “A 3 C 2” şeklꢀnde olmalıdır. Bunun anlamı A takımı ꢀle C takımı maç yapmış, ev

sahꢀbꢀ takım A takımı 3 gol atmış ve mꢀsafꢀr takım C ꢀse 2 gol atmıştır.

Dosyadan gꢀrꢀş yapıldığında ꢀse her bꢀr satır klavyeden yapılan gꢀrꢀş formatında olacaktır. Yanꢀ dosyada bꢀrden çok

maç sonucu olabꢀlꢀr, bu sonuçlar puan durumu tablosuna ꢀşlenmelꢀdꢀr.

Oynanan maç bꢀr kez daha gꢀrꢀş olarak verꢀldꢀğꢀnde ekrana uyarı verꢀlmelꢀ ve bu maç paun durumu tablosuna

ꢀşlenmemelꢀdꢀr. A ve C takımı A takımının evꢀnde sadece bꢀr kez maç oynamalıdır.

Puan durumu tablosu ekrana veya dosyaya puan sırasına göre, takımların alfabetꢀk sırasına göre ya da takma ꢀsꢀm

sırasına göre yazılabꢀlmelꢀdꢀr. İstendꢀğꢀnde takım ꢀsꢀmlerꢀ büyük harf olarak yazılabꢀlmelꢀdꢀr.

Lꢀgtekꢀ takım sayısı, galꢀbꢀyette mağlubꢀyette ve beraberlꢀkte alınacak puan sayısı **ayarlar.txt** dosyasından

okunmalıdır. Bu dosya savunma sırasında verꢀlecektꢀr.

Puan durumu tablosunda olması gereken özellꢀkler şunlardır.

1\. Takma ꢀsꢀm - A, B, C gꢀbꢀ

2\. Takım Uzun ꢀsmꢀ, 12 karakter

3\. Oynadığı maç sayısı

4\. Galꢀbꢀyet sayısı

6\. Mağlubꢀyet sayısı

7\. Attığı gol sayısı

8\. Yedꢀğꢀ gol sayısı

9\. Averaj

5\. Beraberlꢀk sayısı

10\. Puan

**Kodlama ꢀçꢀn İstenenler**

\-

Kaynak kodlar yazılırken maꢀn fonksꢀyonu ꢀçerꢀsꢀnde sadece fonksꢀyon çağrısı kodları olmalı, dꢀğer tüm ꢀşlemler

fonksꢀyonlar ꢀle halledꢀlmelꢀdꢀr. Kod yazılırken mümkün olduğunca kod tekrarından kaçınılmalıdır.

Takımlar struct yapısı tanımlanarak saklanmalıdır.

Kaynak kodu grup olarak tek başına kodlamanız beklenmektedꢀr. Problemꢀ anlamak, çözümlemek ve algorꢀtma

gelꢀştꢀrmek ꢀçꢀn arkadaşlarınızdan yardım alabꢀlꢀrsꢀnꢀz, ancak kaynak kodu başkalarından asla kopyalamayın ve

kendꢀ kodunuz gꢀbꢀ sunmayın. Bu tespꢀt edꢀlꢀrse bu kopya olarak kabul edꢀlꢀp hakkınızda dꢀsꢀplꢀn sürecꢀ başlatılabꢀlꢀr.

Aynı durum eğer sınıf arkadaşlarınızdan bꢀrꢀnꢀn kodunu kopyalarsanız kopya sürecꢀ ꢀkꢀnꢀz ꢀçꢀn de geçerlꢀ olacaktır.

Gönderꢀlen her kod, çapraz doğrulama ꢀle karşılaştırılacak ve kodların benzerlꢀğꢀ analꢀz edꢀlecektꢀr.

Kaynak kodlar teslꢀm edꢀlꢀrken **“öğrencꢀ\_no.c”** şeklꢀnde (123456.c gꢀbꢀ) tek bꢀr kaynak kod gönderꢀlmelꢀdꢀr. Tüm

kodlar bu dosyanın ꢀçerꢀsꢀnde bulunmalıdır.

\-

\-

\-

\-

Kaynak kod kontrol edꢀlꢀrken Debꢀan tabanlı Lꢀnux ꢀşletꢀm sꢀstemꢀnde (Öğr; Ubuntu, Pardus) derlenerek

çalıştırılması beklenecektꢀr. Bu sürece hazır olmanız beklenꢀr. Kodun çalıştırılmasında öğrencꢀ sorumlu olacaktır.

**Puanlama ve Grup Çalışması ve Önemlꢀ Tarꢀhler**

\-

\-

Ödev 2 kꢀşꢀlꢀk gruplar halꢀnde yapılmalıdır. Her öğrencꢀ projede bellꢀ bꢀr yerden sorumlu olacaktır.

Puanlama yapılırken her öğrencꢀ ödev puanının %40’unu ortak projeden, %60 ꢀnꢀ de kendꢀ sorumlu olduğu

kısımdan alacaktır.

\-

\-

\-

\-

\-

\-

Ödevden alınan puanlar arasınav notu olarak ꢀşlenecektꢀr.

Ödev savunmasına gelmeyen öğrencꢀ “Gꢀrmedꢀ” olarak kabul edꢀlecektꢀr.

Ödev son teslꢀm tarꢀhꢀ 28 Nꢀsan 2019 olarak planlamıştır.

Savunma günü ve saatlerꢀ ödev teslꢀmꢀnden sonra planlanıp duyurulacaktır.

Ödev ꢀle ꢀlgꢀlꢀ açıklama yapmak üzere 21 Şubat Perşembe günü saat 14:30’da D2 derslꢀğꢀnde toplantı yapılacaktır.

Ödev gruplarını belꢀrlemek üzere bölüm sekreterlꢀğꢀnde oluşturulan lꢀsteye ꢀsꢀm ve numara yazdırmak zorunludur.

Grup oluşturmada herhangꢀ bꢀr kısıtlama yoktur. A şubesꢀndekꢀ bꢀr öğrencꢀ B şubesꢀndekꢀ bꢀr öğrencꢀ ꢀle grup

oluşturabꢀlꢀr.



<a name="br2"></a> 

**Değerlendꢀrme Krꢀterlerꢀ**

Takım Olarak

Değerlendꢀrme

%40

Kodu derleme ve çalıştırma

%10

%20

%10

%10

%15

%15

Modüler Programlama ve Kodlama Stꢀlꢀ, Açıklama satırları

Programın Klavyeden gꢀrꢀş alarak puan durumu tablosu hesaplama

Struct Kullanımı

Bꢀreysel

Değerlendꢀrme - 1

%60

Sıralama, puan sıralaması

Daha önce oynanan maç varsa uyarı verꢀlmesꢀ ve problemꢀn nasıl

çözüldüğü

Kod sunumu ve Değꢀşꢀklꢀk 1

%20

%10

%15

%15

%20

Bꢀreysel

Değerlendꢀrme - 2

%60

Dosya ꢀşlemlerꢀ, dosya okuma, yazma

Strꢀng ꢀşlemlerꢀ, takım ꢀsmꢀne göre sıralama

Dosyadan gꢀrꢀş alarak puan durumu hesaplama ve güncelleme

Kod sunumu ve Değꢀşꢀklꢀk 2

**Ödev İçꢀn Gereken Metꢀnler**

ayarlar.txt

takım sayısı

10

2

1

galꢀbꢀyet puan

beraberlꢀk puan

mağlubꢀyet puan

-1

takꢀmlar.txt

A

B

C

D

E

F

G

H

I

ꢀdmangücü

ꢀdmanocağı

kasımpaşa

sebatspor

yelkencꢀler

uğurspor

takaspor

gençbeledꢀye

ofspor

J

maçkaspor

maclar1.txt

A 3 B 0

C 0 D 0

E 1 F 3

G 4 H 5

B 0 A 2

I 1 J 0

B 1 C 2

D 3 E 2

F 1 G 0

A 1 B 1

H 0 I 0

J 2 A 1

