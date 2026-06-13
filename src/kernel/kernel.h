#ifndef KERNEL_H
#define KERNEL_H

void init();
void create_config_file(char config_filename[]);
void create_log_file(char log_filename[]);
void read_config_file(char config_filename[]);
void read_log_file(char log_filename[]);

#endif