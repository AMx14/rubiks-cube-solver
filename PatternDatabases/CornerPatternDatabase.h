//
// Created by Akshat Maithani on 09/06/24.
//

#ifndef RUBIKS_CUBE_SOLVER_CORNERPATTERNDATABASE_H
#define RUBIKS_CUBE_SOLVER_CORNERPATTERNDATABASE_H

#include "../Model/GenericRubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDatabase : public PatternDatabase {

    typedef GenericRubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const GenericRubiksCube& cube) const;

};

#endif //RUBIKS_CUBE_SOLVER_CORNERPATTERNDATABASE_H
