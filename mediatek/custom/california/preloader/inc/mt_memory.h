
#ifndef MEMORY_H
#define MEMORY_H

#define MEM_TEST                (1)

// do not change the test size !!!!
#define MEM_TEST_SIZE           (0x2000)

//#define E1_DRAM_SIZE            (0x10000000)
//#define E2_DRAM_SIZE            (0x08000000)

//extern u32 mt6516_get_hardware_ver (void);
//extern void mt6516_mem_init (void);

#if MEM_TEST
extern int complex_mem_test (unsigned int start, unsigned int len);
#endif

#endif
