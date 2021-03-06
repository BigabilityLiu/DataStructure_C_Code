//
//  Triplet.c
//  CTutorial
//
//  Created by 刘大本事 on 2018/9/25.
//  Copyright © 2018年 刘大本事. All rights reserved.
//

#include "Triplet.h"

Status InitTriplet(Triplet *T,ElemType v1, ElemType v2, ElemType v3){
    *T = (ElemType *)malloc(3 * sizeof(ElemType));
    if (!*T) {
        exit(OVERFLOW) ;
    }
    (*T)[0] = v1;
    (*T)[1] = v2;
    (*T)[2] = v3;
    return OK;
    
}
Status DestoryTriplet(Triplet *T){
    free(*T);
    *T = NULL;
    return OK;
}
Status Get(Triplet T, int i, ElemType *e){
    if (i < 1 || i > 3) {
        return ERROR;
    }
    *e = T[i - 1];
    return OK;
}
Status Put(Triplet T, int i, ElemType e){
    if (i < 1 || i > 3) {
        return ERROR;
    }
    T[i - 1] = e;
    return OK;
}
Status IsAscending( Triplet T){
    return (T[0] <= T[1]) && (T[1] <= T[2]);
}
Status IsDecending( Triplet T){
    return (T[0] >= T[1]) && (T[1] >= T[2]);
}
Status Max( Triplet T,ElemType *e){
    *e=T[0]>=T[1]?T[0]>=T[2]?T[0]:T[2]:T[1]>=T[2]?T[1]:T[2];
    return OK;
}
Status Min( Triplet T,ElemType *e){
    *e=T[0]<=T[1]?T[0]<=T[2]?T[0]:T[2]:T[1]<=T[2]?T[1]:T[2];
    return OK;
}
void printTriplet(Triplet T){
    printf("%d %d %d\n", T[0], T[1], T[2]);
};
void printE(ElemType e){
    printf("%d\n", e);
};
