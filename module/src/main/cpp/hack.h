//
// Created by Perfare on 2020/7/4.
//

#ifndef ZYGISK_IL2CPPDUMPER_HACK_H
#define ZYGISK_IL2CPPDUMPER_HACK_H

#include <stddef.h>
#include <string>

void hack_prepare(const char *game_data_dir, void *data, size_t length);
bool should_hack(const std::string &app_name);

#endif //ZYGISK_IL2CPPDUMPER_HACK_H
