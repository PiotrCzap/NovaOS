CC = gcc
TARGET = build/system

SOURCES = $(shell find src -name "*.c")

system:
	@echo "Compiling..."
	@# Tworzenie folderów przed rozpoczęciem jakichkolwiek prac
	@mkdir -p obj build
	@$(eval OBJECTS=)
	@for src in $(SOURCES); do \
		filename=$$(basename $$src .c); \
		obj="obj/$$filename.o"; \
		echo "CC: $$src -> $$obj"; \
		$(CC) -c $$src -o $$obj; \
	done
	@echo "Linking into one file..."
	$(CC) obj/*.o -o $(TARGET)
	@echo "Finished Building"