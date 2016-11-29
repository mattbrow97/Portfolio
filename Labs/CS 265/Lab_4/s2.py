#!/usr/bin/python

f = open( "students.csv", "r" )  # open file for reading (default)

w = f.readline()
while w :
	w = w.strip( ' \t\n' )
	noNum= w.strip('123456789, ')
	noName= w.strip('qwertyuiopasdfghjklzxcvbnm, ')
	numList = noName.split(",")
	numSum = 0
	for i in numList :
		numSum += float(i)
		numTerms = float(len(numList))
		adv = (numSum / numTerms)
				
	print noNum ,'', adv
	w = f.readline()

f.close()

