#include<iostream>
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
	cout << "1. Milimetri." << endl;
	cout << "2. Centimetri." << endl;
	cout << "3. Metri." << endl;
	cout << "4. Kilometri." << endl;
	cout << "5. Inch." << endl;
	cout << "6. Picioare(Feets)." << endl;
	cout << "7. Yarzi." << endl;
	cout << "8. Mila." << endl;
	cout << "9. Mila maritima." << endl;
}
void afisare_optiuniArie()
{
    cout<<"1. Ari."<<endl;
    cout<<"2. Acri."<<endl;
    cout<<"3. Hectare."<<endl;
    cout<<"4. Milimetri"<<square<<"."<<endl;
    cout<<"5. Centimetri"<<square<<"."<<endl;
    cout<<"6. Metri"<<square<<"."<<endl;
    cout<<"7. Kilometri"<<square<<"."<<endl;
    cout<<"8. Picioare"<<square<<"(Feets"<<square<<")."<<endl;
    cout<<"9. Inches"<<square<<"."<<endl;
    cout<<"10. Yarzi"<<square<<"."<<endl;
}
void afisare_optiuniVolum()
{
    cout<<"1. Mililitri."<<endl;
    cout<<"2. Centilitri."<<endl;
    cout<<"3. Decilitri."<<endl;
    cout<<"4. Litri."<<endl;
    cout<<"5. Gal(UK)."<<endl;
    cout<<"6. Gal(US)."<<endl;
    cout<<"7. Centimetri"<<cube<<"."<<endl;
    cout<<"8. Decimetri"<<cube<<"."<<endl;
    cout<<"9. Metri"<<cube<<"."<<endl;
    cout<<"10. Picioare"<<cube<<"(Feets"<<cube<<")."<<endl;
    cout<<"11. Inches"<<cube<<"."<<endl;
    cout<<"12. Yarzi"<<cube<<"."<<endl;
}
void afisare_optiuniTimp()
{
    cout<<"1. Saptamana."<<endl;
    cout<<"2. Zi."<<endl;
    cout<<"3. Ora."<<endl;
    cout<<"4. Minut."<<endl;
    cout<<"5. Secunda."<<endl;
    cout<<"6. Milisecunda."<<endl;
}
void afisare_optiuniViteza()
{

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
    cout<<"1. Miligrame."<<endl;
    cout<<"2. Grame."<<endl;
    cout<<"3. Kilograme."<<endl;
    cout<<"4. Tone."<<endl;
    cout<<"5. Funte(pount)"<<endl;
    cout<<"6. Oz(AV),Uncii(Avoirdupois). "<<endl;
    cout<<"7. Oz(Troy),Uncii(Troy)."<<endl;
}
void afisare_optiuniEnergie()
{

}
void afisare_optiuniPresiune()
{

}
void afisare_optiuniDensitate()
{

}
void afisare_optiuniConsum()
{

}

/*
int convertesteLungime(int from,int to)
{}
int convertesteArie(int from,int to)
{}
int convertesteVolum(int from, int to)
{}
int convertesteTimp(int from, int to)
{}
int convertesteViteza(int from, int to)
{}
int convertesteTemperatura(int from, int to)
{}
int convertesteMasa(int from, int to)
{}
int convertesteEnergie(int from, int to)
{}
int convertestePresiune(int from, int to)
{}
int convertesteDensitate(int from, int to)
{}
int convertesteConsum(int from, int to)
{}
*/

int main()
{
	int alegere,ok=1,from,to;
	afis();
	afisare_optiuniMasa();

	cin.get(); cin.get();
	return 0;
}
