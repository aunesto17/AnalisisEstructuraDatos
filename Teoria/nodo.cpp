//
//  nodo.cpp
//  Teoria
//
//  Created by Alexander Arturo Baylon Ibanez on 14/09/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "nodo.h"

template<class T>
cList<T>::cList()
{
    
}


template<class T>
bool cList<T>::insert(T x)
{
    cNode<T> ** p;
    if (find(x,p)) return 0;
    cNode<T> * t = new cNode<T>(x);
    t->m_next = *p;
    *p = t;
    return 1;
}


template<class T>
bool cList<T>::find(T x, cNode<T>**&p)
{
    for (p=&m_head; *p && (x<(*p)->m_data); p=&(*p)->m_next) {
        return *p && (x==(*p)->m_data);
    }
}
