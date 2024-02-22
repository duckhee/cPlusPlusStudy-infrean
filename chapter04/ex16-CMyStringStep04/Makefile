CPP = g++

SRCS = main.cpp CMyString.cpp

BUILD_DIR = buildDir

CPPOBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

TARGET = ExampleCMyStringStep04

CPP_EXTRA = CMyString.h

CPP_INC = $(patsubst %,-I%, $(CPP_EXTRA))

CPP_FLAGS = -std=c++14

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) $(CPP_FLAGS) -o $(BUILD_DIR)/$(TARGET) $^

$(CPPOBJS): $(BUILD_DIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) $(CPP_FLAGS) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .cpp .o
.PHONNY: clean createdirs build