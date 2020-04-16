#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QThread>
#include "neuron.h"
#include "main.cpp"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}


Neuron neuron1("ADAL", "Glutamate", 1);
Neuron neuron2("ADAR", "Glutamate", 1);
Neuron neuron3("ADEL", "Dopamine", 3);
Neuron neuron4("ADER", "Dopamine", 3);
Neuron neuron5("ADFL", "Serotonin", 2);
Neuron neuron6("ADFR", "Serotonin", 2);
Neuron neuron7("ADLL", "Unknown", 1);
Neuron neuron8("ADLR", "Unknown", 1);
Neuron neuron9("AFDL", "Unknown", 1);
Neuron neuron10("AFDR", "Unknown", 1);

Neuron neuron11("AIAL", "Acetylcholine", 1);
Neuron neuron12("AIAR", "Acetylcholine", 1);
Neuron neuron13("AIBL", "Unknown", 1);
Neuron neuron14("AIBR", "Unknown", 1);
Neuron neuron15("AIML", "Serotonin", 2);
Neuron neuron16("AIMR", "Serotonin", 2);
Neuron neuron17("AINL", "Glutamate", 1);
Neuron neuron18("AINR", "Glutamate", 1);
Neuron neuron19("AIYL", "Acetylcholine", 1);
Neuron neuron20("AIYR", "Acetylcholine", 1);

Neuron neuron21("AIZL", "Unknown", 1);
Neuron neuron22("AIZR", "Unknown", 1);
Neuron neuron23("ALA", "Unknown", 1);
Neuron neuron24("ALML", "Glutamate", 1);
Neuron neuron25("AIMR", "Glutamate", 1);
Neuron neuron26("ALNL", "Acetylcholine", 1);
Neuron neuron27("ALNR", "Acetylcholine", 1);
Neuron neuron28("AQR", "Unknown", 1);
Neuron neuron29("AS1", "Acetylcholine", 1);
Neuron neuron30("AS10", "Acetylcholine", 1);

Neuron neuron31("AS11", "Unknown", 1);
Neuron neuron32("AS2", "Unknown", 1);
Neuron neuron33("AS3", "Unknown", 1);
Neuron neuron34("AS4", "Glutamate", 1);
Neuron neuron35("AS5", "Glutamate", 1);
Neuron neuron36("AS6", "Acetylcholine", 1);
Neuron neuron37("AS7", "Acetylcholine", 1);
Neuron neuron38("AS8", "Unknown", 1);
Neuron neuron39("AS9", "Acetylcholine", 1);
Neuron neuron40("ASEL", "Acetylcholine", 1);

Neuron neuron41("ASER", "Unknown", 1);
Neuron neuron42("ASGL", "Unknown", 1);
Neuron neuron43("ASGR", "Unknown", 1);
Neuron neuron44("ASHL", "Glutamate", 1);
Neuron neuron45("ASHR", "Glutamate", 1);
Neuron neuron46("ASIL", "Unknown", 1);
Neuron neuron47("ASIR", "Unknown", 1);
Neuron neuron48("ASJL", "Unknown", 1);
Neuron neuron49("ASJR", "Unknown", 1);
Neuron neuron50("ASKL", "Glutamate", 1);

Neuron neuron51("ASKR", "Glutamate", 1);
Neuron neuron52("AUAL", "Glutamate", 1);
Neuron neuron53("AUAR", "Glutamate", 1);
Neuron neuron54("AVAL", "FMRFamide", 1);
Neuron neuron55("AVAR", "FMRFamide", 1);
Neuron neuron56("AVBL", "Unknown", 1);
Neuron neuron57("AVBR", "Unknown", 1);
Neuron neuron58("AVDL", "Unknown", 1);
Neuron neuron59("AVDR", "Unknown", 1);
Neuron neuron60("AVEL", "FMRFamide", 1);

Neuron neuron61("AVER", "FMRFamide", 1);
Neuron neuron62("AVFL", "Unknown", 1);
Neuron neuron63("AVFR", "Unknown", 1);
Neuron neuron64("AVG", "Unknown", 1);
Neuron neuron65("AVHL", "Unknown", 1);
Neuron neuron66("AVHR", "Unknown", 1);
Neuron neuron67("AVJL", "Glutamate", 1);
Neuron neuron68("AVJR", "Glutamate", 1);
Neuron neuron69("AVKL", "FMRFamide", 1);
Neuron neuron70("AVKR", "FMRFamide", 1);

Neuron neuron71("AVL", "GABA", 2);
Neuron neuron72("AVM", "Glutamate", 1);
Neuron neuron73("AWAL", "Unknown", 1);
Neuron neuron74("AWAR", "Unknown", 1);
Neuron neuron75("AWBL", "Unknown", 1);
Neuron neuron76("AWBR", "Unknown", 1);
Neuron neuron77("AWCL", "Unknown", 1);
Neuron neuron78("AWCR", "Unknown", 1);
Neuron neuron79("BAGL", "Unknown", 1);
Neuron neuron80("BAGR", "Unknown", 1);

Neuron neuron81("BDUL", "Unknown", 1);
Neuron neuron82("BDUR", "Unknown", 1);
Neuron neuron83("CANL*", "Monoamine", 1);
Neuron neuron84("CANR*", "Monoamine", 1);
Neuron neuron85("CEPDL", "Dopamine", 3);
Neuron neuron86("CEPDR", "Dopamine", 3);
Neuron neuron87("CEPVL", "Dopamine", 3);
Neuron neuron88("CEPVR", "Dopamine", 3);
Neuron neuron89("DA1", "Acetylcholine", 1);
Neuron neuron90("DA2", "Acetylcholine", 1);

Neuron neuron91("DA3", "Acetylcholine", 1);
Neuron neuron92("DA4", "Acetylcholine", 1);
Neuron neuron93("DA5", "Acetylcholine", 1);
Neuron neuron94("DA6", "Acetylcholine", 1);
Neuron neuron95("DA7", "Acetylcholine", 1);
Neuron neuron96("DA8", "Acetylcholine", 1);
Neuron neuron97("DA9", "Acetylcholine", 1);
Neuron neuron98("DB1", "Acetylcholine", 1);
Neuron neuron99("DB2", "Acetylcholine", 1);
Neuron neuron100("DB3", "Acetylcholine", 1);

Neuron neuron101("DB4", "Acetylcholine", 1);
Neuron neuron102("DB5", "Acetylcholine", 1);
Neuron neuron103("DB6", "Acetylcholine", 1);
Neuron neuron104("DB7", "Acetylcholine", 1);
Neuron neuron105("DD1", "GABA", 2);
Neuron neuron106("DD2", "GABA", 2);
Neuron neuron107("DD3", "GABA", 2);
Neuron neuron108("DD4", "GABA", 2);
Neuron neuron109("DD5", "GABA", 2);
Neuron neuron110("DD6", "GABA", 2);

Neuron neuron111("DVA", "Unknown", 1);
Neuron neuron112("DVB", "GABA", 2);
Neuron neuron113("DVC", "Unknown", 1);
Neuron neuron114("FLPL", "Glutamate", 1);
Neuron neuron115("FLPR", "Glutamate", 1);
Neuron neuron116("HSNL", "Serotonin/Acetylcholine", 3);
Neuron neuron117("HSNR", "Serotonin/Acetylcholine", 3);
Neuron neuron118("I1L", "Acetylcholine", 1);
Neuron neuron119("I1R", "Acetylcholine", 1);
Neuron neuron120("I2L", "Unknown", 1);

Neuron neuron121("I2R", "Unknown", 1);
Neuron neuron122("I3", "Unknown", 1);
Neuron neuron123("I4", "Unknown", 1);
Neuron neuron124("I4", "Serotonin/Glutamate", 3);
Neuron neuron125("I6", "Acetylcholine", 1);
Neuron neuron126("IL1DL", "Glutamate", 1);
Neuron neuron127("IL1DR", "Glutamate", 1);
Neuron neuron128("IL1L", "Glutamate", 1);
Neuron neuron129("IL1R", "Glutamate", 1);
Neuron neuron130("IL1VL", "Glutamate", 1);

Neuron neuron131("IL1VR", "Glutamate", 1);
Neuron neuron132("IL2DL", "Unknown", 1);
Neuron neuron133("IL2DR", "Unknown", 1);
Neuron neuron134("IL2L", "Acetylcholine", 1);
Neuron neuron135("IL2R", "Acetylcholine", 1);
Neuron neuron136("IL2VL", "Unknown", 1);
Neuron neuron137("IL2VR", "Unknown", 1);
Neuron neuron138("LUAL", "Glutamate", 1);
Neuron neuron139("LUAR", "Glutamate", 1);
Neuron neuron140("M1", "Acetylcholine", 1);

Neuron neuron141("M2L", "Acetylcholine", 1);
Neuron neuron142("M2R", "Acetylcholine", 1);
Neuron neuron143("M3L", "Glutamate", 1);
Neuron neuron144("M3R", "Glutamate", 1);
Neuron neuron145("M4", "Acetylcholine", 1);
Neuron neuron146("M5", "Acetylcholine", 1);
Neuron neuron147("MCL", "Acetylcholine", 1);
Neuron neuron148("MCR", "Acetylcholine", 1);
Neuron neuron149("MI", "Unknown", 1);
Neuron neuron150("NSML", "Serotonin/Glutamate", 3);

Neuron neuron151("NSMR", "Serotonin/Glutamate", 3);
Neuron neuron152("OLLL", "Glutamate", 1);
Neuron neuron153("OLLR", "Glutamate", 1);
Neuron neuron154("OLQDL", "Glutamate", 1);
Neuron neuron155("OLQDR", "Glutamate", 1);
Neuron neuron156("OLQVL", "Glutamate", 1);
Neuron neuron157("OLQDR", "Glutamate", 1);
Neuron neuron158("PDA", "Unknown", 1);
Neuron neuron159("PDB", "Unknown", 1);
Neuron neuron160("PDEL", "Dopamine", 3);

Neuron neuron161("PDER", "Dopamine", 3);
Neuron neuron162("PHAL", "Unknown", 1);
Neuron neuron163("PHAR", "Unknown", 1);
Neuron neuron164("PHBL", "Serotonin", 2);
Neuron neuron165("PHBR", "Serotonin", 2);
Neuron neuron166("PHCL", "Unknown", 1);
Neuron neuron167("PHCR", "Unknown", 1);
Neuron neuron168("PLML", "Glutamate", 1);
Neuron neuron169("PLMR", "Glutamate", 1);
Neuron neuron170("PLNL", "Acetylcholine", 1);

Neuron neuron171("PLNR", "Acetylcholine", 1);
Neuron neuron172("PQR", "Unknown", 1);
Neuron neuron173("PVCL", "Unknown", 1);
Neuron neuron174("PVCR", "Unknown", 1);
Neuron neuron175("PVDL", "Glutamate", 1);
Neuron neuron176("PVDR", "Glutamate", 1);
Neuron neuron177("PVM", "Unknown", 1);
Neuron neuron178("PVNL", "Unknown", 1);
Neuron neuron179("PVNR", "Unknown", 1);
Neuron neuron180("PVPL", "Unknown", 1);

Neuron neuron181("PVPR", "Unknown", 1);
Neuron neuron182("PVQL", "Unknown", 1);
Neuron neuron183("PVQR", "Unknown", 1);
Neuron neuron184("PVR", "Glutamate", 1);
Neuron neuron185("PVT", "Unknown", 1);
Neuron neuron186("PVWL", "Unknown", 1);
Neuron neuron187("PVWR", "Unknown", 1);
Neuron neuron188("RIAL", "Unknown", 1);
Neuron neuron189("RIAR", "Unknown", 1);
Neuron neuron190("RIBL", "Unknown", 1);

Neuron neuron191("RIBR", "Unknown", 1);
Neuron neuron192("RICL", "Octapamine", 2);
Neuron neuron193("RICR", "Octapamine", 2);
Neuron neuron194("RID", "GABA", 1);
Neuron neuron195("RIFL", "Unknown", 1);
Neuron neuron196("RIFR", "Unknown", 1);
Neuron neuron197("RIGL", "FRMFemide", 1);
Neuron neuron198("RIGR", "FRMFemide", 1);
Neuron neuron199("RIH", "Serotonin", 2);
Neuron neuron200("RIML", "Acetylcholine/Tyramine", 2);

Neuron neuron201("RIMR", "Acetylcholine/Tyramine", 2);
Neuron neuron202("RIPL", "Unknown", 1);
Neuron neuron203("RIPR", "Unknown", 1);
Neuron neuron204("RIR", "Unknown", 1);
Neuron neuron205("RIS", "GABA", 1);
Neuron neuron206("RIVL", "Unknown", 1);
Neuron neuron207("RIVR", "Unknown", 1);
Neuron neuron208("RMDDL", "Acetylcholine", 1);
Neuron neuron209("RMDDR", "Acetylcholine", 1);
Neuron neuron210("RMDL", "Acetylcholine", 1);

Neuron neuron211("RMDR", "Acetylcholine", 1);
Neuron neuron212("RMDVL", "Acetylcholine", 1);
Neuron neuron213("RMDVR", "Acetylcholine", 1);
Neuron neuron214("RMED", "GABA", 1);
Neuron neuron215("RMEL", "GABA", 1);
Neuron neuron216("RMER", "GABA", 1);
Neuron neuron217("RMEV", "GABA", 1);
Neuron neuron218("RMFL", "Unknown", 1);
Neuron neuron219("RMFR", "Unknown", 1);
Neuron neuron220("RMGL", "FRMFemide", 1);

Neuron neuron221("RMGR", "Acetylcholine", 1);
Neuron neuron222("RMHL", "Acetylcholine", 1);
Neuron neuron223("RMHR", "Acetylcholine", 1);
Neuron neuron224("SAADL", "GABA", 1);
Neuron neuron225("SAADR", "GABA", 1);
Neuron neuron226("SAAVL", "GABA", 1);
Neuron neuron227("SAAVR", "GABA", 1);
Neuron neuron228("SABD", "Unknown", 1);
Neuron neuron229("SABVL", "Unknown", 1);
Neuron neuron230("SABVR", "FRMFemide", 1);

Neuron neuron231("SDQL", "Acetylcholine", 1);
Neuron neuron232("SDQR", "Acetylcholine", 1);
Neuron neuron233("SIADL", "Acetylcholine", 1);
Neuron neuron234("SIADR", "Acetylcholine", 1);
Neuron neuron235("SIAVL", "Acetylcholine", 1);
Neuron neuron236("SIAVR", "Acetylcholine", 1);
Neuron neuron237("SIBDL", "Acetylcholine", 1);
Neuron neuron238("SIBDR", "Acetylcholine", 1);
Neuron neuron239("SIBVL", "Acetylcholine", 1);
Neuron neuron240("SIBVR", "Acetylcholine", 1);

Neuron neuron241("SMBDL", "Acetylcholine", 1);
Neuron neuron242("SMBDR", "Acetylcholine", 1);
Neuron neuron243("SMBVL", "Acetylcholine", 1);
Neuron neuron244("SMBVR", "Acetylcholine", 1);
Neuron neuron245("SMDDL", "Acetylcholine", 1);
Neuron neuron246("SMDDR", "Acetylcholine", 1);
Neuron neuron247("SMDVL", "Acetylcholine", 1);
Neuron neuron248("SMDVR", "Acetylcholine", 1);
Neuron neuron249("URADL", "Acetylcholine", 1);
Neuron neuron250("URADR", "Acetylcholine", 1);

Neuron neuron251("URAVL", "Acetylcholine", 1);
Neuron neuron252("URAVR", "Acetylcholine", 1);
Neuron neuron253("URBL", "Acetylcholine", 1);
Neuron neuron254("URBR", "Acetylcholine", 1);
Neuron neuron255("URXL", "Unknown", 1);
Neuron neuron256("URXR", "Unknown", 1);
Neuron neuron257("URYDL", "Unknown", 1);
Neuron neuron258("URYDR", "Unknown", 1);
Neuron neuron259("URYVL", "Unknown", 1);
Neuron neuron260("URYVR", "Unknown", 1);

Neuron neuron261("VA1", "Acetylcholine", 1);
Neuron neuron262("VA10", "Acetylcholine", 1);
Neuron neuron263("VA11", "Acetylcholine", 1);
Neuron neuron264("VA12", "Acetylcholine", 1);
Neuron neuron265("VA2", "Acetylcholine", 1);
Neuron neuron266("VA3", "Acetylcholine", 1);
Neuron neuron267("VA4", "Acetylcholine", 1);
Neuron neuron268("VA5", "Acetylcholine", 1);
Neuron neuron269("VA6", "Acetylcholine", 1);
Neuron neuron270("VA7", "Acetylcholine", 1);

Neuron neuron271("VA8", "Acetylcholine", 1);
Neuron neuron272("VA9", "Acetylcholine", 1);
Neuron neuron273("VB1", "Acetylcholine", 1);
Neuron neuron274("VB10", "Acetylcholine", 1);
Neuron neuron275("VB11", "Acetylcholine", 1);
Neuron neuron276("VB2", "Acetylcholine", 1);
Neuron neuron277("VB3", "Acetylcholine", 1);
Neuron neuron278("VB4", "Acetylcholine", 1);
Neuron neuron279("VB5", "Acetylcholine", 1);
Neuron neuron280("VB6", "Acetylcholine", 1);

Neuron neuron281("VB7", "Acetylcholine", 1);
Neuron neuron282("VB8", "Acetylcholine", 1);
Neuron neuron283("VB9", "Acetylcholine", 1);
Neuron neuron284("VC1", "Serotonin/Acetylcholine", 3);
Neuron neuron285("VC2", "Serotonin/Acetylcholine", 3);
Neuron neuron286("VC3", "Serotonin/Acetylcholine", 3);
Neuron neuron287("VC4", "Serotonin/Acetylcholine", 3);
Neuron neuron288("VC5", "Serotonin/Acetylcholine", 3);
Neuron neuron289("VC6", "Serotonin/Acetylcholine", 3);
Neuron neuron290("VD1", "GABA", 1);

Neuron neuron291("VD10", "GABA", 1);
Neuron neuron292("VD11", "GABA", 1);
Neuron neuron293("VD12", "GABA", 1);
Neuron neuron294("VD13", "GABA", 1);
Neuron neuron295("VD2", "GABA", 1);
Neuron neuron296("VD3", "GABA", 1);
Neuron neuron297("VD4", "GABA", 1);
Neuron neuron298("VD5", "GABA", 1);
Neuron neuron299("VD6", "GABA", 1);
Neuron neuron300("VD7", "GABA", 1);

Neuron neuron301("VD8", "GABA", 1);
Neuron neuron302("VD9", "GABA", 1);


// Create vectors with the different type of neural nets.
// Acetylcholine
vector<Neuron> motorNeurons = {neuron11, neuron12, neuron19, neuron20, neuron26, neuron27,
                                    neuron29, neuron30, neuron36, neuron37, neuron39, neuron40,
                                    neuron89, neuron90, neuron91, neuron92, neuron93, neuron94,
                                    neuron95, neuron96, neuron97, neuron98, neuron99, neuron100,
                                    neuron101, neuron102, neuron103, neuron104, neuron116, neuron117,
                                    neuron118, neuron119, neuron125, neuron134, neuron135, neuron140,
                                    neuron145, neuron146, neuron147, neuron148, neuron170, neuron171,
                                    neuron200, neuron201, neuron208, neuron209, neuron210, neuron211,
                                    neuron212, neuron213, neuron221, neuron222, neuron223, neuron231,
                                    neuron232, neuron233, neuron234, neuron235, neuron236, neuron237,
                                    neuron238, neuron239, neuron240, neuron241, neuron242, neuron243,
                                    neuron244, neuron245, neuron246, neuron247, neuron248, neuron249,
                                    neuron262, neuron263, neuron264, neuron265, neuron266, neuron267,
                                    neuron268, neuron269, neuron270, neuron271, neuron272, neuron273,
                                    neuron274, neuron275, neuron276, neuron277, neuron278, neuron279,
                                    neuron280, neuron281, neuron282, neuron283, neuron284, neuron285,
                                    neuron286, neuron287, neuron288, neuron289,

                                    neuron3, neuron4, neuron85, neuron86, neuron87, neuron88, neuron160, neuron161,
                                    neuron83, neuron84,
                                    neuron192, neuron193,
                                    neuron116, neuron117, neuron284, neuron285, neuron286, neuron287, neuron288, neuron289,
                                    neuron200, neuron201
                                   };

// Relay signals glutamate
vector<Neuron> connectorNeurons = {neuron124, neuron150, neuron151,
                                       neuron197, neuron198, neuron220, neuron221,
                                       neuron1, neuron2, neuron17, neuron18, neuron24, neuron25, neuron44, neuron45,
                                       neuron50, neuron51, neuron52, neuron53, neuron67, neuron68, neuron72, neuron114,
                                       neuron115, neuron138, neuron139, neuron143, neuron144, neuron168, neuron169, neuron175,
                                       neuron176, neuron184, neuron126, neuron127, neuron128, neuron129, neuron130, neuron131,
                                       neuron151, neuron152, neuron153, neuron154, neuron155, neuron156, neuron157,
                                       neuron5, neuron6, neuron15, neuron16, neuron124, neuron164, neuron165, neuron199,
                                       neuron54, neuron55, neuron60, neuron61, neuron69, neuron70
                                       };

// Detects external stimuli
vector<Neuron> sensoryNeurons = {neuron13, neuron14, neuron21, neuron22, neuron23, neuron28, neuron111, neuron113, neuron132, neuron133, neuron136, neuron137, neuron149, neuron158, neuron159, neuron162, neuron163, neuron166, neuron167, neuron172, neuron173, neuron174,
                                      neuron195, neuron196, neuron202, neuron203, neuron204, neuron206, neuron207, neuron218, neuron219, neuron222, neuron223,
                                      neuron32, neuron7, neuron8, neuron9, neuron10, neuron40, neuron41, neuron42, neuron43, neuron46, neuron47, neuron48, neuron49, neuron56, neuron57, neuron58, neuron59, neuron62, neuron63, neuron64, neuron65, neuron66, neuron73, neuron74, neuron75, neuron76, neuron77, neuron78, neuron79, neuron80, neuron81, neuron82, neuron120, neuron121, neuron122, neuron123,
                                      neuron177, neuron178, neuron179, neuron180, neuron181, neuron182, neuron183, neuron185, neuron186, neuron187, neuron188, neuron189, neuron190, neuron191, neuron255, neuron256, neuron257, neuron258, neuron259, neuron260,
                                      neuron71, neuron112, neuron194, neuron205, neuron105, neuron106, neuron107, neuron108, neuron109, neuron110, neuron214, neuron215, neuron216, neuron217, neuron290, neuron291, neuron292, neuron293, neuron294, neuron295, neuron296, neuron297, neuron298, neuron299, neuron300, neuron301, neuron302
                                      };


void MainWindow::on_pushButton_clicked()
{

    // Clear on click
    ui->textEdit_1->clear();
    ui->textEdit_2->clear();
    ui->textEdit_3->clear();
    ui->textEdit_4->clear();
    ui->textEdit_5->clear();
    ui->textEdit_6->clear();
    ui->textEdit_7->clear();
    ui->textEdit_8->clear();
    ui->textEdit_9->clear();
    ui->textEdit_10->clear();
    ui->textEdit_11->clear();
    ui->textEdit_12->clear();
    ui->textEdit_13->clear();
    ui->textEdit_14->clear();
    ui->textEdit_15->clear();
    ui->textEdit_16->clear();
    ui->textEdit_17->clear();
    ui->textEdit_18->clear();
    ui->textEdit_19->clear();
    ui->textEdit_20->clear();
    ui->textEdit_21->clear();
    ui->textEdit_22->clear();
    ui->textEdit_23->clear();
    ui->textEdit_24->clear();
    ui->textEdit_25->clear();

    // Seed
    srand((unsigned) time(0));

    // Init worm in random starting position 1 - 25
    short startingPosition = rand() % 25 + 1;
    if (startingPosition <= 25 && startingPosition >= 1 ){

        QString str = "WORM";
        if (startingPosition == 1)  ui->textEdit_1->setText(str);
        if (startingPosition == 2)  ui->textEdit_2->setText(str);
        if (startingPosition == 3)  ui->textEdit_3->setText(str);
        if (startingPosition == 4)  ui->textEdit_4->setText(str);
        if (startingPosition == 5)  ui->textEdit_5->setText(str);
        if (startingPosition == 6)  ui->textEdit_6->setText(str);
        if (startingPosition == 7)  ui->textEdit_7->setText(str);
        if (startingPosition == 8)  ui->textEdit_8->setText(str);
        if (startingPosition == 9)  ui->textEdit_9->setText(str);
        if (startingPosition == 10) ui->textEdit_10->setText(str);
        if (startingPosition == 11) ui->textEdit_11->setText(str);
        if (startingPosition == 12) ui->textEdit_12->setText(str);
        if (startingPosition == 13) ui->textEdit_13->setText(str);
        if (startingPosition == 14) ui->textEdit_14->setText(str);
        if (startingPosition == 15) ui->textEdit_15->setText(str);
        if (startingPosition == 16) ui->textEdit_16->setText(str);
        if (startingPosition == 17) ui->textEdit_17->setText(str);
        if (startingPosition == 18) ui->textEdit_18->setText(str);
        if (startingPosition == 19) ui->textEdit_19->setText(str);
        if (startingPosition == 20) ui->textEdit_20->setText(str);
        if (startingPosition == 21) ui->textEdit_21->setText(str);
        if (startingPosition == 22) ui->textEdit_22->setText(str);
        if (startingPosition == 23) ui->textEdit_23->setText(str);
        if (startingPosition == 24) ui->textEdit_24->setText(str);
        if (startingPosition == 25) ui->textEdit_25->setText(str);

        // Worm is alive
        short it = 0;
        while(it < 10){

        // Worm moves in random direction
        short currentPosition = startingPosition;
        short nextPosition, nextPositionIdx;

        // e.g currPosition = 13   | Can move to adjecent nodes (12, 14, 8, 18)
        nextPositionIdx = rand() % 4;

        //                  Backwards          Forward            Up                 Down
        int nextMoves[4] = {currentPosition-1, currentPosition+1, currentPosition-5, currentPosition+5};
        nextPosition = nextMoves[nextPositionIdx];
        currentPosition = nextPosition;

        if (currentPosition == 1)  ui->textEdit_1->setText(str);
        if (currentPosition == 2)  ui->textEdit_2->setText(str);
        if (currentPosition == 3)  ui->textEdit_3->setText(str);
        if (currentPosition == 4)  ui->textEdit_4->setText(str);
        if (currentPosition == 5)  ui->textEdit_5->setText(str);
        if (currentPosition == 6)  ui->textEdit_6->setText(str);
        if (currentPosition == 7)  ui->textEdit_7->setText(str);
        if (currentPosition == 8)  ui->textEdit_8->setText(str);
        if (currentPosition == 9)  ui->textEdit_9->setText(str);
        if (currentPosition == 10) ui->textEdit_10->setText(str);
        if (currentPosition == 11) ui->textEdit_11->setText(str);
        if (currentPosition == 12) ui->textEdit_12->setText(str);
        if (currentPosition == 13) ui->textEdit_13->setText(str);
        if (currentPosition == 14) ui->textEdit_14->setText(str);
        if (currentPosition == 15) ui->textEdit_15->setText(str);
        if (currentPosition == 16) ui->textEdit_16->setText(str);
        if (currentPosition == 17) ui->textEdit_17->setText(str);
        if (currentPosition == 18) ui->textEdit_18->setText(str);
        if (currentPosition == 19) ui->textEdit_19->setText(str);
        if (currentPosition == 20) ui->textEdit_20->setText(str);
        if (currentPosition == 21) ui->textEdit_21->setText(str);
        if (currentPosition == 22) ui->textEdit_22->setText(str);
        if (currentPosition == 23) ui->textEdit_23->setText(str);
        if (currentPosition == 24) ui->textEdit_24->setText(str);
        if (currentPosition == 25) ui->textEdit_25->setText(str);

        //QThread::sleep(5);

        it++;
        // Worm senses object/touch

        // Worm senses light

        // Worm sense oxygen

        } // while


         // Configure relay neurons to bypass summation function.
         for(unsigned long long i = 0; i < connectorNeurons.size(); i++){
             connectorNeurons[i].setAsRelayNeuron();
         }

         // The whole neuron batch.
         vector<Neuron> neurons;
         neurons.reserve( motorNeurons.size() + connectorNeurons.size() +  sensoryNeurons.size()); // preallocate memory
         neurons.insert( neurons.end(), motorNeurons.begin(), motorNeurons.end() );
         neurons.insert( neurons.end(), connectorNeurons.begin(), connectorNeurons.end() );
         neurons.insert( neurons.end(), sensoryNeurons.begin(), sensoryNeurons.end() );


         // Automatically set axons and dendrites for each neuron in the net. (Wire connections)
         vector<Neuron> motorNeuralNet = createNeuralNet(motorNeurons);
         vector<Neuron> connectorNeuralNet = createNeuralNet(connectorNeurons);
         vector<Neuron> sensoryNeuralNet = createNeuralNet(sensoryNeurons);


         // Build connectome.
         vector<Neuron> connectomeNet = createNeuralNet(neurons);

         bool touch = false,
              sense = false;

         vector<Neuron> activatedNeurons;

         //if(touch == true){ activatedNeurons = getActivatedNeurons(motorNeurons, motorNeuralNet); }
         //else if(sense == true){ activatedNeurons = getActivatedNeurons(sensoryNeurons, sensoryNeuralNet); }
         //else { activatedNeurons = getActivatedNeurons(connectorNeurons, connectorNeuralNet); }


         // motorNeuralNet[0] - Activated neuron that triggers the whole movement reaction.
         activatedNeurons = getActivatedNeurons(motorNeuralNet[0], connectomeNet, "Acetylcholine", motorNeurons.size());

         // Display
         string displayStr, displayStr2;
         for(unsigned long long i = 0; i < activatedNeurons.size(); i++){
             displayStr += "Neuron fired: " + activatedNeurons[i].getName() + " with neuro transmitter: " + activatedNeurons[i].getNeuroTransmitter() + "\n";
         }

         // Debuging.
         string size = std::to_string(activatedNeurons.size());
         displayStr2 += "Num of neurons fired: " + size;

         QString numOfActivatedNeurons = QString::fromStdString(displayStr2);
         QString neuralSignals = QString::fromStdString(displayStr);

         ui->neuralSignals->setText(neuralSignals);
         ui->textEdit_1->setText(numOfActivatedNeurons);
    }
}

// Next step
void MainWindow::on_pushButton_2_clicked()
{

}
