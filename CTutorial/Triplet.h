//
//  Triplet.h
//  CTutorial
//
//  Created by 刘大本事 on 2018/9/25.
//  Copyright © 2018年 刘大本事. All rights reserved.
//

#ifndef Triplet_h
#define Triplet_h

#include <stdio.h>
#include <stdlib.h>

# define TRUE 1
# define FALSE 0
# define OK 1
# define ERROR 0
# define INFEASIBLE -1
# define OVERFLOW -2

typedef int Status;
typedef int ElemType;
typedef ElemType * Triplet;

Status InitTriplet(Triplet *T,ElemType v1, ElemType v2, ElemType v3);
Status DestoryTriplet(Triplet *T);
Status Get(Triplet T, int i, ElemType *e);
Status Put(Triplet T, int i, ElemType e);// TODO *T
Status IsAscending( Triplet T);
Status IsDecending( Triplet T);
Status Max( Triplet T,ElemType *e);
Status Min( Triplet T,ElemType *e);

void printTriplet(Triplet T);
void printE(ElemType e);

#endif /* Triplet_h */


//Triplet T;
//ElemType e;
//
//InitTriplet(&T, 1, 3, 54);
//printTriplet(T);
//
//Get(T, 2, &e);
//printE(e);
//
//Put(T, 2, 19);
//printTriplet(T);
//
//printf("%d\n", IsAscending(T));
//printf("%d\n", IsDecending(T));
//
//Max(T, &e);
//printE(e);
//
//Min(T, &e);
//printE(e);
//
//printf("%d\n", DestoryTriplet(&T));

