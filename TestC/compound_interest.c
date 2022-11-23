//
//  compound_interest.c
//  TestC
//
//  Created by issuser on 2022/11/22.
//

#include "compound_interest.h"
#include <math.h>

void testCompound(void) {
    double money = 10000;
    double ratio = 1.1;
    double i_10_10 = money*pow(ratio, 10);
    double i_10_15 = money*pow(ratio, 15);
    double i_10_20 = money*pow(ratio, 20);
    double i_10_30 = money*pow(ratio, 30);
    
    printf("\n i_10_10 = %f\n i_10_15 = %f\n i_10_20 = %f\n i_10_30 = %f\n", i_10_10, i_10_15, i_10_20, i_10_30);
    
    ratio = 1.2;
    double i_20_10 = money*pow(ratio, 10);
    double i_20_15 = money*pow(ratio, 15);
    double i_20_20 = money*pow(ratio, 20);
    double i_20_30 = money*pow(ratio, 30);
    printf("\n i_20_10 = %f\n i_20_15 = %f\n i_20_20 = %f\n i_20_30 = %f\n", i_20_10, i_20_15, i_20_20, i_20_30);

    money = 20000;
    double i2_20_10 = money*pow(ratio, 10);
    double i2_20_15 = money*pow(ratio, 15);
    double i2_20_20 = money*pow(ratio, 20);
    double i2_20_30 = money*pow(ratio, 30);
    printf("\n i_20_10 = %f\n i_20_15 = %f\n i_20_20 = %f\n i_20_30 = %f\n", i2_20_10, i2_20_15, i2_20_20, i2_20_30);
    
    
    money = 10000;
    ratio = 1 - 0.1;
    
    for (int i = 0; i < 5; i++) {
        double endMoney;
        if (i == 0) {
            endMoney = 5000.0;
        }else {
            endMoney = 1000 / pow(10, i-1);  // 1000, 100, 10, 1
        }
        
        double v1 = log(ratio);
        double v2 = log(endMoney/money);
        double num = v2 / v1;
        printf("num_%d = %f\n", (int)endMoney, num);
    }
    
    
//        double v1 = log(ratio);
//        double v2 = log(endmoney/money);
//        NSLog(@"%f", v1);
//        NSLog(@"%f", v2);
//
//        double num_year = v2 / v1;
//        NSLog(@"num_yeay = %f", num_year);
}
