#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;



int main()

{
	
    ifstream p;
    p.open("D:\\FX TEAM\\dane_obrazki.txt");
    int x;
    int y;
 
    for (y=0; y<20; y++){
	string wiersz;
	p>>wiersz;
	int ilosc_jedynek=0;
	for (y=0; y<20; y++){
   	if (wiersz[y]=='1'){
    ilosc_jedynek++;
       	}
   }
       cout<<" "<<ilosc_jedynek;
   }
       getchar();
    return 0;
    
}
