CPP = g++

AR = ar

# r : 새로운 오브젝트 파일이면 추가, 기존 파일이면 치환
# c : 아카이브(라이브러리 파일) 생성, 존재하지 않는 아카이브를 작성(또는 갱신)하는 경우에도 경고 메시지를 출력하지 않음
# u : 오브젝트 파일의 타임스탬프를 비교해 새로운 파일일 경우에만 치환
# s : ranlib(1)과 마찬가지로 아카이브 인덱스 생성. 아카이브 인덱스를 생성하지 않으면 링크 속도가 느려지고, 시스템 환경에 따라 에러가 발생할 수도 있음
AR_FLAGS = rcus

SRCS =

SRCS += $(CPP_SOURCES)

SUB_DIRS :=
SUB_DIRS += src

SUB_DIRS := $(addprefix ./,$(SUB_DIRS))

vpath %.cpp $(SUB_DIRS)

sinclude $(addsuffix /Makefile, $(SUB_DIRS))

BUILD_DIR = buildDir

# static library
LIBRARY_NAME = libuserInterface.a

CPP_MODULE :=

CPP_EXTRA :=
CPP_EXTRA += $(CPP_MODULE)
CPP_EXTRA += $(EXTRAINCDIRS)
CPP_EXTRA += ../userData/inc ../control/inc
CPP_LIB :=
CPP_LIB += -luserData -L ../userData/buildDir -lmyList -L ../control/buildDir

CPP_INC = $(patsubst %,-I%, $(CPP_EXTRA)) $(CPP_LIB)

CPP_FLAGS = -std=c++14

CPPOBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.cpp=.o))

all: clean createdirs makelib

createdirs:
	$(shell mkdir ${BUILD_DIR})

makelib: $(CPPOBJS)
	$(AR) $(AR_FLAGS) $(BUILD_DIR)/$(LIBRARY_NAME) $^

$(CPPOBJS): $(BUILD_DIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) $(CPP_FLAGS) -o $@ -c $<

clean:
	rm -rf ${BUILD_DIR}

.SUFFIXES: .cpp .o
.PHONNY: clean createdirs makelib