#include "blockchain.h"
#include <iostream>

Blockchain::Blockchain() {
    chain.push_back(createGenesisBlock());
}

Block Blockchain::createGenesisBlock() const {
    return Block(0, "Genesis Block", "0");
}

void Blockchain::addBlock(const std::string& data) {
    const Block& prevBlock = chain.back();
    chain.push_back(Block(chain.size(), data, prevBlock.getHash()));
}

void Blockchain::printChain() const {
    for (const Block& block : chain) {
        std::cout << "Block " << block.getHash() << ":\n";
        std::cout << "  Previous Hash: " << block.getPrevHash() << "\n";
        std::cout << "  Data: " << block.getHash() << "\n";
    }
}
