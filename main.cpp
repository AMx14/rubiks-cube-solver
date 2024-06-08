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

using namespace std;
int main()
{
    RubiksCube3dArray object3DArray;
    RubiksCube1dArray object1DArray;
    RubiksCubeBitboard objectBitboard;
    //object3DArray.print();

    //object3DArray.l();
    //object3DArray.print();

    //object3DArray.randomShuffleCube(3);
    //object3DArray.print();

    object1DArray.print();
    objectBitboard.print();
    object3DArray.l();
    object3DArray.print();
    if(object3DArray.isSolved())
        cout<<"Solved/n";
    else
        cout<<"Not Solved/n";

    object3DArray.lPrime();
    object3DArray.print();
    if(object3DArray.isSolved())
        cout<<"Solved\n";
    else
        cout<<"Not Solved"<<endl;
    return 0;
}
