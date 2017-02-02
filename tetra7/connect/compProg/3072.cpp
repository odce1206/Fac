/*
 * 3072.cpp
 * Copyright (C) 2016 sudojar <sudojar@TPT420>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    if(n%2 == 0 && n!=2){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
    return 0;
}
