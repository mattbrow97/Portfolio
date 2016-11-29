#!/usr/bin/python

import sys

if(sys.argv==1) :

	fName=sys.argv
	f = open( fName, "r" )  # open file for reading (default)
	IDS = {}

	while  w :
		w = w.strip( ' \t\n')
		listSplits = w.split(" ", 1)
		IDS[int(listSplits[0])] = listSplits[1]
		
		listSort = IDS.keys()
		listSort.sort()

		w = f.readline()
	for i in listSort :
		print str(i), '', IDS[i]
else :

	import sys

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
