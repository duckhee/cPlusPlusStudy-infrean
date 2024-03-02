CPP = g++

SRCS = main.cpp

BUILD_DIR = buildDir

TARGET = ex01BasicObject

CPP_FLAGS = -std=c++14

CPPOBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

CPP_MODULE :=

CPP_LIBS :=

CPP_LIBS += -l myList -L ./lib/control/buildDir/ -l userData -L ./lib/userData/buildDir -l userInterface -L ./lib/userInterface/buildDir

CPP_EXTRA = ./lib/control/inc ./lib/userData/inc ./lib/userInterface/inc


CPP_INC = $(patsubst %,-I%, $(CPP_EXTRA)) $(CPP_LIBS)

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(CPPOBJS)
	$(CPP) $(CPP_FLAGS) $(CPP_INC) -o $(BUILD_DIR)/$(TARGET) $^

$(CPPOBJS): $(BUILD_DIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) $(CPP_FLAGS) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .cpp .o
.PHONNY: clean createdirs build