# Protobuf CMake Template

## Dependencies

* Google Protocol Buffers 3.21.9
* CMake

## Files

```
├── src
│   ├── test.cc
│   └── CMakeLists.txt
├── proto
│   ├── test.proto
│   └── CMakeLists.txt
├── CMakeLists.txt
└── README.md
```

## Build 

```
mkdir build && cd build
cmake .. && make
```

## How to use 

* change 1: `CMakeLists.txt`

```
add_subdirectory(proto)
add_subdirectory(src)
```

* change 2: `src/CMakeLists.txt`

```
include_directories(${CMAKE_BINARY_DIR}/proto)
...
add_executable(${PROJECT_NAME} test.cc)
target_link_libraries(${PROJECT_NAME} PUBLIC test ${Protobuf_LIBRARIES})
```