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
void convertesteArie(int from,int to,double quantity)
{}
void convertesteVolum(int from, int to,double quantity)
{}
void convertesteTimp(int from, int to,double quantity)
{}
void convertesteViteza(int from, int to,double quantity)
{}
*/
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
void convertesteDensitate(int from, int to,double quantity)
{}
*/
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
    //convertesteArie(From,To,Quant);
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
void choose_and_printViteza()//15
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
void choose_and_printDensitate()//11
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
    choose_and_printConsum();
	cin.get(); cin.get();
	return 0;
}
// For clean screen system("CLS");
