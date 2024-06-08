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
using namespace std;
int main()
{
    //DFS Solver Testing __________________________________________________________________________________________
    RubiksCube3dArray cube;
    cube.print();

    vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    cube.print();
    DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 8);
    vector<GenericRubiksCube::MOVE> solve_moves = dfsSolver.solve();

    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    dfsSolver.rubiksCube.print();
    return 0;
}
