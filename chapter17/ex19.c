#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

void execute_cmd(char *);

struct {
	char *cmd_name;
	void (*cmd_pointer)(void);
} file_cmd[] = {
	{"new", new_cmd},
	{"open", open_cmd},
	{"close", close_cmd},
	{"close all", close_all_cmd},
	{"save", save_cmd},
	{"save as", save_as_cmd},
	{"save all", save_all_cmd},
	{"print", print_cmd},
	{"exit", exit_cmd},
};

int main(void)
{
	execute_cmd("save as");
    return 0;
}

void execute_cmd(char *cmd)
{
	for (int i = 0; i < 9; i++)
		if (strcmp(file_cmd[i].cmd_name, cmd) == 0)
			(*file_cmd[i].cmd_pointer)();
}

void new_cmd(void)       { printf("new");       }
void open_cmd(void)      { printf("new");       }
void close_cmd(void)     { printf("close");     }
void close_all_cmd(void) { printf("close all"); }
void save_cmd(void)      { printf("save");      }
void save_as_cmd(void)   { printf("save as");   }
void save_all_cmd(void)  { printf("save all");  }
void print_cmd(void)     { printf("print");     }
void exit_cmd(void)      { printf("exit");      }