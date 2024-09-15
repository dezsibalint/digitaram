//
// Created by dezsibalint on 2024.09.14..
//

#include "truthtable.h"
#include <iostream>
#include "gtest_lite.h"
#include "aramkorielem.h"
#include "forras.h"
#include "vezetek.h"
#include "norgate.h"
#include "invereter.h"
#include "teszthalozat.h"
#include "halozat.h"
void generateTruthtable() {
    teszthalozat ts(0,0,0,0,0);
    ts.felepit();
    std::cout<<"E D B C A| Y"<<std::endl;
    for (int i=0; i < 2; i++) {

        for (int j=0; j < 2; j++) {

            for (int k=0; k < 2; k++) {

                for (int l=0; l < 2; l++) {

                    for (int m=0; m < 2; m++) {
                        ts.setin(i,j,k,l,m);
                        std::cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<m<<"| "<<ts.kimenet()<<std::endl;
                    }
                }
            }
        }

    }

}