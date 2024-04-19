cmake_minimum_required(VERSION 3.27)
project(learnc C)

set(CMAKE_C_STANDARD 11)

add_executable(learnc main.c
        chap01/ex01.cpp
        chap01/ex01.h
        chap01/ex02.cpp
        chap01/ex02.h
        chap01/ex03.cpp
        chap01/ex03.h
        chap01/demo_datatype.cpp
        chap01/demo_datatype.h
        chap01/salary.cpp
        chap01/salary.h
        chap01/tinhtuoi.cpp
        chap01/tinhtuoi.h
        chap01/demo_sizeof.cpp
        chap01/demo_sizeof.h
        session7/example1.cpp
        session7/example1.h
        session7/upper-lowercase.c
        session7/discounted-price.c
        session7/switch-case.c
        session7/vidu7-6.c
        session7/vidu7-7.c
        session7/leapyear.c
        session7/example2.c
        session7/lower-to-uppercase.c
        session7/atm-basic.c
        session7/atm-ifelse.c
        session7/bmi.c
        session8/commission.c
        session8/greater_number.c
        session8/commission2.c
        session8/case.c
        session8/studentScore.c
        session8/exercise1.c
        session8/exercise2.c
        session9/vidu9-2.c
        session9/vidu9-2.c
        session9/9-2-evennumber.c
        session9/9-3.c
        session9/orderdrink.c
        lab04/bai1.c
        lab04/bai2.c
        lab04/bai3.c
        lab04/bai4.c
        lab04/bai5.c
        lab04/bai6.c
        lab04/bai7.c
        session9/vidu-while-loop-2.c
        session9/vidu-dowhile.c
        session9/vidu-break.c
        session9/chiahet-cho9.c
        session9/atm2.c
        session9/some-loopdemos.c
        session9/coffeeShop.c
        session9/luckynumber.c
        session9/averageScore.c
        session10/example1.c
        lab05/bai1.c
        lab05/bai2.c
        lab05/bai3.c
        lab05/bai4.c
)
