# Spécifie la version minimale de CMake requise
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(mon_projet)

# Spécifie la version de C++ à utiliser
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajoute les fichiers sources
set(SOURCES
    main.cpp
)
set(H
    main.cpp
)

add_executable(mon_projet_executable ${SOURCES})
