#!/usr/bin/env bash

README_PATH="$(dirname "${BASH_SOURCE[0]}")/README.md"

awk -F'|' 'NR>2 && $2 !~ /Total Problem Solved/ && $4 !~ /-/ {gsub(/ /, "", $4); sum_solve+= $4} NR>2 && $2 !~ /Total Problem Solved/ && $5 !~ /-/ {gsub(/ /, "", $5); sum_contest+= $5} END{print sum_solve, sum_contest}' "$README_PATH" > /tmp/totals.txt
read TOTAL_SOLVE TOTAL_CONTEST < /tmp/totals.txt

escaped_solve=$(printf "%s" "$TOTAL_SOLVE" | sed 's/[\/&]/\\&/g')
escaped_contest=$(printf "%s" "$TOTAL_CONTEST" | sed 's/[\/&]/\\&/g')

sed -i "s/^| Total Problem Solved .*/| Total Problem Solved |            | $TOTAL_SOLVE | $TOTAL_CONTEST |                                                               |/" "$README_PATH"

echo "Updated totals: Solve=$TOTAL_SOLVE, Contests=$TOTAL_CONTEST"
