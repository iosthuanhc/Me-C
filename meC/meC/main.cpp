//
//  main.cpp
//  meC
//
//  Created by Ha Cong Thuan on 8/21/18.
//  Copyright © 2018 Ha Cong Thuan. All rights reserved.
//

#include <iostream>

using namespace std;

struct List {
    int value;
    List * next;
};

// init list
List *init(int value) {
    List *l;
    l = new List;
    if (l == NULL) {
        cerr <<"error";
    }
    l->value = value;
    l->next =  NULL;
    return l;
}

// add list
List *add(List *lt, int value) {
    // khoi tao List moi
    List *l = init(value);
    List *p = lt;
    if (p == NULL) {
        return l;
    }
    // di chuyen toi con tro cuoi cung
    while (p->next != NULL) {
        p = p->next;
    }
    // con tro cuoi cung tro vao data moi
    p->next = l;
    return lt;
}

// display list
void display(List *lt) {
    List *temp;
    temp = lt;
    while (temp != NULL) {
        cout<< temp->value<< "-";
        temp = temp->next;
    }
    cout<< endl;
}

//List *search (List *lt, int value);
//List del(List *lt, int value);

int main() {
    List *p;
    p = init(3);
    p = add(p, 9);
    p = add(p, 2);
    //List * kq = search(p, 2);
    //p = del(p, 2);
    display(p);
}

/*
 stack: LIFO
 queue : FIFO
 
 addd -> push()
 del -> pop()
 search -> khong con
 */

/*

// init matrix
struct Matrix {
    int col, row;
    float *value;
};

struct Matrix2 {
    int col, row;
    float **value;
};

// init matrix
Matrix2 init2 (int col, int row) {
    Matrix2 kq;
    kq.value = new float* [row];
    kq.value[0] = new  float(col);
    return kq;
}

void delMatrix2 (Matrix2 &m) {
    delete [] m.value;
}

// init matrix
Matrix init (int col, int row) {
    Matrix kq;
    kq.col = col;
    kq.row = row;
    kq.value = NULL;
    kq.value = new float(col*row);
    if(kq.value == NULL) {
        cerr<< "error init memory";
        kq.col = kq.row = 0;
    }
    return kq;
}

// input matrix value
Matrix input() {
    Matrix m;
    
    return m;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a= 10;
    int *b;
    cout<< "a"<< a; \
    cout << "Hello, World!\n";
    
    return 0;
}
*/
