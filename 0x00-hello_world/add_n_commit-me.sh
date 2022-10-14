#!/bin/bash

# A bash script to add and commit all files tracked by git with the
# message "Initial commit"

git add -A

echo "################## STATUS ################"
git status
echo
echo

echo "################## COMMIT ################"
git commit -m "Initial commit"
echo
echo

echo "################### PUSH #################"
git push
echo
echo
