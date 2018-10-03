#!/usr/bin/env python
from sys import argv as argv
if len(argv)<>2:
    print "you must give a file name as parameter"
    exit(1)
    
fin = open(argv[1])
#replacing tbular and space by &
header=fin.readline().strip("#").split()
head = reduce(lambda x,y: x+" & "+y,header)
Nf=len(header)

print "\\begin{tabular}[ht]{",
for n in range(Nf):
    print "|r",
print "|}"
print "\\hline"
print head + " \\\\\\hline"
print "\\hline"

for line in fin:
    if (line[0] not in ['#', '@' ,'//', '\\' ]) and (len(line.split())==Nf ) :
        data=reduce(lambda x,y: x+" & "+y,line.split())
        print data + " \\\\\\hline"

print "\\end{tabular}",
