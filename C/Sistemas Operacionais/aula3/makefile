#!/bin/bash
################################
# @author: claudiorogerio
# year: 09.25.2022
################################

RESET="\033[0m"
BOLD="\033[1m"
YELLOW="\033[38;5;11m"
GREEN="\033[32m"
BLUE="\033[34m"
RED="\033[31m"

echo -e $BOLD "\n                 Makefile to gcc     \n" $RESET
sleep 1

cc=gcc
TARGET=$1
FILE_H=$2
DM=$((${#1}-2))	## tamanho do nome do arquivo 'menos 2' ou seja retira-se '.c'
OUT=${1:0:$DM}
LIBS=" -lncurses -lm -lpthread"
VERSION=-std=gnu11

echo -e $YELLOW [ PROPERTIES ] $RESET File: $TARGET
echo -e $YELLOW [ PROPERTIES ] $RESET Out :  $OUT
echo -e $YELLOW [ PROPERTIES ] $RESET Comp: $cc
echo -e $YELLOW [ PROPERTIES ] $RESET Libs: $LIBS
echo -e $YELLOW [ PROPERTIES ] $RESET Vers: $VERSION

echo -e $BLUE "[ COMPILING  ]" $RESET $cc -o $OUT $TARGET $FILE_H  $LIBS $VERSION
$cc -o $OUT $TARGET $FILE_H $LIBS $VERSION

echo -e $GREEN "[ EXECUTING  ]" $RESET ./$OUT $2 $3 $RESET "\n"
./$OUT $2 $3
