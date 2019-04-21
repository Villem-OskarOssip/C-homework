#####################################################
# You may need to change the parameters under here. #
#####################################################

# Step 1: Choose a compiler. By default, use clang++

# If you use clang++, make sure the following line does not start with a comment (#)
#CXX=clang++
# If you use g++, uncomment the following line
CXX=g++

# Set default compiler parameters
# -Wall 	shows all warnings when compiling, always use this!
# -std=c++11 	enables the C++11 standard mode
CXXFLAGS = -Wall -std=c++11

# Step 2: If you use clang++ under Mac OS X, remove these comments
#CXXFLAGS += -stdlib=libc++
#LFLAGS += -stdlib=libc++

# Step 3: Run 'make' in the same directory as this file

########################################################
# You need to make changes below here to solve Task 2. #
########################################################

# Declare the name of our program (in Windows, the compiler adds .exe)
PROGRAM = program

# The name of the testing app
TEST = testprogram

# The needed object files (we make these from the source code)
OBJ = main.o functions.o
TESTOBJ = test.o functions.o

all: build doc

# This is the first target. It will be built when you run 'make' or 'make build'
build: $(PROGRAM)

# Rule for linking IMPORTANT! The space in front of $(CXX) is a TABULATOR!
# Rule for linking IMPORTANT! The space in front of $(CXX) is a TABULATexOR!
$(PROGRAM): $(OBJ)
	$(CXX) $(OBJ) $(LFLAGS) -o $(PROGRAM)

$(TEST): $(TESTOBJ)
	$(CXX) $(TESTOBJ) $(LFLAGS) -o $(TEST)

# Rules for compiling
main.o: main.cpp
	$(CXX) -c main.cpp -o main.o $(CXXFLAGS)
	
test.o: test.cpp
	$(CXX) -c test.cpp -o test.o $(CXXFLAGS)

functions.o: functions.cpp
	$(CXX) -c functions.cpp -o functions.o $(CXXFLAGS)
	
doc:
	doxygen
	
clean:
	rm -fr doc *.o $(PROGRAM) $(OBJ) $(TEST) $(TESTAPP)

test: $(TEST)
	./$(TEST)


