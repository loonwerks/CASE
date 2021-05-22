#!/usr/bin/env bash
set -e
SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
AADL_DIR=$SCRIPT_HOME/..
ROOT_DIR=$SCRIPT_HOME/../..

PROJ_HOME=$ROOT_DIR/hamr/slang/src/main

mkdir $PROJ_HOME/data/pfc/PFC

$SIREUM_HOME/bin/sireum tools bcgen \
  --mode json,dot \
  --name Mission \
  --output-dir $AADL_DIR/data \
  $AADL_DIR/data/Mission.sc

$SIREUM_HOME/bin/sireum tools bcgen \
  --mode program \
  --package pfc.PFC \
  --name MissionBitCodec \
  --traits art.DataContent \
  --output-dir $PROJ_HOME/data/pfc/PFC \
  $AADL_DIR/data/Mission.sc