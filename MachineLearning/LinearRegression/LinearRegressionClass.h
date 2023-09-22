#ifndef LINEARREGRESSION.H
#define LINEARREGRESSION.H

#include <vector>
using namespace std;

class LinearRegressor{
    public:
        LinearRegressor();
        ~LinearRegressor();
        void train(const vector<double>& input, const vector<double>& output, double learningRate, int iters);
        void train(const vector<vector<double>>& input, const vector<double>& output, double learningRate, int iters);
    private:
        double slope;
        double constant;
        vector<double> predict(const vector<double>& input);
};

#endif