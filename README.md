# Running LightGBM with Webassembly
A messy example of how to compile a lightgbm model to webassembly for in browser inference

## Train and save model
As in lgb.py you train a model and save to txt (model.txt)

## Convert model
- Using the package Treelite, convert the LightGBM model to a c
- Unzip uncompiled model
- Add pred function to bottom of main.c, this allows for passing many rows of data for inference from JS file

## Compile model
Compile model using emscripten as exemplified in compile.sh

## Perform inference
One can then perform inference in a browser using the model as shown in test.js
