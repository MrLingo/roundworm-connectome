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
            // Make sure a neuron don't connect to itself.
            if(neuronBatch[i].getName() != neuronBatch[possibleAxonIndex].getName()){
                neuronBatch[i].setAxonConnection(neuronBatch[possibleAxonIndex]);
                // Set dendrite.
                neuronBatch[possibleAxonIndex].addDendrite(neuronBatch[i]);
            }
        } while(neuronBatch[i].getName() == neuronBatch[possibleAxonIndex].getName());
    }

    return neuronBatch;
}


vector<Neuron> getActivatedNeurons(Neuron startingNeuron, vector<Neuron> neurons, string neuroTransmitter, short numOfNeurons){
    vector<Neuron> activatedNeurons;
    short counter = 0;
    Neuron currentNeuron = startingNeuron;

    while(counter < numOfNeurons){
        if(currentNeuron.getNeuroTransmitter() == neuroTransmitter){
            activatedNeurons.push_back(currentNeuron);

            // Assures activation/firing.
            currentNeuron.setSignal(10);
            currentNeuron = currentNeuron.getNextNeuron(neurons);
        }
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
