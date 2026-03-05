# directory of parent
PARENT_DIR = C:\Users\amikam\OneDrive\Learning\Learning\Data_Structure\Lab\code\Project_5_Shortest_Path_Problems

# compiler and tools
CC = gcc
DOT = dot # Graphviz command
CFLAGS = -Wall -g 
LDFLAGS = -lm

# let compiler find the Graph.h in parent directory
INCLUDES = -I$(PARENT_DIR)

# target exe file
TARGET = Subway_Problem

# other target files
DOT_FILE = $(TARGET).dot
PNG_FILE = $(TARGET).png

# source files
MAIN_SRC = Subway_Problem.c
GRAPH_SRC = $(PARENT_DIR)\Graph.c

# object files
MAIN_OBJ = $(MAIN_SRC:.c =.o)
GRAPH_OBJ = Graph.o # avoid generate in parent directory

# default target: generate dot and png file
all: $(DOT_FILE) $(PNG_FILE)

# generate png file (depend on dot file)
$(PNG_FILE): $(DOT_FILE)
	$(DOT) -Tpng $< -o $@

# generate dot file (depend exe file)
$(DOT_FILE): $(TARGET)
	./$< $@

# compile exe file (depend all object files)
$(TARGET): $(MAIN_OBJ) $(GRAPH_OBJ)
	$(CC) -o $@ @^ @(LDFLAGS)

# compile Subway_Problem.c
$(MAIN_OBJ): %.o: %.c $(PARENT_DIR)/Graph.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# compile Graph.c
$(GRAPH_OBJ): $(GRAPH_SRC) $(PARENT_DIR)/Graph.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $(GRAPH_SRC) -o $@

# clean
clean:
	rm -f *.o $(TARGET) $(PARENT_DIR)/*.o

.PHONY: all clean