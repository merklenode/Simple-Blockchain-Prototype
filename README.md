### Simple Blockchain Prototype

This project implements a basic blockchain prototype to demonstrate how blocks are linked together and how the SHA-256 cryptographic hashing algorithm ensures data integrity within the blockchain. The goal is to provide an easy-to-understand implementation of how a blockchain works and how each block is linked using secure hashes.

---

### Key Features:
- **Block Linking**: Each block contains a reference to the previous block’s hash, maintaining the integrity of the blockchain.
- **SHA-256 Hashing**: The blockchain uses SHA-256 hashing to ensure that once data is added to a block, it cannot be changed without altering the entire blockchain.
- **Genesis Block**: The first block in the blockchain, also called the "genesis block," is created without a reference to a previous block.

---

### Project Structure:

```
/Simple-Blockchain-Prototype
├── /src
│   ├── Block.cpp                # Implementation of Block class (handles block logic)
│   ├── Block.h                  # Header for Block class (defines block structure)
│   ├── Blockchain.cpp           # Implementation of Blockchain class (handles the blockchain)
│   ├── Blockchain.h             # Header for Blockchain class (defines blockchain methods)
│   ├── SHA256.cpp               # Implementation for SHA-256 hashing
│   ├── SHA256.h                 # Header for SHA-256 hashing utility
│   └── Main.cpp                 # Entry point for the blockchain simulation
├── CMakeLists.txt               # Build configuration for CMake
└── README.md                    # Project documentation (this file)
```

---

### Key Components:

#### **1. Block Class**:
- **Attributes**:
  - `index`: The position of the block in the chain.
  - `timestamp`: The time when the block was created.
  - `data`: The data contained in the block (e.g., transaction information).
  - `previousHash`: The hash of the previous block, ensuring the chain integrity.
  - `hash`: The SHA-256 hash of the block, providing data security.
  
- **Methods**:
  - `calculateHash()`: Computes the SHA-256 hash of the block’s data and previous hash.
  - `createBlock()`: Generates a new block and calculates its hash.

#### **2. Blockchain Class**:
- **Attributes**:
  - A list of blocks representing the entire blockchain.
  
- **Methods**:
  - `addBlock()`: Adds a new block to the blockchain.
  - `isValid()`: Checks if the blockchain is valid by verifying each block’s hash.

#### **3. SHA-256 Utility**:
- **SHA256.cpp and SHA256.h**: These files implement and define the functions necessary for SHA-256 hashing, which ensures that data integrity is maintained.

#### **4. Main Program (main.cpp)**:
- **Main Function**: This file sets up the blockchain, adds blocks, and checks the blockchain’s integrity by verifying the hashes.

---

### How It Works:
1. **Genesis Block**: The blockchain starts with the creation of the first block, known as the genesis block. This block has no reference to any previous block.
2. **Block Linking**: Every new block added to the blockchain contains the hash of the previous block. This ensures that the blocks are chained together, and the integrity of the blockchain is preserved.
3. **SHA-256**: Each block’s hash is computed using the SHA-256 algorithm. This cryptographic technique guarantees that any change to a block’s data would result in a completely different hash, making tampering easy to detect.

---

### How to Build and Run:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/Simple-Blockchain-Prototype.git
   cd Simple-Blockchain-Prototype
   ```

2. **Create the build directory**:
   ```bash
   mkdir build
   cd build
   ```

3. **Run CMake to generate the build files**:
   ```bash
   cmake ..
   ```

4. **Build the project using make**:
   ```bash
   make
   ```

5. **Run the blockchain program**:
   ```bash
   ./SimpleBlockchainPrototype
   ```
---

This README provides an overview of the Simple Blockchain Prototype, including how the blockchain works, the structure of the project, and how to build and run it. Let me know if you need more modifications or clarifications!
