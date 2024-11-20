#ifndef POLARNONPOLARCLASSIFY_MODEL_H
#define POLARNONPOLARCLASSIFY_MODEL_H

/*
 Author: Mouli Sankaran 
 CAUTION: This is an auto generated file.
 DO NOT EDIT OR MAKE ANY CHANGES TO IT.
 This model data was generated on Tue Nov 19 09:56:34 2024

 Tools used:
 Python:3.7.16 (default, Jan 17 2023, 16:06:28) [MSC v.1916 64 bit (AMD64)]
 Numpy:1.21.6
 TensorFlow:3.7.16 (default, Jan 17 2023, 16:06:28) [MSC v.1916 64 bit (AMD64)]
 Keras: 2.10.0

 Model details are:
 NUM_OF_EPOCHS = 10
 BATCH_SIZE    = 8
*/

const int DENSE1_SIZE = 24;
const int DENSE2_SIZE = 16;

const unsigned int PolarNonPolarClassify_model_len = 4592;
alignas(8) const unsigned char PolarNonPolarClassify_model[] = {
0x1c,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x14,0x00,0x20,0x00,
0x1c,0x00,0x18,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x00,0x00,
0x08,0x00,0x04,0x00,0x14,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x84,0x00,0x00,0x00,0xdc,0x00,0x00,0x00,0xdc,0x0b,0x00,0x00,
0xec,0x0b,0x00,0x00,0x8c,0x11,0x00,0x00,0x03,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xd6,0xf3,0xff,0xff,
0x0c,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x38,0x00,0x00,0x00,
0x0f,0x00,0x00,0x00,0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,
0x64,0x65,0x66,0x61,0x75,0x6c,0x74,0x00,0x01,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x98,0xff,0xff,0xff,0x0a,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x32,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0xe2,0xf4,0xff,0xff,0x04,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,
0x64,0x65,0x6e,0x73,0x65,0x5f,0x69,0x6e,0x70,0x75,0x74,0x00,
0x02,0x00,0x00,0x00,0x34,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0xdc,0xff,0xff,0xff,0x0d,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x13,0x00,0x00,0x00,0x43,0x4f,0x4e,0x56,0x45,0x52,0x53,0x49,
0x4f,0x4e,0x5f,0x4d,0x45,0x54,0x41,0x44,0x41,0x54,0x41,0x00,
0x08,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x08,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x13,0x00,0x00,0x00,
0x6d,0x69,0x6e,0x5f,0x72,0x75,0x6e,0x74,0x69,0x6d,0x65,0x5f,
0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x00,0x0e,0x00,0x00,0x00,
0xfc,0x0a,0x00,0x00,0xf4,0x0a,0x00,0x00,0xa4,0x0a,0x00,0x00,
0x88,0x0a,0x00,0x00,0x18,0x0a,0x00,0x00,0x08,0x07,0x00,0x00,
0xf8,0x00,0x00,0x00,0xa8,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,
0x98,0x00,0x00,0x00,0x90,0x00,0x00,0x00,0x88,0x00,0x00,0x00,
0x68,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x92,0xf5,0xff,0xff,
0x04,0x00,0x00,0x00,0x54,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,
0x08,0x00,0x0e,0x00,0x08,0x00,0x04,0x00,0x08,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x00,0x00,0x06,0x00,
0x08,0x00,0x04,0x00,0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0x00,0x10,0x00,0x0c,0x00,
0x08,0x00,0x04,0x00,0x0a,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x06,0x00,0x00,0x00,
0x32,0x2e,0x31,0x30,0x2e,0x30,0x00,0x00,0xf2,0xf5,0xff,0xff,
0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x31,0x2e,0x31,0x34,
0x2e,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x34,0xf0,0xff,0xff,0x38,0xf0,0xff,0xff,0x3c,0xf0,0xff,0xff,
0x40,0xf0,0xff,0xff,0x1e,0xf6,0xff,0xff,0x04,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x8e,0xe0,0xeb,0xbe,0x87,0x0c,0xf1,0xbe,
0x8e,0xe5,0x9e,0x3e,0x74,0x46,0xce,0xbe,0x49,0x04,0x22,0xbf,
0xfd,0x91,0xd2,0xbe,0xbc,0x63,0xe0,0x3e,0x6c,0xda,0xd1,0xbe,
0xbf,0x51,0x0d,0x3f,0x63,0x2a,0x21,0xbf,0x03,0x85,0x5b,0x3e,
0x2e,0x90,0xfc,0xbe,0x9a,0xf1,0xcb,0xbe,0x3a,0x89,0x03,0x3f,
0x93,0x1e,0xd9,0x3e,0xd6,0x90,0xd4,0xbe,0x6a,0xf6,0xff,0xff,
0x04,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0xee,0xd3,0x59,0x3e,
0x9a,0x2c,0xcd,0x3d,0xff,0x09,0x68,0x3e,0xe9,0xb6,0xe8,0x3e,
0x70,0x8a,0x70,0x3d,0x59,0xf9,0x08,0xbf,0x54,0xc7,0xa4,0x3e,
0x9c,0x65,0x4b,0x3e,0xdf,0x58,0x1f,0x3e,0xcf,0x6a,0x6b,0x3e,
0x9b,0x0b,0x3f,0xbd,0xf7,0x69,0x14,0xbe,0xe9,0x1b,0x18,0x3e,
0xd7,0x8d,0x5f,0x3e,0x0a,0x0a,0x98,0xbb,0x55,0x12,0xbb,0x3e,
0xe9,0x83,0xbb,0xbd,0x91,0x4c,0x03,0x3f,0x1b,0x12,0xab,0xbe,
0x9f,0xaf,0x5f,0xbe,0x9a,0x6d,0x65,0x3e,0x77,0xfc,0x7c,0xbe,
0x6e,0x4b,0x36,0x3e,0x10,0x1c,0xc5,0xbd,0xdf,0x76,0x2d,0x3e,
0xd2,0x51,0x29,0x3e,0x36,0x6e,0x59,0xbd,0x49,0x61,0xb6,0x3e,
0x50,0xd3,0x12,0xbe,0x6e,0x99,0xd6,0xbb,0x27,0x0f,0xa1,0x3e,
0x24,0xb2,0x24,0xbe,0xa4,0x13,0xdc,0x3d,0x2d,0x0d,0x4b,0x3e,
0x7a,0x10,0xe0,0x3d,0xad,0x91,0x09,0x3e,0x77,0x72,0xd2,0x3e,
0x11,0xd4,0x82,0x3e,0xe2,0xc6,0xf2,0x3d,0x1f,0x7c,0x50,0x3e,
0x76,0x69,0x11,0xbe,0x19,0x6b,0x00,0x3e,0x23,0x45,0x62,0xbe,
0x9e,0x2b,0xa7,0x3e,0x03,0x16,0x57,0x3e,0x7a,0x6d,0xce,0xbe,
0xac,0xfb,0xca,0xba,0xb2,0x99,0x93,0x3d,0x44,0xb4,0x05,0xbf,
0x34,0x69,0xec,0xbe,0x9e,0x34,0x1a,0x3d,0x01,0x69,0xbd,0xbd,
0xfa,0x5b,0x79,0x3c,0x02,0x57,0x05,0x3f,0xd4,0xe9,0xc6,0x3e,
0x28,0x87,0xcd,0x3e,0xe6,0xbc,0xab,0xbe,0xcc,0xc0,0x83,0xbf,
0xa7,0xcb,0x09,0x3d,0xba,0x07,0xe0,0xbe,0x16,0xf8,0x2c,0x3e,
0xfa,0xa0,0x4e,0x3b,0xe6,0xc7,0x69,0xbf,0xcf,0x20,0xef,0xbe,
0x81,0x9a,0x94,0xbe,0x49,0xd7,0x2a,0xbf,0x1c,0x2f,0xe1,0x3e,
0xfc,0xdf,0xfd,0x3e,0x04,0x1a,0xe9,0x3e,0x2f,0x3a,0x62,0xbe,
0xfd,0x9d,0xa3,0x3e,0xef,0xeb,0x01,0x3e,0x94,0xff,0xfe,0x3d,
0x5b,0xea,0x1f,0x3f,0x73,0xe0,0x46,0x3e,0x02,0x2e,0xbe,0x3e,
0xf2,0x4e,0xd1,0xbe,0x16,0x0a,0x00,0x3e,0x55,0xb3,0x15,0x3e,
0xcc,0xb0,0x06,0x3e,0xf2,0xd6,0x0b,0x3c,0x66,0x51,0x1e,0x3e,
0x75,0x02,0xe2,0x3e,0x62,0xa6,0xb0,0xbd,0x0f,0xb1,0x4b,0xbe,
0x58,0x39,0x5f,0xbd,0x74,0xa7,0xb9,0x3e,0x9f,0x86,0xc4,0x3e,
0xf0,0x14,0xea,0xbe,0x0d,0x68,0x0f,0x3f,0x69,0x13,0x01,0xbe,
0x06,0x18,0x3c,0x3e,0x41,0x00,0x10,0x3e,0x44,0x7d,0xa1,0x3b,
0x67,0x5f,0xa5,0xbe,0x87,0x92,0x95,0x3e,0x2d,0x5f,0x90,0x3d,
0xb8,0xda,0x10,0x3f,0x27,0xbc,0x83,0xbe,0x71,0xc6,0x5b,0xbd,
0x14,0x4e,0xa2,0xbe,0xed,0x3e,0x0b,0xbe,0x98,0x70,0xa0,0x3e,
0x26,0xfe,0x99,0x3d,0x71,0xec,0x58,0x3d,0xdc,0x86,0x01,0xbe,
0x7e,0xf5,0xae,0x3e,0x17,0xae,0x9a,0x3e,0x82,0x18,0x4d,0x3e,
0xb0,0x3e,0x8e,0x3e,0x95,0xb9,0xa7,0x3e,0x44,0x71,0x9e,0xbe,
0xa9,0x44,0xa4,0xbe,0x02,0x7e,0x32,0x3f,0x81,0x36,0x1b,0xbd,
0xff,0x40,0x8c,0xbd,0x74,0x30,0xe5,0x3e,0x5e,0x14,0x98,0xbe,
0x4d,0xe0,0x26,0x3e,0xb0,0x11,0x40,0xbd,0x5b,0x16,0xb6,0x3e,
0x28,0x62,0x0d,0x3f,0xe8,0x80,0x90,0x3e,0xc0,0x60,0x60,0x3e,
0x94,0x87,0x1c,0x3d,0xf0,0x22,0xb9,0xbe,0x51,0xf1,0xef,0x3e,
0x40,0x10,0x91,0x3e,0xcc,0xb5,0x39,0x3e,0xa2,0x84,0x59,0x3d,
0x8b,0xbd,0x61,0x3c,0x37,0xee,0x05,0xbe,0x38,0x93,0x00,0xbe,
0xf2,0x85,0xc3,0x3e,0x8d,0xec,0x2c,0x3e,0x0a,0x1e,0xa3,0x3d,
0x5c,0xb3,0x5c,0x3e,0x71,0xf1,0x63,0x3f,0x3a,0x77,0x54,0xbe,
0x28,0xee,0x0f,0x3d,0x8c,0xc0,0x93,0x3d,0xf2,0x46,0x81,0xbe,
0x71,0x84,0x7d,0x3e,0x2f,0xf0,0xa3,0xbe,0x5d,0xd7,0x0a,0xbe,
0x21,0xa9,0x67,0xbe,0x4c,0x75,0xa4,0xbe,0x9b,0x11,0x9d,0xbd,
0xfd,0xa9,0x9f,0xbe,0x7e,0xc3,0x00,0x3e,0x0e,0x74,0xf4,0x3e,
0x64,0x16,0x36,0x3e,0xc8,0xd6,0x23,0xbf,0x6a,0xb9,0x7d,0xbe,
0x31,0x1d,0xff,0xbc,0x56,0x64,0xf4,0xbe,0xdb,0xc5,0x18,0xbe,
0xad,0x03,0xf5,0xbe,0x86,0x5f,0xda,0x3d,0xc4,0x1d,0x67,0xbe,
0x1b,0x0c,0x4d,0x3e,0x01,0x9d,0x1c,0xbf,0xc1,0xeb,0x98,0x3e,
0x3b,0x71,0xa3,0x3d,0x7b,0x3a,0x24,0x3c,0x4b,0x15,0x63,0x3e,
0x65,0xc2,0x65,0x3e,0xff,0xc3,0xa1,0x3e,0x59,0x24,0x6f,0xbd,
0x25,0x4f,0xc6,0x3e,0xc6,0xef,0xc8,0x3e,0xc4,0x91,0x3f,0x3e,
0x65,0xf8,0x8f,0xbe,0xd0,0x39,0x33,0x3e,0xec,0xf0,0xba,0x3b,
0x4e,0xeb,0x58,0xbe,0xe6,0xa3,0x84,0x3d,0xb8,0xa9,0xb3,0x3e,
0xaa,0xec,0x27,0x3e,0xae,0xad,0x11,0xbe,0xa9,0xac,0x8d,0x3e,
0x40,0xbb,0x1e,0x3d,0xa8,0x18,0x84,0x3e,0x01,0xdb,0x09,0x3e,
0xa8,0xaa,0x11,0xbe,0x88,0xc0,0x01,0x3f,0xbb,0x75,0x38,0x3e,
0x06,0xb7,0xb7,0x3d,0x87,0x38,0xac,0x3e,0x54,0xcb,0x09,0xbe,
0x4e,0x37,0xe1,0xbd,0x33,0x08,0x90,0xbe,0xf0,0xd4,0x38,0x3d,
0x41,0xa0,0x40,0xbf,0x57,0x3e,0x78,0x3e,0xad,0x9d,0x5b,0xbe,
0x2a,0x47,0x86,0xbe,0x94,0x73,0xaf,0x3c,0xf6,0x01,0xbe,0xbd,
0xa3,0x68,0x9f,0x3e,0x4b,0xe7,0x14,0xbf,0x1b,0x8c,0x33,0xbf,
0xf6,0xf7,0xa5,0x3d,0x96,0xdc,0x18,0x3d,0xb5,0xa6,0x94,0x3e,
0x75,0x5e,0xd0,0xbe,0x9e,0x91,0xd1,0xbd,0xa3,0x85,0xd5,0xbd,
0x2d,0xfb,0x2c,0xbc,0x9d,0x9b,0x1e,0xbf,0xcb,0x62,0x3b,0x3d,
0xce,0x98,0xf6,0x3e,0x51,0xd8,0xfa,0x3e,0x1d,0x0e,0xc6,0xbd,
0xdf,0xf9,0xaa,0x3d,0x77,0x34,0xc6,0x3e,0x68,0x6b,0x1f,0x3e,
0xc3,0x01,0x91,0x3e,0x9b,0xd7,0x8a,0xbb,0xa9,0x19,0xb4,0x3e,
0xd9,0x00,0x2f,0xbd,0xd3,0xe2,0xbb,0xbe,0xfb,0x47,0x4e,0xbb,
0x22,0x54,0x82,0x3e,0xdf,0x02,0xa4,0x3e,0x42,0x64,0x2b,0xbe,
0xaf,0x91,0x99,0x3e,0xa9,0xe7,0x05,0xbe,0x35,0x0f,0x2b,0xbe,
0xcc,0xb8,0x8c,0x3e,0xe1,0x84,0x51,0x3e,0xa3,0x23,0x9b,0x3d,
0x38,0x4b,0x4f,0xbe,0x20,0x50,0x84,0x3e,0x1a,0x3f,0x21,0xbe,
0xca,0xf9,0x05,0xbe,0x52,0xc2,0xaf,0x3e,0xa6,0xe5,0xee,0xbe,
0x98,0xf2,0xab,0xbd,0x6f,0x97,0x11,0x3e,0x95,0x5f,0x75,0xbd,
0xa2,0x07,0xf1,0xbe,0xff,0x79,0x08,0x3e,0xa6,0x60,0xf6,0xbd,
0x3e,0x78,0xab,0x3e,0x62,0x8f,0x6a,0xbe,0x21,0xad,0xfd,0x3d,
0x3c,0xcf,0xbc,0x3d,0x0f,0x09,0x3d,0xbf,0x50,0x6e,0x0f,0xbf,
0x96,0x53,0x0d,0x3d,0xec,0xcb,0x40,0xbf,0xc9,0x17,0x5e,0x3e,
0x27,0xd2,0x74,0xbe,0xee,0x4a,0xc7,0xbe,0x8c,0x1f,0xe3,0xbe,
0xaf,0x73,0x9d,0x3e,0x50,0xf0,0xfe,0xbe,0x98,0xac,0x09,0x3f,
0xe3,0xf8,0x09,0x3d,0x31,0xb2,0xc8,0xbe,0x3e,0xf1,0x7d,0x3d,
0x57,0x2c,0x02,0x3e,0x02,0x62,0xbc,0x3e,0xc9,0x84,0x91,0x3d,
0xd7,0xe2,0x20,0x3f,0x27,0x3d,0xd7,0xbc,0xc7,0x3c,0x94,0x3c,
0x34,0x7e,0x81,0x3e,0xdf,0x71,0xee,0xbe,0x15,0xc4,0x18,0x3e,
0xe1,0xdf,0x8b,0xbd,0xf3,0x9f,0x5e,0x3e,0xf5,0x4e,0xcb,0x3e,
0xab,0x27,0x0c,0x3c,0x25,0x85,0x76,0x3d,0x36,0x47,0xb1,0x3e,
0x58,0x3e,0x33,0x3e,0x60,0x2b,0x02,0x3d,0x35,0xf3,0x81,0xbd,
0x24,0x8c,0xd5,0xbd,0x84,0x63,0x7c,0x3e,0x79,0x39,0x51,0xbe,
0x61,0x5b,0x89,0xbe,0x49,0xa5,0xcc,0x3e,0x86,0x0d,0xef,0xbd,
0x12,0x2e,0x30,0xbe,0x39,0x5d,0x2d,0xbe,0x5a,0x70,0x09,0xbe,
0x16,0x1e,0xda,0x3e,0xbb,0x3f,0x0c,0x3e,0x06,0x03,0xfb,0xbd,
0x94,0xde,0x3e,0xbe,0x1e,0xe3,0xbf,0xbd,0xf2,0xba,0x1c,0x3f,
0xee,0x2f,0xf9,0x3d,0x89,0x16,0xc8,0x3c,0x76,0x6e,0x29,0x3e,
0x02,0x15,0x35,0x3e,0x85,0x86,0xe6,0x3e,0x0d,0xd3,0xa2,0x3e,
0x9f,0xf3,0x9c,0x3e,0x06,0xb9,0x39,0x3f,0x52,0xd4,0xf9,0xbd,
0x2f,0xae,0xc7,0x3d,0x70,0x97,0x3a,0x3f,0xfb,0x2a,0xf3,0xbe,
0x97,0x32,0x3a,0x3c,0x75,0xc6,0xc4,0x3d,0x49,0xea,0x9f,0xbd,
0x52,0x02,0x04,0x3e,0x86,0x46,0xb3,0xbe,0x6f,0xcd,0x55,0xbd,
0xb5,0xb0,0xbb,0xbe,0xf2,0x50,0xfd,0xbd,0xcb,0xfc,0x37,0x3e,
0x65,0xd1,0x49,0xbe,0xf3,0xb2,0xc3,0xbe,0x18,0x59,0x25,0x3e,
0xe1,0xd9,0x38,0xbe,0x1f,0xce,0x15,0xbe,0x84,0x5d,0x7e,0xbe,
0x01,0x24,0x67,0xbe,0x9a,0xb6,0xf0,0x3c,0xd8,0x65,0xa5,0xbe,
0x6d,0x23,0x95,0x3d,0xa7,0x32,0xcf,0x3b,0x28,0xef,0x26,0x3e,
0x3b,0x7f,0x98,0xbe,0xf8,0x0f,0x80,0x3e,0xfb,0x36,0x99,0xbe,
0xc7,0xb3,0x0a,0xbe,0xc6,0xa6,0x03,0xbe,0xc1,0x41,0x80,0xbe,
0x7a,0xdb,0xf7,0xbd,0x75,0x5d,0x9a,0xbb,0x20,0xba,0xb7,0xbe,
0x12,0x78,0xa9,0xbe,0xa9,0xe4,0x93,0xbe,0x42,0x2b,0xd6,0xbe,
0xc5,0x9c,0x0d,0xbe,0x17,0x83,0xad,0x3e,0xa6,0xa4,0xf1,0xbe,
0x1e,0x91,0x92,0x3e,0xcc,0x9c,0xf5,0xbe,0xe9,0x7e,0x94,0xbe,
0x05,0x52,0x61,0x3e,0xac,0xc2,0xf5,0xbd,0x37,0xa5,0xce,0x3d,
0x7b,0x2b,0x5e,0x3e,0xb8,0x61,0xe1,0xbe,0xb5,0x8d,0x0a,0xbf,
0x2a,0xab,0x1a,0xbe,0x17,0xf7,0xa1,0xbe,0xe2,0x38,0x91,0x3e,
0xee,0xfc,0x82,0x3e,0x1c,0x63,0xb1,0x3e,0x9d,0x34,0xc2,0xbd,
0x38,0xd4,0x64,0x3e,0x1c,0xce,0xb9,0x3d,0x31,0x57,0xb8,0x3e,
0xf7,0xf5,0xe0,0x3d,0x6f,0xac,0xaf,0x3e,0x30,0x50,0x3b,0x3e,
0xc4,0xb7,0x20,0xbe,0x8c,0x3b,0x39,0xbe,0xc1,0x56,0x92,0x3e,
0x5c,0xad,0x0e,0x3e,0x3c,0xad,0xd4,0x3d,0x13,0xa9,0xae,0x3e,
0x2b,0x56,0xd0,0x3e,0x60,0x1c,0x00,0xbe,0xc5,0xff,0xc7,0xbc,
0x60,0x31,0xaf,0xbb,0xca,0x16,0x9a,0x3e,0xf3,0x5a,0x6d,0x3e,
0x91,0x09,0x82,0xbe,0x9e,0x63,0x38,0x3f,0xa7,0x4c,0x54,0xbd,
0x55,0x0e,0x83,0x3e,0x82,0x99,0xa8,0x3e,0xb8,0x5e,0x9e,0x3d,
0xed,0xf4,0x57,0x3e,0x67,0x0d,0xa5,0xbe,0x76,0xfc,0xff,0xff,
0x04,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x7c,0xd8,0x51,0xbd,
0x74,0xaf,0x46,0xbe,0x6d,0xbb,0x17,0xbf,0x85,0xcd,0xa9,0xbe,
0xf8,0x0c,0x94,0xbd,0x59,0xe0,0x79,0x3e,0xee,0x8c,0x6a,0xbe,
0x98,0x40,0x0d,0xbd,0xe8,0xaf,0x86,0xbe,0x51,0x8d,0xb3,0x3c,
0x89,0xd4,0xd0,0xbe,0xac,0x81,0x6e,0xbe,0xe4,0x4a,0x77,0xbe,
0xcd,0x93,0x4d,0xbf,0xa3,0xeb,0x99,0xbe,0x92,0x68,0xe8,0x3d,
0xf2,0x50,0x2d,0x3e,0xfa,0xeb,0x94,0x3e,0x07,0x41,0x9d,0xbe,
0x50,0xd6,0x89,0x3e,0x3b,0x9d,0x31,0xbc,0x40,0x6e,0xc3,0xbe,
0x47,0xb6,0x84,0x3e,0x0d,0x4b,0xda,0xbd,0x40,0xae,0x59,0x3e,
0x05,0x9e,0xde,0x3e,0xcf,0x39,0x22,0xbf,0x25,0x50,0x08,0xbf,
0xa8,0x08,0x14,0x3e,0x05,0x6a,0xb5,0xbe,0x54,0x65,0xd9,0xbc,
0xce,0x4a,0xb2,0xbe,0xc0,0xa0,0xac,0xbe,0x16,0x1a,0x26,0xbe,
0x24,0x46,0xf3,0x3c,0x3f,0x6f,0xe4,0x3d,0x5c,0xda,0xb5,0x3e,
0x9a,0x52,0x68,0x3e,0x8e,0xcb,0x53,0x3e,0x9c,0x91,0xb4,0xbc,
0x5b,0x9b,0xa6,0x3c,0x80,0x86,0x78,0x3e,0x57,0x14,0x24,0x3f,
0xfe,0xb3,0x80,0x3e,0x5d,0x86,0x3e,0x3e,0xf6,0x22,0x67,0x3e,
0xc6,0x9a,0x89,0xbe,0xd6,0xd3,0xbe,0x3e,0x7f,0x55,0x47,0x3f,
0xa3,0x48,0x11,0x3e,0xc6,0xb4,0x06,0xbf,0xa5,0x56,0xf9,0xbe,
0x2d,0xb7,0x6c,0x3e,0xf4,0x53,0x20,0xbe,0x88,0x9a,0x74,0x3e,
0x69,0x38,0x8d,0x3d,0xa7,0x8f,0x08,0xbf,0x9d,0x64,0xb5,0xbe,
0xe5,0xc2,0x92,0x3d,0x64,0xe9,0x7b,0x3e,0xd2,0x2d,0x0d,0xbd,
0x5d,0xc9,0x97,0xbd,0x94,0x87,0x7a,0x3e,0x63,0xc1,0x32,0x3d,
0x2b,0xe4,0x8f,0xbe,0x45,0x42,0x1f,0xbf,0xfe,0x2f,0xef,0xbe,
0x85,0x83,0x3c,0xbe,0xa8,0xb3,0x52,0x3e,0x7d,0x2a,0xe2,0xbe,
0xc7,0x4a,0x85,0xbd,0x85,0x23,0x23,0x3e,0xb4,0x15,0x93,0xbd,
0x8d,0xc1,0xfd,0xbe,0x91,0x98,0x38,0xbf,0x61,0x67,0x04,0xbf,
0xa3,0xa2,0xc8,0x3d,0x76,0x2f,0x07,0xbd,0xc8,0x64,0xcf,0xbd,
0xe6,0xd5,0xf4,0x3d,0xe5,0x87,0x18,0x3f,0xad,0xc9,0x06,0xbd,
0xe1,0xc5,0x7c,0xbf,0xb0,0x3f,0x95,0x3e,0xde,0x31,0x1b,0x3d,
0x8e,0xa7,0x8a,0x3e,0x34,0x55,0xb6,0x3d,0xa6,0x2e,0x72,0xbd,
0x00,0x39,0x0a,0xbe,0x02,0xad,0xe4,0xbe,0xbb,0xac,0x37,0xbe,
0x31,0x57,0x86,0xbe,0x5d,0x5d,0x52,0xbe,0x9f,0xb6,0x10,0x3e,
0x4d,0x00,0x39,0x3d,0xa5,0xf7,0x27,0x3e,0x88,0x4e,0xb5,0xbe,
0x4a,0xa9,0xa2,0xbe,0xb4,0xc1,0xe5,0x3d,0x68,0xf5,0x8e,0xbd,
0x8e,0x98,0x55,0x3d,0x76,0x71,0x9b,0xbd,0xec,0x19,0x47,0xbe,
0xe4,0x66,0xe0,0x3d,0xbd,0x13,0x0a,0x3e,0x8d,0xc9,0xbe,0xbd,
0xe9,0xf5,0x29,0xbf,0x77,0x94,0x3d,0xbe,0x24,0x39,0xb5,0x3e,
0xbf,0x40,0x40,0x3e,0x02,0xee,0x5e,0xbe,0xe5,0x89,0xa2,0xbb,
0x0d,0xdc,0xc9,0x3c,0x4f,0x9f,0x26,0xbe,0x2b,0xdb,0xde,0xbe,
0xca,0xe4,0xcb,0xbd,0x48,0x63,0x5e,0x3e,0x3d,0x82,0x2a,0xbf,
0x4a,0x87,0x83,0xbe,0x3f,0xfa,0xc0,0xbe,0x80,0x23,0x89,0xbd,
0x86,0xe2,0x92,0xbe,0xca,0xba,0xf6,0xbe,0x06,0xbf,0x1a,0xbf,
0x0a,0xf7,0x18,0x3e,0xaf,0x49,0x51,0xbe,0xef,0x9d,0x35,0x3d,
0x08,0x2d,0x50,0xbe,0xfa,0x1d,0xeb,0xbd,0x51,0x77,0x0d,0x3e,
0x74,0xd2,0xfc,0x3d,0x55,0x67,0x8e,0x3d,0x18,0x8b,0x73,0xbd,
0xb5,0x95,0x9c,0x3e,0x49,0x7a,0xcb,0x3e,0x4c,0x62,0xd6,0xbe,
0xd5,0x0a,0xb9,0xbe,0x39,0x5c,0xf0,0xbd,0x45,0x0e,0x0d,0xbf,
0xa1,0xaa,0x9d,0xbe,0x54,0x8c,0xb7,0x3d,0x1a,0x24,0x84,0xbe,
0x91,0x29,0x9e,0xbe,0xd7,0x41,0x26,0x3e,0x2c,0x37,0xa5,0x3e,
0x38,0x60,0xc2,0xbe,0x15,0x3e,0x8a,0x3e,0x23,0x66,0x67,0x3e,
0xe1,0x14,0x35,0xbe,0x54,0xac,0x00,0xbe,0x01,0x01,0x2f,0xbe,
0x96,0x5a,0x08,0xbf,0x5e,0x59,0xcb,0xbd,0xf7,0x47,0xcc,0x3b,
0x9d,0x55,0xcd,0x3e,0x81,0x92,0x11,0xbe,0x4c,0x06,0xb1,0xbe,
0x00,0x3e,0xf6,0xbd,0x4c,0x81,0x87,0xbe,0x71,0x38,0xa2,0xbe,
0xce,0xf3,0xdc,0x3e,0x79,0x21,0xa1,0x3e,0x80,0x4c,0x1c,0xbf,
0x09,0x63,0x27,0xbf,0x59,0x6c,0xed,0x3d,0xe2,0xee,0x1a,0xbe,
0xf1,0x00,0x55,0x3e,0xbe,0x22,0x89,0xbd,0x2c,0x27,0x1a,0xbe,
0x25,0xca,0x8c,0x3e,0xe1,0x99,0x07,0x3f,0xe3,0x85,0x92,0x3d,
0x6d,0x73,0x89,0x3e,0x51,0x36,0xac,0xbd,0x0a,0x50,0x6f,0x3e,
0x41,0x02,0xf3,0xbe,0x91,0x6d,0x57,0xbb,0xf1,0x04,0xd1,0xbe,
0xab,0xa6,0x48,0xbe,0xad,0xe5,0xe9,0x3e,0xe8,0x20,0x85,0xbe,
0x7e,0xc7,0x92,0x3e,0xe3,0xb0,0x7e,0xbe,0x59,0x84,0x4f,0x3c,
0x40,0xcf,0x75,0xbd,0x25,0x98,0x27,0xbe,0xd9,0x7c,0x23,0x3f,
0x82,0x69,0xf6,0x3c,0xa2,0xbf,0x80,0x3e,0x57,0xce,0x42,0xbe,
0x82,0x46,0x75,0xbd,0xf6,0x95,0xbe,0xbc,0x82,0xff,0xff,0xff,
0x04,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0xad,0x54,0x9c,0xbe,
0x53,0xe2,0x20,0x3e,0xf8,0x12,0x03,0x3e,0xab,0x29,0x79,0x3d,
0x7d,0x88,0xe7,0x3d,0x60,0xa5,0x30,0x3e,0x8b,0xaa,0x02,0x3e,
0x2c,0x42,0x57,0x3e,0xb8,0x3d,0x23,0x3e,0xcf,0x1b,0x59,0x3e,
0xdd,0xa0,0xc1,0xbd,0xab,0x13,0x61,0xbe,0x56,0x26,0x25,0xbe,
0xa6,0x0d,0x9d,0xbc,0x59,0x2d,0x48,0x3e,0x74,0x7e,0x0f,0x3e,
0xc2,0xbd,0x33,0xbd,0x99,0xb3,0x5f,0x3e,0x8b,0x36,0x03,0x3e,
0x45,0x46,0x8f,0x3d,0xf1,0x90,0x12,0x3e,0xff,0x0d,0xd9,0xbd,
0xbf,0x78,0xb9,0xbd,0xd3,0x12,0x21,0x3e,0xee,0xff,0xff,0xff,
0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xfc,0x6b,0x7a,0xbe,
0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,0x06,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0xa3,0x84,0x07,0xbd,
0x14,0x9e,0x99,0x3c,0x22,0xc7,0xda,0x3d,0xcc,0x52,0x23,0xbb,
0x94,0xda,0x11,0xbd,0x5c,0xc9,0x66,0x3d,0x65,0xaa,0x29,0x3d,
0xa4,0x9e,0x2a,0x3d,0xce,0xc9,0xa1,0x3d,0xf3,0xd7,0x2a,0x3d,
0x51,0x9d,0x41,0xbc,0x82,0x27,0x8f,0x3d,0x8e,0x25,0x5c,0x3d,
0x17,0x1c,0x69,0xbd,0xfd,0x67,0xab,0x3d,0xc1,0xfe,0x67,0xbb,
0x78,0xfa,0xff,0xff,0x7c,0xfa,0xff,0xff,0x0f,0x00,0x00,0x00,
0x4d,0x4c,0x49,0x52,0x20,0x43,0x6f,0x6e,0x76,0x65,0x72,0x74,
0x65,0x64,0x2e,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x00,0x00,0x0e,0x00,0x18,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,
0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x1c,0x00,0x00,0x00,0x08,0x01,0x00,0x00,0x0c,0x01,0x00,0x00,
0x10,0x01,0x00,0x00,0x04,0x00,0x00,0x00,0x6d,0x61,0x69,0x6e,
0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xb0,0x00,0x00,0x00,
0x68,0x00,0x00,0x00,0x34,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x00,0x00,0x0a,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,
0x0a,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x9a,0xff,0xff,0xff,
0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x0c,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x24,0xfb,0xff,0xff,0x01,0x00,0x00,0x00,
0x09,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x06,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xca,0xff,0xff,0xff,
0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0xba,0xff,0xff,0xff,0x00,0x00,0x00,0x01,
0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
0x07,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x0e,0x00,0x16,0x00,0x00,0x00,0x10,0x00,0x0c,0x00,
0x0b,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x00,0x00,0x00,0x08,0x18,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x00,0x00,0x06,0x00,0x08,0x00,0x07,0x00,0x06,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x07,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,
0x04,0x04,0x00,0x00,0x94,0x03,0x00,0x00,0x24,0x03,0x00,0x00,
0xd0,0x02,0x00,0x00,0x88,0x02,0x00,0x00,0x3c,0x02,0x00,0x00,
0xf0,0x01,0x00,0x00,0x68,0x01,0x00,0x00,0xd8,0x00,0x00,0x00,
0x60,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x3e,0xfc,0xff,0xff,
0x00,0x00,0x00,0x01,0x14,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x1c,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x28,0xfc,0xff,0xff,0x19,0x00,0x00,0x00,0x53,0x74,0x61,0x74,
0x65,0x66,0x75,0x6c,0x50,0x61,0x72,0x74,0x69,0x74,0x69,0x6f,
0x6e,0x65,0x64,0x43,0x61,0x6c,0x6c,0x3a,0x30,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x96,0xfc,0xff,0xff,0x00,0x00,0x00,0x01,0x14,0x00,0x00,0x00,
0x1c,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,
0x50,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0x01,0x00,0x00,0x00,0x80,0xfc,0xff,0xff,0x34,0x00,0x00,0x00,
0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,
0x65,0x6e,0x73,0x65,0x5f,0x32,0x2f,0x4d,0x61,0x74,0x4d,0x75,
0x6c,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,
0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x32,0x2f,0x42,0x69,0x61,
0x73,0x41,0x64,0x64,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x0a,0xfd,0xff,0xff,
0x00,0x00,0x00,0x01,0x14,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x1c,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x68,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x10,0x00,0x00,0x00,
0xf4,0xfc,0xff,0xff,0x4c,0x00,0x00,0x00,0x73,0x65,0x71,0x75,
0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,
0x5f,0x31,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x3b,0x73,0x65,
0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,
0x73,0x65,0x5f,0x31,0x2f,0x52,0x65,0x6c,0x75,0x3b,0x73,0x65,
0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,
0x73,0x65,0x5f,0x31,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,
0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x96,0xfd,0xff,0xff,0x00,0x00,0x00,0x01,
0x14,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0x18,0x00,0x00,0x00,0x80,0xfd,0xff,0xff,
0x46,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x4d,0x61,0x74,
0x4d,0x75,0x6c,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x52,0x65,0x6c,
0x75,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,
0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x42,0x69,0x61,0x73,0x41,
0x64,0x64,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x18,0x00,0x00,0x00,0x86,0xfe,0xff,0xff,0x00,0x00,0x00,0x01,
0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x07,0x00,0x00,0x00,
0x28,0x00,0x00,0x00,0xf4,0xfd,0xff,0xff,0x19,0x00,0x00,0x00,
0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,
0x65,0x6e,0x73,0x65,0x5f,0x32,0x2f,0x4d,0x61,0x74,0x4d,0x75,
0x6c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0xce,0xfe,0xff,0xff,0x00,0x00,0x00,0x01,
0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x06,0x00,0x00,0x00,
0x28,0x00,0x00,0x00,0x3c,0xfe,0xff,0xff,0x19,0x00,0x00,0x00,
0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,
0x65,0x6e,0x73,0x65,0x5f,0x31,0x2f,0x4d,0x61,0x74,0x4d,0x75,
0x6c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x18,0x00,0x00,0x00,0x16,0xff,0xff,0xff,0x00,0x00,0x00,0x01,
0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
0x24,0x00,0x00,0x00,0x84,0xfe,0xff,0xff,0x17,0x00,0x00,0x00,
0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,
0x65,0x6e,0x73,0x65,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x00,
0x02,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x5a,0xff,0xff,0xff,0x00,0x00,0x00,0x01,0x10,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0xc8,0xfe,0xff,0xff,0x27,0x00,0x00,0x00,0x73,0x65,0x71,0x75,
0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,
0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x2f,0x52,0x65,0x61,
0x64,0x56,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x4f,0x70,0x00,
0x01,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0xaa,0xff,0xff,0xff,
0x00,0x00,0x00,0x01,0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x18,0xff,0xff,0xff,
0x29,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x32,0x2f,0x42,
0x69,0x61,0x73,0x41,0x64,0x64,0x2f,0x52,0x65,0x61,0x64,0x56,
0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x4f,0x70,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x16,0x00,
0x18,0x00,0x14,0x00,0x00,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x16,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x84,0xff,0xff,0xff,
0x29,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x31,0x2f,0x42,
0x69,0x61,0x73,0x41,0x64,0x64,0x2f,0x52,0x65,0x61,0x64,0x56,
0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x4f,0x70,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x16,0x00,
0x1c,0x00,0x18,0x00,0x00,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,
0x00,0x00,0x00,0x00,0x08,0x00,0x07,0x00,0x16,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x14,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x08,0x00,0x00,0x00,
0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,
0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,0x64,0x65,0x66,0x61,
0x75,0x6c,0x74,0x5f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x69,0x6e,
0x70,0x75,0x74,0x3a,0x30,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xf4,0xff,0xff,0xff,
0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x0c,0x00,0x0c,0x00,
0x0b,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,
0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x09
};

#endif //POLARNONPOLARCLASSIFY_MODEL_H