#ifndef CONNECTOME_H
#define CONNECTOME_H
#include "mainwindow.h"
#include "neuron.h"

using namespace  std;

class Connectome {

public:
    vector<Neuron> createNeuralNet(vector<Neuron> neuronBatch);
    vector<Neuron> getActivatedNeurons(vector<Neuron> neurons, vector<Neuron> neuralNet);
};

#endif // CONNECTOME_H
