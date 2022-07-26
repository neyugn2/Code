#!/bin/bash

echo "create new folder name:"
read name
mkdir $name
cp a.cpp $name
cd $name
touch a.inp a.out
