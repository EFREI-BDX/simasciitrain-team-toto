cmake_minimum_required(VERSION 3.29)
project(CPP_tp_note)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP_tp_note
    main.cpp
        TypeWagon.cpp
        TypeLocomotive.h
        TypeLocomotive.cpp
        AbstractWagon.h
        AbstractWagon.cpp
        FreightWagon.h
        FreightWagon.cpp
        PassengerWagon.h
        PassengerWagon.cpp
        UtilityWagon.h
        UtilityWagon.cpp
        Wagons.h
        Wagons.cpp
        AbstractLocomotive.h
        AbstractLocomotive.cpp
        ElectricLocomotive.cpp
        GasolineLocomotive.cpp
        ITrain.h
        Train.cpp
        TrainElement.h)
