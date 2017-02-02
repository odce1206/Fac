/*
 * main.cpp
 * Copyright (C) 2016 sudojar <sudojar@TPT420>
 *
 * Distributed under terms of the MIT license.
 */

//#include "main.h"
#include <iostream>

using namespace std;

int main(){
    int t, NG, NM, GMay, MGMay, dato;
    cin >> t;

    for(int i=1; i<=t; i++){
        cin >> NG >> NM;
        GMay = 0;
        MGMay = 0;
        for(int j=1; j<=NG; j++){
            cin >> dato;
            if(dato>GMay){
                GMay = dato;
            }
        }
        for(int j=1; j<=NM; j++){
            cin >> dato;
            if(dato>MGMay){
                MGMay = dato;
            }
        }
        if(MGMay>GMay){
            cout<<"MechaGodzilla";
        }
        else{
            cout<<"Godzilla"<<endl;
        }
    }

    return 0;
}
