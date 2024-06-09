#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <utility>
#include <cmath>
#include <limits>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <numeric>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
#include "Model/RubiksCubeBitboard.cpp"
#include "Solvers/DFSSolver.h"
#include "Solvers/BFSSolver.h"
#include "Solvers/IDAstarSolver.h"
#include "PatternDatabases/CornerDBMaker.h"


using namespace std;
int main()
{
    string fileName = "/Users/akshat/CLionProjects/rubiks-cube-solver/Databases/cornerDepth5V1.txt";
    RubiksCubeBitboard cube;
    auto shuffleMoves = cube.randomShuffleCube(13);
    cube.print();
    for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";

    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idaStarSolver(cube, fileName);
    auto moves = idaStarSolver.solve();

    idaStarSolver.rubiksCube.print();
    for (auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";


    return 0;

}
