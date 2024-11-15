cmake_minimum_required(VERSION 3.10)
project(SimpleBlockchain)

set(CMAKE_CXX_STANDARD 17)

# Specify the path to OpenSSL (for SHA-256 hashing)
find_package(OpenSSL REQUIRED)

# Add source files
add_executable(SimpleBlockchain 
    src/main.cpp
    src/block.cpp
    src/blockchain.cpp
    src/sha256.cpp
)

# Link OpenSSL library
target_link_libraries(SimpleBlockchain OpenSSL::Crypto)
