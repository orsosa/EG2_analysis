.DELETE_ON_ERROR:

ifndef CLASTOOL
    $(error "Please set the variable CLASTOOL")
endif

ROOTCONFIG := root-config
ROOTCFLAGS := $(shell $(ROOTCONFIG) --cflags)
ROOTLDFLAGS := $(shell $(ROOTCONFIG) --ldflags)
ROOTGLIBS := $(shell $(ROOTCONFIG) --glibs)

CXX := c++
CXXFLAGS := -O2 -Wall -fPIC $(ROOTCFLAGS)
#CXXFLAGS := -g -O0 -Wall -fPIC $(ROOTCFLAGS) # debug info
LD := c++
LDFLAGS := -O2 $(ROOTLDFLAGS)
#LDFLAGS := -g -O0 $(ROOTLDFLAGS) # debug info


INCLUDES := -I.
LIBS := $(ROOTGLIBS) -lRooFit -lRooFitCore -lMinuit \
              -lMathMore -lMatrix\
              -lSpectrum -lEG

FILES := get_MRatio_new

.PHONY: all clean

all: $(FILES)

write_tree: write_tree.o


%: %.o
	@echo "Doing application " $@ 
	$(LD) $(LDFLAGS) $(LIBS) -o $@ $^

%.o: %.cxx
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@


clean:
	rm -f $(FILES:%=%.o) $(FILES)
