## Optimized Pulsar Classification on Microcontrollers: Deep Learning on ESP32 with HTRU2 Dataset

#### Overview
This project integrates IoT and Edge Computing to deploy a deep learning classification model on the ESP32 microcontroller, focusing on the efficient classification of pulsar signals using the HTRU2 dataset. The model is optimized for resource-constrained devices, offering real-time, low-latency inference directly on the microcontroller without cloud dependency.

#### Objectives:

- Develop a deep learning classification model using the HTRU2 dataset.
- Convert the model to TensorFlow Lite format for deployment on ESP32.
- Deploy and test the model on ESP32, evaluating its performance for real-time classification of pulsar and non-pulsar signals.
  
#### Features:
- Edge Computing: Real-time data processing on ESP32 with minimal reliance on cloud services.
- Deep Learning: TensorFlow and Keras-based neural network model for classification.
- Data Privacy: Data remains local, enhancing privacy and reducing bandwidth usage.
- Optimized Inference: EloquentTinyML used for efficient inference on ESP32.

#### System Architecture:

- Data Input: Predefined attributes from the HTRU2 dataset.
- Model Training: Using TensorFlow/Keras in Python.
- Model Conversion: Exporting to TensorFlow Lite for ESP32 deployment.
- ESP32 Deployment: Running inference tasks using the EloquentTinyML library.
- Output: Serial output for pulsar classification results.

#### Dataset Details
HTRU2 Dataset contains high-frequency measurements for pulsar signal classification.

Attributes include mean, standard deviation, kurtosis, skewness, and signal-to-noise ratio.
Two classes:
0: Pulsar signals (polar).
1: Non-pulsar signals (nonpolar).

#### Requirements:
- Hardware
ESP32 Microcontroller for edge inference tasks.

- Software
Python 3.7.1 for preprocessing, model training, and testing.
Libraries: TensorFlow, Keras, Scikit-learn, Pandas, Seaborn, Matplotlib.

- Arduino IDE for programming the ESP32.

EloquentTinyML Library for TensorFlow Lite deployment.

#### Methodology:

- Data Preprocessing:
Encoding categorical data with LabelEncoder.
Standardizing features using StandardScaler.

- Model Design:
Input layer: Dense layer for receiving input features.
Hidden layers: Dense layers with ReLU activation.
Dropout layers for regularization.
Output layer: Binary classification (polar or nonpolar).

- ESP32 Deployment:
Convert the model to TensorFlow Lite.
Load the model on ESP32 using EloquentTinyML.

- Testing and Evaluation:
Evaluate model performance using accuracy, loss curves, and confusion matrix.
Validate inference on ESP32's serial monitor.

#### Results:
Accuracy: Achieved ~97% accuracy on the validation set after 9 epochs.
Loss Reduction: Significant reduction in training and validation loss over epochs.
Confusion Matrix: Demonstrated effective classification with minimal misclassifications.
ESP32 Performance: Low latency and efficient inference for real-time edge applications.
