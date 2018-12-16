#include<iostream>

#include <vector>
#include <z3++.h>

using namespace z3;

class k_induction{
  public:
// private:
    context c;
    solver  S;

    expr    IF;
    expr    TF;
    expr    PF;
    int N;
// public:

    bool    init();


// protected:

    expr    instantiate_P_at_k(int);

    expr    instantiate_T_at_k(int);

    expr    loopFree_at_k(int);

    void    translate(int k);

    void    print_trace(int k);


    expr_vector x;
    expr_vector y;
    expr_vector alpha;
    expr_vector beta;
    expr_vector lambda;

    k_induction():
        S(c),
        IF(c),
        TF(c),
        PF(c),
        x(c),
        y(c),
        alpha(c),
        beta(c),
        lambda(c){};//constructor
    ~k_induction(){};//destructor


};
//---------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------

