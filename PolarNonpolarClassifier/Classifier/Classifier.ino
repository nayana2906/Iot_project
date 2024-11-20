#include <time.h>
#include <EloquentTinyML.h>
#include "PolarNonPolarClassify_model.h"

#define NUMBER_OF_INPUTS 8 // number of features in the dataset
#define NUMBER_OF_OUTPUTS 1 // number of label in the dataset
#define TENSOR_ARENA_SIZE 6*1024 // Since the size of TFLite model is around 104704 half of that is given as Arena size
Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> ml;
// in future projects you may need to tweek this value: it's a trial and error process
// When 5 * 1024 was given it gave error, which can be seen by giving a reset to the board and checking the error messages
// while the model is getting created (ml.begin function call in setup)
// When you notice that the output values of the TFLite model are all zero, you should suspect that Arena size given is not enough
#define TENSOR_ARENA_SIZE 6*1024  // Since the size of TFLite model is around 104704 half of that is given as Arena size

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> ml1;

void setup() {
    Serial.begin(115200);
   
    ml1.begin(PolarNonPolarClassify_model);
}

float fResult[NUMBER_OF_OUTPUTS] = {0};
float fRes = NULL;

void loop() {

    //  Input = ['Mean of the integrated profile', 'Standard deviation of the integrated profile'
    //     'Excess kurtosis of the integrated profile', 'Skewness of the integrated profile 
    //     'Mean of the DM-SNR curve', 'Standard deviation of the DM-SNR curve'
    //    'Excess kurtosis of the DM-SNR curve', 'Skewness of the DM-SNR curve']
    // 
    float input1[] = {109.34375f ,	32.77156673f,	0.275441649f ,	2.679992894f ,	3.254180602f ,	21.39473588f ,	7.802422953f ,	65.06109868};
   // Excepted Output = 0

    float input2[] = {117.7109375f,	54.54787925f,	0.217564807f,	-0.033715544f,	1.404682274f ,	13.86714717f ,	12.26836746f ,	173.5870656f};
   //  Excepted Output = 0
    float input3[] = {20.3515625f ,	25.77171107f,	7.024644815f ,	56.11297239f ,	70.51254181f,	65.47230523f ,1.102049947f ,0.782055998f};
   // Excepted Output = 1

   
    initfResult(fResult);
    fRes = ml1.predict(input1, fResult);
    Serial.print("\nThe output value returned for input1 is:\n");
    Serial.println(fRes);
    displayOutput(fResult);  

    initfResult(fResult);
    fRes = ml1.predict(input2, fResult);
    Serial.print("\nThe output value returned for input2 is:\n");
    Serial.println(fRes);
    displayOutput(fResult);      
    Serial.println();

    initfResult(fResult);
    fRes = ml1.predict(input3, fResult);
    Serial.print("\nThe output value returned for input3 is:\n");
    Serial.println(fRes);
    displayOutput(fResult);    
    

    delay(5000); // 5 milliseconds of delay between two plots
}

void initfResult(float *fResult){
  
    for(int i = 0; i < NUMBER_OF_OUTPUTS; i++){
       fResult[i] = 0.0f;
    }
} // end of displayOutput()

void displayOutput(float *fResult){
  
    for(int i = 0; i < NUMBER_OF_OUTPUTS; i++){
        Serial.print(fResult[i]);
        Serial.print(" ");
    }
} // end of displayOutput()
