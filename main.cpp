///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Brayden Suzuki <braydens@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <Weight.h>
#include <iostream>
using namespace std ;

int main() {
    Weight weight1 = Weight() ;
    Weight weight2 = Weight(10) ;
    Weight weight3 = Weight(Weight::KILO) ;
    Weight weight4 = Weight(10, Weight::KILO) ;
    Weight weight5 = Weight(10, 20) ;
    Weight weight6 = Weight(Weight::SLUG, 20) ;
    Weight weight7 = Weight(15, Weight::SLUG, 25) ;

    weight1.dump() ;
    weight2.dump() ;
    weight3.dump() ;
    weight4.dump() ;
    weight5.dump() ;
    weight6.dump() ;
    weight7.dump() ;
    cout << endl ;

    bool testBool1 ;
    bool testBool2 ;
    bool testBool3 ;
    bool testBool4 ;
    bool testBool5 ;
    bool testBool6 ;
    bool testBool7 ;
    bool testBool8 ;
    bool testBool9 ;
    bool testBool10 ;

    float testFloat1 ;
    float testFloat2 ;
    float testFloat3 ;
    float testFloat4 ;
    float testFloat5 ;
    float testFloat6 ;
    float testFloat7 ;
    float testFloat8 ;
    float testFloat9 ;
    float testFloat10 ;
    float testFloat11 ;

    Weight::UnitOfWeight testEnum1 ;

    testBool1 = weight1.isWeightKnown() ; // should be false
    testBool2 = weight2.isWeightKnown() ; // should be true
    testBool3 = weight1.hasMaxWeight() ; // should be false
    testBool4 = weight5.hasMaxWeight() ; // should be true
    testBool5 = weight1.validate() ; // should be false
    testBool6 = weight5.validate() ; // should be true

    testFloat1 = weight2.getWeight() ; // should be 10

    testFloat2 = weight2.getWeight(Weight::POUND) ; // should still be 10 since weight2 is in pounds
    testFloat3 = weight2.getWeight(Weight::KILO) ; // should be 4.53592
    testFloat4 = weight2.getWeight(Weight::SLUG) ; // should be 0.31081
    testFloat5 = weight4.getWeight(Weight::KILO) ; // should still be 10 since weight2 is in kilos
    testFloat6 = weight4.getWeight(Weight::POUND) ; // should be 22.0462
    testFloat7 = weight4.getWeight(Weight::SLUG) ; // should be 0.685218
    testFloat8 = weight7.getWeight(Weight::SLUG) ; // should be 15 since weight2 is in kilos
    testFloat9 = weight7.getWeight(Weight::POUND) ; // should be 482.611
    testFloat10 = weight7.getWeight(Weight::KILO) ; // should be 218.909

    testFloat11 = weight7.getMaxWeight() ; // should be 25

    testEnum1 = weight1.getWeightUnit() ; // should be pounds

    cout << testBool1 << endl ;
    cout << testBool2 << endl ;
    cout << testBool3 << endl ;
    cout << testBool4 << endl ;
    cout << testBool5 << endl ;
    cout << testBool6 << endl ;
    cout << endl ;
    cout << testFloat1 << endl ;
    cout << endl ;
    cout << testFloat2 << endl ;
    cout << testFloat3 << endl ;
    cout << testFloat4 << endl ;
    cout << endl ;
    cout << testFloat5 << endl ;
    cout << testFloat6 << endl ;
    cout << testFloat7 << endl ;
    cout << endl ;
    cout << testFloat8 << endl ;
    cout << testFloat9 << endl ;
    cout << testFloat10 << endl ;
    cout << endl ;
    cout << testFloat11 << endl ;
    cout << endl ;
    cout << testEnum1 << endl ;
    cout << endl ;

    weight5.setWeight(15) ;
    weight5.dump() ;

    weight5.setWeight(18, Weight::KILO) ;
    weight5.dump() ;
    cout << endl ;

    Weight weight8 = Weight(2) ;
    weight8 += 3 ;
    cout << weight8.getWeight() << endl ; // should be 5; 2 + 3
    cout << endl ;

    Weight weight9 = Weight(5) ;
    Weight weight10 = Weight(6) ;

    testBool7 = weight9 == weight10 ; // should be false
    testBool8 = weight8 == weight9 ; // should be true
    testBool9 = weight8 < weight9 ; // should be false
    testBool10 = weight9 < weight10 ; // should be true

    cout << testBool7 << endl ;
    cout << testBool8 << endl ;
    cout << testBool9 << endl ;
    cout << testBool10 << endl ;
}