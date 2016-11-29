#!/bin/bash
# count.bash - counts the number of lines and words in a file
#
# Matthew Brower
#	10/02
# 
# Platform: Linux 4.4.0-36-generic x86_64 
# 
# EDITOR: tabstop=2, cols=80
# 
# 
#

for t in *; do
	 wc -l -w "$t"
done
