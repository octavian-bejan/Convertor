#include<iostream>
#include<cstdlib>
using namespace std;
char square=253;
char cube=252;
char grade=248;
void afis()
{
	cout << "=============================================================" << endl;
	cout << " #         ##  ###   #    ###    ###   # # ##    ###   # # #" << endl;
	cout << " ##       ##  #   #  #   #   #  #   #  ## #  #  #   #  # # #" << endl;
	cout << "  ##  #  ##   #   #  #   #      #   #  #  #  #  #   #  # # #" << endl;
	cout << "   ## # ##    ####   #   #      #   #  #  #  #  ####   # # #" << endl;
	cout << "    ## ##     #      #   #   #  #   #  #  #  #  #           " << endl;
	cout << "     # #       ###    #   ###    ###   #  #  #   ###   # # #" << endl;
	cout << "==============================================================" << endl;
	cout << endl; cout << endl; cout << endl;
}
void afisare_optiuni()
{
	cout << "1. Lungime." << endl;
	cout << "2. Arie." << endl;
	cout << "3. Volum." << endl;
	cout << "4. Timp." << endl;
	cout << "5. Viteza." << endl;
	cout << "6. Temperatura." << endl;
	cout << "7. Masa." << endl;
	cout << "8. Energie." << endl;
	cout << "9. Presiune." << endl;
	cout << "10. Densitate." << endl;
	cout << "11. Consum combustibil." << endl;
	cout << "12. Exit" << endl;
}
void afisare_optiuniLungime()
{
	cout << "1. mm" << endl;
	cout << "2. cm" << endl;
	cout << "3. m" << endl;
	cout << "4. km" << endl;
	cout << "5. Inchs." << endl;
	cout << "6. ft" << endl;
	cout << "7. yz" << endl;
	cout << "8. mi" << endl;
	cout << "9. nmi" << endl<<endl;
	cout<<"mm->Milimetri   cm->Centimetri   m->Metri   km->Kilometri"<<endl;
	cout<<"ft->Picioare(Feets)   yz->Yarzi    mi->Mila   nmi->Mila nautica"<<endl;
}
void afisare_optiuniArie()
{
    cout<<"1. a"<<endl;
    cout<<"2. ac"<<endl;
    cout<<"3. ha"<<endl;
    cout<<"4. mm"<<square<<endl;
    cout<<"5. cm"<<square<<endl;
    cout<<"6. m"<<square<<endl;
    cout<<"7. km"<<square<<endl;
    cout<<"8. ft"<<square<<endl;
    cout<<"9. Inches"<<square<<endl;
    cout<<"10. yz"<<square<<endl<<endl;
    cout<<"a->Ari   ac->Acri   ha->Hectari   mm->Milimetri   cm->Centimetri"<<endl;
    cout<<"m->Metri  km->Kilometri   ft->Picioare(Feets)   yz->Yarzi"<<endl;
}
void afisare_optiuniVolum()
{
    cout<<"1. ml"<<endl;
    cout<<"2. cl"<<endl;
    cout<<"3. dl"<<endl;
    cout<<"4. l"<<endl;
    cout<<"5. Gal(UK)."<<endl;
    cout<<"6. Gal(US)."<<endl;
    cout<<"7. cm"<<cube<<endl;
    cout<<"8. dm"<<cube<<endl;
    cout<<"9. m"<<cube<<endl;
    cout<<"10. ft"<<cube<<endl;
    cout<<"11. Inches"<<cube<<endl;
    cout<<"12. yz"<<cube<<endl<<endl;
    cout<<"ml->Mililitri    cl->Centilitri   dl->decilitri   l->Litri"<<endl;
    cout<<"cm->Centimetri   dm->Decimetri    m->Metri    ft->Picioare(Feets)    yz->Yarzi"<<endl;
}
void afisare_optiuniTimp()
{
    cout<<"1. w"<<endl;
    cout<<"2. d"<<endl;
    cout<<"3. h"<<endl;
    cout<<"4. min"<<endl;
    cout<<"5. s"<<endl;
    cout<<"6. ms"<<endl<<endl;
    cout<<"w->Saptamana   d->Zi   h->Ora    min->Minut"<<endl;
    cout<<"s->Secunda    ms->Milisecunda"<<endl;
}
void afisare_optiuniViteza()
{
    cout<<"1. cm/min"<<endl;
    cout<<"2. cm/s"<<endl;
    cout<<"3. fph"<<endl;
    cout<<"4. fps"<<endl;
    cout<<"5. ips"<<endl;
    cout<<"6. km/h"<<endl;
    cout<<"7. km/min"<<endl;
    cout<<"8. km/s"<<endl;
    cout<<"9. m/h"<<endl;
    cout<<"10. m/min"<<endl;
    cout<<"11. mps"<<endl;
    cout<<"12. mph"<<endl;
    cout<<"13. mi/min"<<endl;
    cout<<"14. mi/s"<<endl;
    cout<<"15. nmi/h"<<endl<<endl;
    cout<<"cm->Centimetru    fph->Picioare/Ora   fps->Picioare/Secunda    ips->Inch/Secunda"<<endl;
    cout<<"km->Kilometru    m->Metru    mps->Metru/Secunda   mph->Mila/Ora     mi->Mila"<<endl;
    cout<<"nmi->Mila nautica    min->Minut   s->Secunda     h->Ora   "<<endl;
}
void afisare_optiuniTemperatura()
{
    cout<<"1. "<<grade<<"C"<<endl;
    cout<<"2. "<<grade<<"F"<<endl;
    cout<<"3. "<<grade<<"K"<<endl;
    cout<<endl;
    cout<<grade<<"C,grade Celsius    "<<grade<<"F,grade Fahrenheit    "<<grade<<"K,grade Kelvin     "<<endl;
}
void afisare_optiuniMasa()
{
    cout<<"1. mg"<<endl;
    cout<<"2. g"<<endl;
    cout<<"3. kg"<<endl;
    cout<<"4. Tone."<<endl;
    cout<<"5. lb"<<endl;
    cout<<"6. oz(AV)"<<endl;
    cout<<"7. oz(Troy)"<<endl<<endl;
    cout<<"mg->Miligrame    g->Grame    kg->kilograme    t->Tone "<<endl;
    cout<<"lb->Funte(pound)     oz(AV)->Uncii(Avoirdupois)     oz(Troy)->Uncii(Troy)"<<endl;
}
void afisare_optiuniEnergie()
{
    cout<<"1. cal"<<endl;
    cout<<"2. kcal"<<endl;
    cout<<"3. J"<<endl;
    cout<<"4. KJ"<<endl;
    cout<<"5. W"<<endl;
    cout<<"6. W.s"<<endl;
    cout<<"7. W.h"<<endl;
    cout<<"8. Kw.h"<<endl;
    cout<<endl;
    cout<<"cal->Calorie    kcal->Kilocalorie    J->Jouli     KJ->KiloJouli"<<endl;
    cout<<"W->Watt   W.s->Watt secunda   W.h->Watt ora    Kw.h->Kilowatt ora"<<endl;
}
void afisare_optiuniPresiune()
{
    cout<<"1. at"<<endl;
    cout<<"2. atm"<<endl;
    cout<<"3. mbar"<<endl;
    cout<<"4. bar"<<endl;
    cout<<"5. Pa"<<endl;
    cout<<"6. KPa"<<endl;
    cout<<"7. MPa"<<endl;
    cout<<"8. N"<<endl;
    cout<<"9. Torr"<<endl;
    cout<<"10. Psi"<<endl;
    cout<<endl;
    cout<<"at->Atmosfera tehnica    atm->Atmosfera standard     bar->Bar    mbar->Milibar"<<endl;
    cout<<"KPa->Kilopascal   Pa->Pascal   MPa->Megapascal     N->Newton    Torr->Torr"<<endl;
    cout<<"Psi->Pounds/Inch"<<square<<endl;
}
void afisare_optiuniDensitate()
{
    cout<<"1. g/cm"<<cube<<endl;
    cout<<"2. g/l"<<endl;
    cout<<"3. g/m"<<cube<<endl;
    cout<<"4. Kg/cm"<<cube<<endl;
    cout<<"5. Kg/l"<<endl;
    cout<<"6. Kg/m"<<cube<<endl;
    cout<<"7. t/m"<<cube<<endl;
    cout<<"8. lb/ft"<<cube<<endl;
    cout<<"9. lb/in"<<cube<<endl;
    cout<<"10. lb/gal(US)"<<endl;
    cout<<"11. lb/gal(UK)"<<endl<<endl;
    cout<<"g->gram   Kg->Kilogram   t->tona   lb->Fonta(pound)"<<endl;
    cout<<"cm->Centimetru   l->Litru   m->Metru   ft->Picioare(Feets)  "<<endl;
    cout<<" in->Inches   gal->Galon"<<endl;
}
void afisare_optiuniConsum()
{
    cout<<"1. l/100km"<<endl;
    cout<<"2. mi/gal(US)"<<endl;
    cout<<"3. mi/gal(UK)"<<endl;
    cout<<"4. km/l"<<endl;
    cout<<endl;
    cout<<"l->Litru     km->Kilometru     mi->Mila      gal->Galon"<<endl;
}
/*
void convertesteLungime(int from,int to,double quantity)
{
    cout<<"DAdadasdasd"<<endl;
}
*/
void convertesteArie(int from,int to,double quantity)
{
    switch(from){
        case 1:
            switch(to){
                case 1:cout<<quantity<<" a===>"<<quantity<<" a"<<endl;break;
                case 2:cout<<quantity<<" a===>"<<quantity*0.02471<<" ac"<<endl;break;
                case 3:cout<<quantity<<" a===>"<<quantity/100<<" ha"<<endl;break;
                case 4:cout<<quantity<<" a===>"<<quantity*100000000<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" a===>"<<quantity*1000000<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" a===>"<<quantity*100<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" a===>"<<quantity/10000<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" a===>"<<quantity*1076.4262<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" a===>"<<quantity*154990.7<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" a===>"<<quantity*119.5989<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        case 2:
            switch(to){
                case 1:cout<<quantity<<" ac===>"<<quantity*40.46856119<<" a"<<endl;break;
                case 2:cout<<quantity<<" ac===>"<<quantity<<" ac"<<endl;break;
                case 3:cout<<quantity<<" ac===>"<<quantity*0.404685<<" ha"<<endl;break;
                case 4:cout<<quantity<<" ac===>"<<quantity*4046856119<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" ac===>"<<quantity*40468561.19<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" ac===>"<<quantity*4046.856119<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" ac===>"<<quantity*0.00404685<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" ac===>"<<quantity*43561.4221<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" ac===>"<<quantity*6272250.64941<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" ac===>"<<quantity*4839.996<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        case 3:
            switch(to){
                case 1:cout<<quantity<<" ha===>"<<quantity*100<<" a"<<endl;break;
                case 2:cout<<quantity<<" ha===>"<<quantity*2.4710<<" ac"<<endl;break;
                case 3:cout<<quantity<<" ha===>"<<quantity<<" ha"<<endl;break;
                case 4:cout<<quantity<<" ha===>"<<quantity*10000000000<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" ha===>"<<quantity*100000000<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" ha===>"<<quantity*10000<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" ha===>"<<quantity/100<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" ha===>"<<quantity*107642.6264<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" ha===>"<<quantity*15499070.0557<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" ha===>"<<quantity*11959.8939<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        case 4:
            switch(to){
                case 1:cout<<quantity<<" mm"<<square<<"===>"<<quantity*(1e-8)<<" a"<<endl;break;
                case 2:cout<<quantity<<" mm"<<square<<"===>"<<quantity*2.4710<<" ac"<<endl;break;
                case 3:cout<<quantity<<" mm"<<square<<"===>"<<quantity*(1e-10)<<" ha"<<endl;break;
                case 4:cout<<quantity<<" mm"<<square<<"===>"<<quantity<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" mm"<<square<<"===>"<<quantity/100<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" mm"<<square<<"===>"<<quantity/1000000<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" mm"<<square<<"===>"<<quantity*(1e-12)<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" mm"<<square<<"===>"<<quantity*0.00001076<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" mm"<<square<<"===>"<<quantity*0.00154990<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" mm"<<square<<"===>"<<quantity*0.000001195<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        case 5:
            switch(to){
                case 1:cout<<quantity<<" cm"<<square<<"===>"<<quantity/1000000<<" a"<<endl;break;
                case 2:cout<<quantity<<" cm"<<square<<"===>"<<quantity*2.4710<<" ac"<<endl;break;
                case 3:cout<<quantity<<" cm"<<square<<"===>"<<quantity*(1e-8)<<" ha"<<endl;break;
                case 4:cout<<quantity<<" cm"<<square<<"===>"<<quantity*100<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" cm"<<square<<"===>"<<quantity<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" cm"<<square<<"===>"<<quantity/10000<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" cm"<<square<<"===>"<<quantity*(1e-10)<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" cm"<<square<<"===>"<<quantity*0.001076<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" cm"<<square<<"===>"<<quantity*0.1549<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" cm"<<square<<"===>"<<quantity*0.00011959<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        case 6:
            switch(to){
                case 1:cout<<quantity<<" m"<<square<<"===>"<<quantity/100<<" a"<<endl;break;
                case 2:cout<<quantity<<" m"<<square<<"===>"<<quantity*0.00024710<<" ac"<<endl;break;
                case 3:cout<<quantity<<" m"<<square<<"===>"<<quantity/10000<<" ha"<<endl;break;
                case 4:cout<<quantity<<" m"<<square<<"===>"<<quantity*1000000<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" m"<<square<<"===>"<<quantity*10000<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" m"<<square<<"===>"<<quantity<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" m"<<square<<"===>"<<quantity/1000000<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" m"<<square<<"===>"<<quantity*10.7642<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" m"<<square<<"===>"<<quantity*1549.9070<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" m"<<square<<"===>"<<quantity*1.19598<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        case 7:
            switch(to){
                case 1:cout<<quantity<<" km"<<square<<"===>"<<quantity*10000<<" a"<<endl;break;
                case 2:cout<<quantity<<" km"<<square<<"===>"<<quantity*247.1053<<" ac"<<endl;break;
                case 3:cout<<quantity<<" km"<<square<<"===>"<<quantity*100<<" ha"<<endl;break;
                case 4:cout<<quantity<<" km"<<square<<"===>"<<quantity*1000000000000<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" km"<<square<<"===>"<<quantity*10000000000<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" km"<<square<<"===>"<<quantity*1000000<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" km"<<square<<"===>"<<quantity<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" km"<<square<<"===>"<<quantity*10764262.6480<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" km"<<square<<"===>"<<quantity*1549907005.579<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" km"<<square<<"===>"<<quantity*1195989.39404<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        case 8:
            switch(to){
                case 1:cout<<quantity<<" ft"<<square<<"===>"<<quantity*0.000929<<" a"<<endl;break;
                case 2:cout<<quantity<<" ft"<<square<<"===>"<<quantity*0.000022956<<" ac"<<endl;break;
                case 3:cout<<quantity<<" ft"<<square<<"===>"<<quantity*0.00000929<<" ha"<<endl;break;
                case 4:cout<<quantity<<" ft"<<square<<"===>"<<quantity*92900<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" ft"<<square<<"===>"<<quantity*929<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" ft"<<square<<"===>"<<quantity*0.0929<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" ft"<<square<<"===>"<<quantity*(9.29e-8)<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" ft"<<square<<"===>"<<quantity<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" ft"<<square<<"===>"<<quantity*143.98636<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" ft"<<square<<"===>"<<quantity*0.1111074<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        case 9:
            switch(to){
                case 1:cout<<quantity<<" Inches"<<square<<"===>"<<quantity*0.000006451<<" a"<<endl;break;
                case 2:cout<<quantity<<" Inches"<<square<<"===>"<<quantity*1.5943<<" ac"<<endl;break;
                case 3:cout<<quantity<<" Inches"<<square<<"===>"<<quantity*(6.452e-8)<<" ha"<<endl;break;
                case 4:cout<<quantity<<" Inches"<<square<<"===>"<<quantity*645.2<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" Inches"<<square<<"===>"<<quantity*6.452<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" Inches"<<square<<"===>"<<quantity*0.0006452<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" Inches"<<square<<"===>"<<quantity*(6.542e-10)<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" Inches"<<square<<"===>"<<quantity*0.006945<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" Inches"<<square<<"===>"<<quantity<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" Inches"<<square<<"===>"<<quantity*0.000771652<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        case 10:
            switch(to){
                case 1:cout<<quantity<<" yz"<<square<<"===>"<<quantity*0.00836<<" a"<<endl;break;
                case 2:cout<<quantity<<" yz"<<square<<"===>"<<quantity*0.00020661<<" ac"<<endl;break;
                case 3:cout<<quantity<<" yz"<<square<<"===>"<<quantity*0.0000836<<" ha"<<endl;break;
                case 4:cout<<quantity<<" yz"<<square<<"===>"<<quantity*836127.816<<" mm"<<square<<endl;break;
                case 5:cout<<quantity<<" yz"<<square<<"===>"<<quantity*8361.27816<<" cm"<<square<<endl;break;
                case 6:cout<<quantity<<" yz"<<square<<"===>"<<quantity*0.836127816<<" m"<<square<<endl;break;
                case 7:cout<<quantity<<" yz"<<square<<"===>"<<quantity*(8.361278e-7)<<" km"<<square<<endl;break;
                case 8:cout<<quantity<<" yz"<<square<<"===>"<<quantity*9.0002994187<<" ft"<<square<<endl;break;
                case 9:cout<<quantity<<" yz"<<square<<"===>"<<quantity*1295.9203<<" Inches"<<square<<endl;break;
                case 10:cout<<quantity<<" yz"<<square<<"===>"<<quantity<<" yz"<<square<<endl;break;
                default:break;
            }
            break;
        default:break;
    }
}
/*
void convertesteVolum(int from, int to,double quantity)
{}
void convertesteTimp(int from, int to,double quantity)
{}
*/
void convertesteViteza(int from, int to,double quantity)
{
    switch(from){
        case 1:
                switch(to){
                    case 1:cout<<quantity<<" cm/min ===> "<<quantity<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" cm/min ===> "<<quantity/60<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" cm/min ===> "<<quantity*1.968496<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" cm/min ===> "<<quantity*0.000546<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" cm/min ===> "<<quantity*0.00656<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" cm/min ===> "<<quantity*0.0006<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" cm/min ===> "<<quantity*0.00001<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" cm/min ===> "<<quantity*(1.666667e-7)<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" cm/min ===> "<<quantity*0.5999<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" cm/min ===> "<<quantity*0.01<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" cm/min ===> "<<quantity*0.00016<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" cm/min ===> "<<quantity*0.000373<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" cm/min ===> "<<quantity*(6.0e-6)<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" cm/min ===> "<<quantity*(1.035618e-7)<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" cm/min ===> "<<quantity*0.000324<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 2:
            switch(to){
                    case 1:cout<<quantity<<" cm/s ===> "<<quantity*60<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" cm/s ===> "<<quantity<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" cm/s ===> "<<quantity*118.109<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" cm/s ===> "<<quantity*0.03280<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" cm/s ===> "<<quantity*0.3937<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" cm/s ===> "<<quantity*0.036<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" cm/s ===> "<<quantity*0.0006<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" cm/s ===> "<<quantity*0.00001<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" cm/s ===> "<<quantity*36<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" cm/s ===> "<<quantity*0.6<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" cm/s ===> "<<quantity*0.01<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" cm/s ===> "<<quantity*0.02236<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" cm/s ===> "<<quantity*0.0003728<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" cm/s ===> "<<quantity*0.00000621<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" cm/s ===> "<<quantity*0.01944<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 3:
        switch(to){
                    case 1:cout<<quantity<<" fph ===> "<<quantity*0.5080<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" fph ===> "<<quantity*0.08466<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" fph ===> "<<quantity<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" fph ===> "<<quantity*0.000277<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" fph ===> "<<quantity*0.0033<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" fph ===> "<<quantity*0.000304<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" fph ===> "<<quantity*0.00000508<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" fph ===> "<<quantity*(8.4667e-8)<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" fph ===> "<<quantity*0.30480<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" fph ===> "<<quantity*0.00508<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" fph ===> "<<quantity*0.000084667<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" fph ===> "<<quantity*0.0001893<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" fph ===> "<<quantity*0.000003156<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" fph ===> "<<quantity*5.2609<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" fph ===> "<<quantity*0.0001645<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 4:
            switch(to){
                    case 1:cout<<quantity<<" fps ===> "<<quantity*1828.7996<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" fps ===> "<<quantity*30.48<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" fps ===> "<<quantity*3599.9858<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" fps ===> "<<quantity<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" fps ===> "<<quantity*12<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" fps ===> "<<quantity*1.0972<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" fps ===> "<<quantity*0.01828<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" fps ===> "<<quantity*0.0003048<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" fps ===> "<<quantity*1097.279<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" fps ===> "<<quantity*18.2879<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" fps ===> "<<quantity*0.3048<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" fps ===> "<<quantity*0.6818<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" fps ===> "<<quantity*0.01136<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" fps ===> "<<quantity*0.00018939<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" fps ===> "<<quantity*0.5925<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 5:
            switch(to){
                    case 1:cout<<quantity<<" ips ===> "<<quantity*152.4<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" ips ===> "<<quantity*2.54<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" ips ===> "<<quantity*300<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" ips ===> "<<quantity*0.0833<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" ips ===> "<<quantity<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" ips ===> "<<quantity*0.0914<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" ips ===> "<<quantity*0.001524<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" ips ===> "<<quantity*0.0000254<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" ips ===> "<<quantity*91.44<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" ips ===> "<<quantity*1.524<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" ips ===> "<<quantity*0.0254<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" ips ===> "<<quantity*0.0568<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" ips ===> "<<quantity*0.0009469<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" ips ===> "<<quantity*0.00001578<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" ips ===> "<<quantity*0.04937<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 6:
            switch(to){
                    case 1:cout<<quantity<<" km/h ===> "<<quantity*1666.67<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" km/h ===> "<<quantity*27.778<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" km/h ===> "<<quantity*3280.8398<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" km/h ===> "<<quantity*0.9113<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" km/h ===> "<<quantity*10.9361<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" km/h ===> "<<quantity<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" km/h ===> "<<quantity*0.01667<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" km/h ===> "<<quantity*0.0002778<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" km/h ===> "<<quantity*1000<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" km/h ===> "<<quantity*1000/60<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" km/h ===> "<<quantity*1000/3600<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" km/h ===> "<<quantity*0.6213<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" km/h ===> "<<quantity*0.6213/60<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" km/h ===> "<<quantity*0.6213/3600<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" km/h ===> "<<quantity*0.54<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 7:
            switch(to){
                    case 1:cout<<quantity<<" km/min ===> "<<quantity*100000<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" km/min ===> "<<quantity*100000/60<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" km/min ===> "<<quantity*196849.62<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" km/min ===> "<<quantity*196849.62/3600<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" km/min ===> "<<quantity*656.168<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" km/min ===> "<<quantity*60<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" km/min ===> "<<quantity<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" km/min ===> "<<quantity/60<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" km/min ===> "<<quantity*1000*60<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" km/min ===> "<<quantity*1000<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" km/min ===> "<<quantity*1000/60<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" km/min ===> "<<quantity*37.282<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" km/min ===> "<<quantity*0.6123<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" km/min ===> "<<quantity*0.6123/60<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" km/min ===> "<<quantity*32.4<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 8:
            switch(to){
                    case 1:cout<<quantity<<" km/s ===> "<<quantity*100000*60<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" km/s ===> "<<quantity*100000<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" km/s ===> "<<quantity*11810977.1221<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" km/s ===> "<<quantity*3280.8399<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" km/s ===> "<<quantity*39370.0787<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" km/s ===> "<<quantity*3600<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" km/s ===> "<<quantity*60<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" km/s ===> "<<quantity<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" km/s ===> "<<quantity*1000*3600<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" km/s ===> "<<quantity*1000*60<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" km/s ===> "<<quantity*1000<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" km/s ===> "<<quantity*2236.9362<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" km/s ===> "<<quantity*37.2822<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" km/s ===> "<<quantity*0.6123<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" km/s ===> "<<quantity*1944.0124<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 9:
            switch(to){
                    case 1:cout<<quantity<<" m/h ===> "<<quantity*100/60<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" m/h ===> "<<quantity*100/3600<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" m/h ===> "<<quantity*3.280829<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" m/h ===> "<<quantity*3.280829/3600<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" m/h ===> "<<quantity*0.010936<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" m/h ===> "<<quantity/1000<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" m/h ===> "<<quantity/1000/60<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" m/h ===> "<<quantity/1000/3600<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" m/h ===> "<<quantity<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" m/h ===> "<<quantity/60<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" m/h ===> "<<quantity/3600<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" m/h ===> "<<quantity*0.0006123<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" m/h ===> "<<quantity*0.0006123/60<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" m/h ===> "<<quantity*0.0001726<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" m/h ===> "<<quantity*0.00054<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 10:
            switch(to){
                    case 1:cout<<quantity<<" m/min ===> "<<quantity*100<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" m/min ===> "<<quantity*100/60<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" m/min ===> "<<quantity*196.8496<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" m/min ===> "<<quantity*0.05468<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" m/min ===> "<<quantity*0.6561<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" m/min ===> "<<quantity/1000*60<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" m/min ===> "<<quantity/1000<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" m/min ===> "<<quantity/1000/60<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" m/min ===> "<<quantity*60<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" m/min ===> "<<quantity<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" m/min ===> "<<quantity/60<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" m/min ===> "<<quantity*0.3728<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" m/min ===> "<<quantity*0.0006213<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" m/min ===> "<<quantity*0.0006213/60<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" m/min ===> "<<quantity*0.3240<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 11:
            switch(to){
                    case 1:cout<<quantity<<" mps ===> "<<quantity*100*60<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" mps ===> "<<quantity*100<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" mps ===> "<<quantity*11810.977<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" mps ===> "<<quantity*3.28084<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" mps ===> "<<quantity*39.37<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" mps ===> "<<quantity/1000*3600<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" mps ===> "<<quantity/1000*60<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" mps ===> "<<quantity/1000<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" mps ===> "<<quantity*3600<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" mps ===> "<<quantity*60<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" mps ===> "<<quantity<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" mps ===> "<<quantity*2.23693<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" mps ===> "<<quantity*0.03728<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" mps ===> "<<quantity*0.0006213<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" mps ===> "<<quantity*1.944012<<" nmi/h"<<endl;break;
                }
            break;
        case 12:
            switch(to){
                    case 1:cout<<quantity<<" mph ===> "<<quantity*2682.2394<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" mph ===> "<<quantity*44.704<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" mph ===> "<<quantity*5279.9792<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" mph ===> "<<quantity*5279.9792/3600<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" mph ===> "<<quantity*17.6<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" mph ===> "<<quantity*1.61<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" mph ===> "<<quantity*1.61/60<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" mph ===> "<<quantity*1.61/3600<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" mph ===> "<<quantity*1609.3427<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" mph ===> "<<quantity*1609.3427/60<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" mph ===> "<<quantity*1609.3427/3600<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" mph ===> "<<quantity<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" mph ===> "<<quantity/60<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" mph ===> "<<quantity/3600<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" mph ===> "<<quantity*0.8690<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 13:
            switch(to){
                    case 1:cout<<quantity<<" mi/min ===> "<<quantity*160934.3678<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" mi/min ===> "<<quantity*160934.3678/60<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" mi/min ===> "<<quantity*316798.7527<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" mi/min ===> "<<quantity*87.99<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" mi/min ===> "<<quantity*1056<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" mi/min ===> "<<quantity*96.560<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" mi/min ===> "<<quantity*96.560/60<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" mi/min ===> "<<quantity*96.560/3600<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" mi/min ===> "<<quantity*96560.5627<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" mi/min ===> "<<quantity*96560.5627/60<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" mi/min ===> "<<quantity*96560.5627/3600<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" mi/min ===> "<<quantity*60<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" mi/min ===> "<<quantity<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" mi/min ===> "<<quantity/60<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" mi/min ===> "<<quantity*52.1430<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 14:
            switch(to){
                    case 1:cout<<quantity<<" mi/s ===> "<<quantity*160934.4*60<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" mi/s ===> "<<quantity*160934.4<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" mi/s ===> "<<quantity*19007925.165<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" mi/s ===> "<<quantity*5280<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" mi/s ===> "<<quantity*63360<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" mi/s ===> "<<quantity*5793.6383<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" mi/s ===> "<<quantity*5793.6383/60<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" mi/s ===> "<<quantity*5793.6383/3600<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" mi/s ===> "<<quantity*5793.6383*1000<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" mi/s ===> "<<quantity*5793.6383*1000/60<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" mi/s ===> "<<quantity*5793.6383*1000/3600<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" mi/s ===> "<<quantity*3600<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" mi/s ===> "<<quantity*60<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" mi/s ===> "<<quantity<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" mi/s ===> "<<quantity*3128.584<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        case 15:
            switch(to){
                    case 1:cout<<quantity<<" nmi/h ===> "<<quantity*3086.3993<<" cm/min"<<endl;break;
                    case 2:cout<<quantity<<" nmi/h ===> "<<quantity*51.44<<" cm/s"<<endl;break;
                    case 3:cout<<quantity<<" nmi/h ===> "<<quantity*6075.566<<" fph"<<endl;break;
                    case 4:cout<<quantity<<" nmi/h ===> "<<quantity*6075.566/3600<<" fps"<<endl;break;
                    case 5:cout<<quantity<<" nmi/h ===> "<<quantity*20.2519<<" ips"<<endl;break;
                    case 6:cout<<quantity<<" nmi/h ===> "<<quantity*1.8518<<" km/h"<<endl;break;
                    case 7:cout<<quantity<<" nmi/h ===> "<<quantity*1.8518/60<<" km/min"<<endl;break;
                    case 8:cout<<quantity<<" nmi/h ===> "<<quantity*1.8518/3600<<" km/s"<<endl;break;
                    case 9:cout<<quantity<<" nmi/h ===> "<<quantity*1851.8385<<" m/h"<<endl;break;
                    case 10:cout<<quantity<<" nmi/h ===> "<<quantity*1851.8385/60<<" m/min"<<endl;break;
                    case 11:cout<<quantity<<" nmi/h ===> "<<quantity*1851.8385/3600<<" mps"<<endl;break;
                    case 12:cout<<quantity<<" nmi/h ===> "<<quantity*1.1506<<" mph"<<endl;break;
                    case 13:cout<<quantity<<" nmi/h ===> "<<quantity*1.1506/60<<" mi/min"<<endl;break;
                    case 14:cout<<quantity<<" nmi/h ===> "<<quantity*1.1506/3600<<" mi/s"<<endl;break;
                    case 15:cout<<quantity<<" nmi/h ===> "<<quantity<<" nmi/h"<<endl;break;
                    default:break;
                }
            break;
        default:break;
    }
}

void convertesteTemperatura(int from, int to,double quantity)
{
    switch(from){
        case 1:
        {
            switch(to){
                case 1: cout<<quantity<<" "<<grade<<"C===>"<<quantity<<" "<<grade<<"C"<<endl;break;
                case 2: cout<<quantity<<" "<<grade<<"C===>"<<32+quantity*1.8<<" "<<grade<<"F"<<endl;break;
                case 3: cout<<quantity<<" "<<grade<<"C===>"<<273.15+quantity<<" "<<grade<<"K"<<endl;break;
                default:break;}
                break;
        }
        case 2:
        {
           switch(to){
               case 1: cout<<quantity<<" "<<grade<<"F===>"<<(quantity-32)/1.8<<" "<<grade<<"C"<<endl;break;
               case 2: cout<<quantity<<" "<<grade<<"F===>"<<quantity<<" "<<grade<<"F"<<endl;break;
               case 3: cout<<quantity<<" "<<grade<<"F===>"<<(quantity-32)/1.8+273.15<<" "<<grade<<"K"<<endl;break;
               default:break;
           }
           break;
        }
        case 3:
        {
            switch(to){
                case 1: cout<<quantity<<" "<<grade<<"K===>"<<quantity-273.15<<" "<<grade<<"C"<<endl;break;
                case 2: cout<<quantity<<" "<<grade<<"K===>"<<32+(quantity-273.15)*1.8<<" "<<grade<<"F"<<endl;break;
                case 3: cout<<quantity<<" "<<grade<<"K===>"<<quantity<<" "<<grade<<"K"<<endl;break;
                default:break;
            }
            break;
        }
        default:
            break;
    }
}
/*
void convertesteMasa(int from, int to,double quantity)
{}
void convertesteEnergie(int from, int to,double quantity)
{}
void convertestePresiune(int from, int to,double quantity)
{}
*/
void convertesteDensitate(int from, int to,double quantity)
{
    switch(from){
        case 1:
            switch(to){
                case 1:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity*1000<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity*1000000<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity/1000<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity*1000<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity*62.43<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity*0.0361<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity*8.3454<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" g/cm"<<cube<<"===>"<<quantity*10.0224<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 2:
            switch(to){
                case 1:cout<<quantity<<" g/l===>"<<quantity/1000<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" g/l===>"<<quantity<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" g/l===>"<<quantity*1000<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" g/l===>"<<quantity/1000000<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" g/l===>"<<quantity/1000<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" g/l===>"<<quantity<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" g/l===>"<<quantity/1000<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" g/l===>"<<quantity*0.06243<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" g/l===>"<<quantity*0.00003612<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" g/l===>"<<quantity*0.008345<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" g/l===>"<<quantity*0.0100224<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 3:
            switch(to){
                case 1:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity/1000000<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity/1000<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity/(1e-9)<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity/1000000<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity/1000<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity/1000000<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity*0.0000624<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity*3.6127<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity*0.00000834<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" g/m"<<cube<<"===>"<<quantity*0.0000100224<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 4:
            switch(to){
                case 1:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*1000<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*1000000<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*1000000000<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*1000<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*1000000<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*1000<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*62430<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*36.127<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*8345.4044<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" kg/cm"<<cube<<"===>"<<quantity*10022.4128<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 5:
            switch(to){
                case 1:cout<<quantity<<" kg/l===>"<<quantity<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" kg/l===>"<<quantity*1000<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" kg/l===>"<<quantity*1000000<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" kg/l===>"<<quantity/1000<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" kg/l===>"<<quantity<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" kg/l===>"<<quantity*1000<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" kg/l===>"<<quantity<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" kg/l===>"<<quantity*62.43<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" kg/l===>"<<quantity*0.03612<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" kg/l===>"<<quantity*8.3454<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" kg/l===>"<<quantity*10.0224<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 6:
            switch(to){
                case 1:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity/1000<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity*1000<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity/1000000<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity/1000<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity/1000<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity*0.06243<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity*0.00003612<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity*0.008345<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" kg/m"<<cube<<"===>"<<quantity*0.0100224<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 7:
            switch(to){
                case 1:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity*1000<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity*1000000<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity/1000<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity*1000<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity*62.43<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity*0.03612<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity*8.3454<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" t/m"<<cube<<"===>"<<quantity*10.0224<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 8:
            switch(to){
                case 1:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*0.01601<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*16.0179<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*16017.94<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*0.00001601<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*0.01601<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*16.0179<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*0.01601<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*0.0005786<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*0.1336<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" lb/ft"<<cube<<"===>"<<quantity*0.1605<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 9:
            switch(to){
                case 1:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*27.679<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*27679.898<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*27679898.58<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*0.02767<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*27.679<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*27679.898<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*27.679<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*1728.056<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*230.99<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" lb/in"<<cube<<"===>"<<quantity*277.4193<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 10:
            switch(to){
                case 1:cout<<quantity<<" lb/gal(US)===>"<<quantity*0.1198<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" lb/gal(US)===>"<<quantity*119.826<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" lb/gal(US)===>"<<quantity*119826.427<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" lb/gal(US)===>"<<quantity*0.0001198<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" lb/gal(US)===>"<<quantity*0.1198<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" lb/gal(US)===>"<<quantity*119.826<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" lb/gal(US)===>"<<quantity*0.1198<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" lb/gal(US)===>"<<quantity*7.480<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" lb/gal(US)===>"<<quantity*0.00432<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" lb/gal(US)===>"<<quantity<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" lb/gal(US)===>"<<quantity*1.20094<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        case 11:
            switch(to){
                case 1:cout<<quantity<<" lb/gal(UK)===>"<<quantity*0.09977<<" g/cm"<<cube<<endl;break;
                case 2:cout<<quantity<<" lb/gal(UK)===>"<<quantity*99.7763<<" g/l"<<endl;break;
                case 3:cout<<quantity<<" lb/gal(UK)===>"<<quantity*99776372<<" g/m"<<cube<<endl;break;
                case 4:cout<<quantity<<" lb/gal(UK)===>"<<quantity*0.0000997<<" kg/cm"<<cube<<endl;break;
                case 5:cout<<quantity<<" lb/gal(UK)===>"<<quantity*0.09977<<" kg/l"<<endl;break;
                case 6:cout<<quantity<<" lb/gal(UK)===>"<<quantity*99.776<<" kg/m"<<cube<<endl;break;
                case 7:cout<<quantity<<" lb/gal(UK)===>"<<quantity*0.09977<<" t/m"<<cube<<endl;break;
                case 8:cout<<quantity<<" lb/gal(UK)===>"<<quantity*6.229<<" lb/ft"<<cube<<endl;break;
                case 9:cout<<quantity<<" lb/gal(UK)===>"<<quantity*0.003604<<" lb/in"<<cube<<endl;break;
                case 10:cout<<quantity<<" lb/gal(UK)===>"<<quantity*0.8326<<" lb/gal(US)"<<endl;break;
                case 11:cout<<quantity<<" lb/gal(UK)===>"<<quantity<<" lb/gal(UK)"<<endl;break;
                default:break;
            }
            break;
        default:break;
    }
}
void convertesteConsum(int from, int to,double quantity)
{
    switch(from){
        case 1:
            switch(to){
                case 1:cout<<quantity<<" l/100km ===>"<<quantity<<" l/100km"<<endl;break;
                case 2:cout<<quantity<<" l/100km ===>"<<235.21/quantity<<" mi/gal(US)"<<endl;break;
                case 3:cout<<quantity<<" l/100km ===>"<<282.48/quantity<<" mi/gal(UK)"<<endl;break;
                case 4:cout<<quantity<<" l/100km ===>"<<100/quantity<<" km/l"<<endl;break;
                default:break;
            }
        break;
        case 2:
            switch(to){
                case 1:cout<<quantity<<" mi/gal(US) ===>"<<235.21/quantity<<" l/100km"<<endl;break;
                case 2:cout<<quantity<<" mi/gal(US) ===>"<<quantity<<" mi/gal(US)"<<endl;break;
                case 3:cout<<quantity<<" mi/gal(US) ===>"<<quantity*1.2009<<" mi/gal(UK)"<<endl;break;
                case 4:cout<<quantity<<" mi/gal(US) ===>"<<100/(235.21/quantity)<<" km/l"<<endl;break;
                default:break;
            }
        break;
        case 3:
        switch(to){
                case 1:cout<<quantity<<" mi/gal(UK) ===>"<<282.48/quantity<<" l/100km"<<endl;break;
                case 2:cout<<quantity<<" mi/gal(UK) ===>"<<quantity*0.8326<<" mi/gal(US)"<<endl;break;
                case 3:cout<<quantity<<" mi/gal(UK) ===>"<<quantity<<" mi/gal(UK)"<<endl;break;
                case 4:cout<<quantity<<" mi/gal(UK) ===>"<<100/(282.48/quantity)<<" km/l"<<endl;break;
                default:break;
            }
        break;
    case 4:
    switch(to){
                case 1:cout<<quantity<<" km/l ===>"<<100/quantity<<" l/100km"<<endl;break;
                case 2:cout<<quantity<<" km/l ===>"<<235.21/(100/quantity)<<" mi/gal(US)"<<endl;break;
                case 3:cout<<quantity<<" km/l ===>"<<282.48/(100/quantity)<<" mi/gal(UK)"<<endl;break;
                case 4:cout<<quantity<<" km/l ===>"<<quantity<<" km/l"<<endl;break;
                default:break;
            }
    break;
        default:break;
    }
}

void choose_and_printLungime()//9
{
    int From,To,Quant;
    afisare_optiuniLungime();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>9)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>9)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;

//convertesteLungime(From,To,Quant);
}
void choose_and_printArie()//10
{
    int From,To,Quant;
    afisare_optiuniArie();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>10)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>10)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
    convertesteArie(From,To,Quant);
}
void choose_and_printVolum()//12
{
    int From,To,Quant;
    afisare_optiuniVolum();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>12)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>12)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
}
void choose_and_printTimp()//6
{
    int From,To,Quant;
    afisare_optiuniTimp();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>6)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>6)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
}
void choose_and_printViteza()//15 ok
{
    int From,To,Quant;
    afisare_optiuniViteza();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>15)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>15)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
            convertesteViteza(From,To,Quant);
}
void choose_and_printTemperatura()//3 ok
{
    int From,To;
    double Quant;
    afisare_optiuniTemperatura();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>3)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>3)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
            convertesteTemperatura(From,To,Quant);
}
void choose_and_printMasa()//7
{
    int From,To,Quant;
    afisare_optiuniMasa();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>7)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>7)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
}
void choose_and_printEnergie()//8
{
    int From,To,Quant;
    afisare_optiuniEnergie();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>8)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>8)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
}
void choose_and_printPresiune()//10
{
    int From,To,Quant;
    afisare_optiuniPresiune();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>10)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>10)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
}
void choose_and_printDensitate()//11 ok
{
    int From,To,Quant;
    afisare_optiuniDensitate();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>11)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>11)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
            convertesteDensitate(From,To,Quant);
}
void choose_and_printConsum()//4 ok
{
    int From,To,Quant;
    afisare_optiuniConsum();cout<<endl<<endl;
    cout<<"What you want to convert?"<<endl;
    cin>>From;
        while(From<0 || From>4)
        {
            cout<<"This option doesn`t exist.Please choose another one."<<endl;
            cin>>From;
        }
        cout<<"In what you want to convert?"<<endl;
        cin>>To;
            while(To<1 || To>4)
            {
                cout<<"This option doesn`t exist.Please choose another one."<<endl;
                cin>>To;
            }
            cout<<"What quantity do you want to convert?"<<endl;
            cin>>Quant;
            convertesteConsum(From,To,Quant);
}

int main()
{
	int alegere,ok=1,from,to;
    choose_and_printArie();
	cin.get(); cin.get();
	return 0;
}
// For clean screen system("CLS");
