// This file has been automatically generated by gen_deployment.
// Do not make manual modifications there or they will be lost.

#ifndef __POK_KERNEL_GENERATED_DEPLOYMENT_H_
#define __POK_KERNEL_GENERATED_DEPLOYMENT_H_

#define POK_CONFIG_NB_LOCKOBJECTS 1
#define POK_CONFIG_NB_PARTITIONS 1
#define POK_CONFIG_NB_PROCESSORS 1
#define POK_CONFIG_NB_THREADS 13
#define POK_CONFIG_PARTITIONS_NLOCKOBJECTS                                     \
  { 1 }
#define POK_CONFIG_PARTITIONS_NTHREADS                                         \
  { 11 }
#define POK_CONFIG_PARTITIONS_SIZE                                             \
  { 133120 }
#define POK_CONFIG_PROCESSOR_AFFINITY                                          \
  { 1 }
#define POK_CONFIG_PROGRAM_NAME                                                \
  { "part1/part1.elf" }
#define POK_CONFIG_SCHEDULING_MAJOR_FRAME 2000000000
#define POK_CONFIG_SCHEDULING_NBSLOTS 1
#define POK_CONFIG_SCHEDULING_SLOTS                                            \
  { 2000000000 }
#define POK_CONFIG_SCHEDULING_SLOTS_ALLOCATION                                 \
  { 0 }

#define POK_NEEDS_CONSOLE 1
#define POK_NEEDS_DEBUG 1
#define POK_NEEDS_LOCKOBJECTS 1
#define POK_NEEDS_SHUTDOWN 1
#define POK_NEEDS_THREAD_SLEEP 1
#define POK_NEEDS_THREAD_SUSPEND 1
#define POK_NEEDS_SCHED_EDF 1
#define POK_CONFIG_PARTITIONS_SCHEDULER { POK_SCHED_EDF }

typedef enum { pok_part_identifier_part1 = 0 } pok_part_identifiers_t;

typedef enum { pok_part_id_part1 = 0 } pok_part_id_t;

typedef enum { pok_nodes_node1 = 0 } pok_node_id_t;

#endif // __POK_KERNEL_GENERATED_DEPLOYMENT_H_
