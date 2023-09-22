#ifndef LINEARREGRESSION.H
#define LINEARREGRESSION.H

#include <vector>
using namespace std;

class LinearRegressor{
    public:
        LinearRegressor();
        ~LinearRegressor();
        void train(vector<vector<int>> input, vector<int> out, float learningRate, int iters);
    private:
};

#endif