#!/usr/bin/python

f = open( "ids", "r" )  # open file for reading (default)

w = f.readline()
IDS = {}
while w :
	w = w.strip( ' \t\n' )
	listSplits = w.split(" ", 1)
	IDS[int(listSplits[0])] = listSplits[1]

	listSort = IDS.keys()
	listSort.sort()

	w = f.readline()
for i in listSort :
	print str(i), '', IDS[i]

f.close()
