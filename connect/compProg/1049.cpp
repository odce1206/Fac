/*
 * 1049.cpp
 * Copyright (C) 2016 sudojar <sudojar@TPT420>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

int main(){
    int n, acum;
    cin >> n;
    if(n>0){
        for (int i=1; i<=n; i++){
            acum += i;
        }
    }
    else{
        for (int i=1; i>=n; i--){
            acum +=1;
        }
    }

    cout<<acum<< endl;
    return 0;
}
