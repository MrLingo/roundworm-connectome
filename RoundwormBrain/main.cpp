#include "mainwindow.h"
#include <QApplication>
#include "neuron.h"
#include "connectome.h"

using namespace std;

vector<Neuron> createNeuralNet(vector<Neuron> neuronBatch){
    // Seed
    srand((unsigned) time(0));

    int possibleAxonIndex = 0;
    for(unsigned long long i = 0; i < neuronBatch.size(); i++){
        do {
            possibleAxonIndex = rand() % neuronBatch.size();
            // Make sure the first check is correct.
            if (neuronBatch[i].getName() != neuronBatch[possibleAxonIndex].getName())
                neuronBatch[i].setAxonConnection(neuronBatch[possibleAxonIndex]);
                // Set dendrite.
                neuronBatch[possibleAxonIndex].addDendrite(neuronBatch[i]);
        } while(neuronBatch[i].getName() == neuronBatch[possibleAxonIndex].getName());
    }

    return neuronBatch;
}

// Adjust signal strength based on the importance of the stimuli. E.g moving backwards = more weights to Acetylcholine connections (senses touch/anxiety). Food = dopamine etc. (REFACTOR)
vector<Neuron> getActivatedNeurons(vector<Neuron> neurons, vector<Neuron> neuralNet){
    vector<Neuron> activatedNeurons;
    unsigned long long counter = 0;
    while(counter < neurons.size()){
        Neuron nextNeuron = neuralNet[counter].getNextNeuron(neurons);
        activatedNeurons.push_back(nextNeuron);
        counter++;
    }
    return activatedNeurons;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
