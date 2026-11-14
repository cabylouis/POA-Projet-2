cmake_minimum_required(VERSION 4.3)
project(Projet_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Projet_2 src/main.cpp
        src/Tournament.cpp
        src/Tournament.h
        src/Agent.cpp
        src/Agent.h
        src/strategy/Strategy.h
        src/strategy/AllD.cpp
        src/strategy/AllD.h
        src/ScoreCalculator.cpp
        src/ScoreCalculator.h
        src/strategy/Random.cpp
        src/strategy/Random.h
        src/strategy/TitForTat.cpp
        src/strategy/TitForTat.h
        src/strategy/Tester.cpp
        src/strategy/Tester.h
        src/strategy/Joss.cpp
        src/strategy/Joss.h
)
