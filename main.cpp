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
using namespace std;
int main()
{
    //BFS Solver -----------------------------------------------------------------------------------------------------
    RubiksCubeBitboard cube;
    cube.print();

    vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
    for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    cube.print();

    BFSSolver<RubiksCubeBitboard, HashBitboard> bfsSolver(cube);
    vector<GenericRubiksCube::MOVE> solve_moves = bfsSolver.solve();

    for(auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    bfsSolver.rubiksCube.print();
}
