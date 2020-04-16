#ifndef NEURON_H
#define NEURON_H
#include "mainwindow.h"
#include <string>
#include <vector>

using namespace std;


// Not only the soma, but also includes axon and dendrites.
class Neuron {
    string name;
    string neuroTransmitter;
    string axon = "";
    vector<Neuron> dendrites;
    int signalStrength = 0;
    int weight = 0;
    int thresholdPotential = 5;
    bool isRelayNeuron;

    public:

    Neuron(string name, string neuroTransmitter, int weight){
        this->name = name;
        this->neuroTransmitter = neuroTransmitter;
        this->weight = weight;
    }

    string getName(){
        return this->name;
    }

    string getNeuroTransmitter(){
        return this->neuroTransmitter;
    }

    string getAxonConnection(){
        return this->axon;
    }

    int getWeight(){
        return this->weight;
    }

    int getSignal(){
        return this->signalStrength;
    }

    vector<Neuron> getDendrites(){
       return this->dendrites;
    }

    void setSignal(int signal){
        this->signalStrength = signal;
    }

    // Current neuron's axon is leading/connected to the passed one.
    void setAxonConnection(Neuron neuron){
        this->axon = neuron.getName();
    }

    void addDendrite(Neuron neuron){
        this->dendrites.push_back(neuron);
    }

    void setAsRelayNeuron(){
       this->isRelayNeuron = true;
    }

    // Summation function
    bool calculateSignalStrength(){
        if(isRelayNeuron == false){
            for(unsigned long long  i = 0; i < this->dendrites.size(); i++){
                // Scalar multiplication
                this->signalStrength += dendrites[i].getSignal() * dendrites[i].getWeight();
            }
            if (this->signalStrength + this->thresholdPotential >= 0){
                return true;
            }
        }
        return false;
    }

   Neuron getNextNeuron(vector<Neuron> neurons){
        if (calculateSignalStrength() == true){
            // Search neuron by name.
            for(unsigned long long i = 0; i < neurons.size(); i++){
                if(neurons[i].getName() == this->getAxonConnection()){
                    return neurons[i];
                }
            }
        }
   }
};

#endif // NEURON_H
