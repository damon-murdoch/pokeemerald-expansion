import src.cparser as cparser

CONFIG_FILE = "./include/config/battle_frontier_generator.h"


def get_config():
    with open(CONFIG_FILE, "r") as f:
        return cparser.parse_defines(f.readlines())


CONFIG = get_config()


def check_config(value):
    if value in CONFIG:
        return CONFIG[value]
    return False
