/*
 * 2264.cpp
 * Copyright (C) 2016 sudojar <sudojar@TPT420>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

int main (){
    int ren, col, posR, posC, t, move;
    char ch;
    cin >> ren >> col;
    cin >> posR >> posC >> t;

    for(int i=1; i<=t; i++){
        cin >> ch;
        cin >> move;
        switch(ch){
            case 'E':posC -= move;
                     break;
            case 'W':posC += move;
                     break;
            case 'N':posR += move;
                     break;
            case 'S':posR -= move;
                     break;
        }
    }


    cout << posR << " " << posC <<endl;
    return 0;
}
