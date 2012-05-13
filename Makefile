OBJF = src/basic2d.o src/precomp.o src/program.o
LIBS=clanApp clanDisplay clanCore clanSWRender clanGL clanGL1
PACKAGES = $(patsubst %,%-2.3,$(LIBS))
# CXXFLAGS += `pkg-config --cflags $(PACKAGES)` -mthreads
CXXFLAGS += `pkg-config --cflags $(PACKAGES)` -pthread
BIN=game-project

all: $(BIN)

$(BIN): $(OBJF)
	$(CXX) $(CXXFLAGS) $(OBJF) -o $(BIN) `pkg-config --libs $(PACKAGES)` $(EXTRA_LIBS)

clean:
	rm -f $(OBJF) $(EXAMPLE_BIN)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


# EOF #
