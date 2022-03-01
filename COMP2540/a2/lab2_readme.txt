Sartaj Sidhu 110039107

#2 outputs
Start: 0, End: 0, maxSum: 0 MCS: Value 0 by definition
Start: -1, End: -1, maxSum: 0 MCS: Value 0 by definition
Start: 1, End: 1, maxSum: 1 MCS: 1
Start: 1, End: 1, maxSum: 1 MCS: 1
Start: 1, End: 2, maxSum: 5 MCS: 2,3
Start: 1, End: 2, maxSum: 5 MCS: 2,3
Start: 2, End: 4, maxSum: 4 MCS: 2,-1,3
Start: 2, End: 4, maxSum: 4 MCS: 2,-1,3
Start: 4, End: 5, maxSum: 5 MCS: 3,2
Start: 4, End: 5, maxSum: 5 MCS: 3,2

#3 outputs
Start: 0, End: 0, maxSum: 0 MCS: Value 0 by definition, Iterations: 15
Start: -1, End: -1, maxSum: 0 MCS: Value 0 by definition, Iterations: 5
Start: 1, End: 1, maxSum: 1 MCS: 1, Iterations: 15
Start: 1, End: 1, maxSum: 1 MCS: 1, Iterations: 5
Start: 1, End: 2, maxSum: 5 MCS: 2,3, Iterations: 10
Start: 1, End: 2, maxSum: 5 MCS: 2,3, Iterations: 4
Start: 2, End: 4, maxSum: 4 MCS: 2,-1,3, Iterations: 10
Start: 2, End: 4, maxSum: 4 MCS: 2,-1,3, Iterations: 4
Start: 4, End: 5, maxSum: 5 MCS: 3,2, Iterations: 15
Start: 4, End: 5, maxSum: 5 MCS: 3,2, Iterations: 5

#5
For the brute data graph the brute iterations is always greater. 
For the improved data graphe the improved iterations is always greater.

for patterns I noticed that the brute data max iterations increases by n+1 
example starts at 10,15,21,28
increases by 5,6,7

for the improved data it just increases by 1 
example starts at 4,5,6,7
increases by 1,1,1