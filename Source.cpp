#include<iostream>
using namespace std;
char ch=253;
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
	cout << "Convertor:"<<ch<<endl;
	cin.get(); cin.get();
	return 0;
}
