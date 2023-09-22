#include "LinearRegressionClass.h"
#include <random>

LinearRegressor::LinearRegressor(){
    random_device rd;
    mt19937_64 mt(rd);
    uniform_real_distribution<double> gen(0.0,1.0);
    slope = gen(mt)*-1;
    while(slope == 0.0){
        slope = gen(mt)*-1;
    }
    constant = gen(mt)*-1;
    while(constant == 0.0){
        constant = gen(mt)*-1;
    }
}

void LinearRegressor::train(const vector<double>& input, const vector<double>& output, double learningRate, int iters){
    for(int i = 0; i < iters; i++){
        vector<double> predictions = predict(input);
    }
}

void LinearRegressor::train(const vector<vector<double>>& input, const vector<double>& output, double learningRate, int iters){

}

vector<double> LinearRegressor::predict(const vector<double>& input){
    vector<double> predictions;
    for(int i = 0; i < input.size(); i++){
        predictions.push_back(slope*input[i]+constant);
    }
    return predictions;
}