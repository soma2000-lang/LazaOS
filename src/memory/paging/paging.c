#include "paging.h"
#include "memory/heap/kheap.h"
#include "status.h"
static uint32_t *current_directory = 0;
