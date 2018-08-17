#!/bin/bash
echo "what is your name?" 
read NAME
echo "YOU ARE $NAME"
mkdir $NAME
cd $NAME
touch $NAME.cpp
echo 'All set!!'


