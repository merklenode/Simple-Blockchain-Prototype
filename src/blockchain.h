#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "block.h"
#include <vector>

class Blockchain {
public:
    Blockchain();

    void addBlock(const std::string& data);
    void printChain() const;

private:
    std::vector<Block> chain;

    Block createGenesisBlock() const;
};

#endif // BLOCKCHAIN_H
