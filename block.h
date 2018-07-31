/*
 * block.h
 * Copyright (C) 2018-07-30 Xinyue <Ou>
 * 
 * BlockHeader is the basic block chain header without any POW.
 */
#ifndef BLOCK_H
#define BLOCK_H
#include <stdint.h>
#include "hash/sha256.h"

class BlockHeader {
public:
    BlockHeader(string hashPrevBlock, string hashMerkleRoot, uint32_t nTimestamp)
        :hashPrevBlock(hashPrevBlock), hashMerkleRoot(hashMerkleRoot), nTimestamp(nTimestamp){ 
    }
    string getHash(); 
    string toString();

    std::string hashPrevBlock;
    std::string hashMerkleRoot;
    uint32_t nTimestamp;
};

#endif /* !BLOCK_H */
