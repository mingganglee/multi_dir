# MultiDirProject

## Description

本项目为 `cmake` 多级目录的基础模板

目录结构为

```txt
├── CMakeLists.txt
├── README.md
├── include
│   └── neo.h
├── lib
│   ├── CMakeLists.txt
│   ├── tools.cpp
│   └── tools.h
└── src
    ├── CMakeLists.txt
    ├── main.cpp
    └── neo.cpp
```

## How to use

build

```shell
cmake -B build
cmake --build build
```

run

```shell
./build/src/MultiDir

Output:
Main.cpp Hello, world!
Neo Hello, world!
Tools Hello, world!
```
