/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Utility.h
 * Author: vips
 *
 * Created on 27 March, 2017, 10:38 AM
 */

#ifndef UTILITY_H
#define UTILITY_H
#include"Gift.h"
using namespace std;
class Utility:public Gift {
public:
   
    /*!
 * Default constructor
 */ Utility();

    /*!
 * parameterized constructor
 */    Utility(int c,int v,string gi);
    Utility(const Utility& orig);
 
    /*!
 * Default Destructor
 */   virtual ~Utility();
private:

};

#endif /* UTILITY_H */

