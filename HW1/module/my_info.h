#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/version.h>
#include <asm/cpu.h>
#include <asm/cpufeature.h>
#include <linux/cpufreq.h>
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/utsname.h>
#include <generated/utsrelease.h>
#include <linux/mm.h>
#include <linux/hugetlb.h>
#include <linux/mman.h>
#include <linux/mmzone.h>
#include <linux/quicklist.h>
#include <linux/seq_file.h>
#include <linux/swap.h>
#include <linux/vmstat.h>
#include <linux/atomic.h>
#include <linux/vmalloc.h>
#include <linux/cma.h>
#include <asm/page.h>
#include <asm/pgtable.h>
#include <linux/types.h>
#include <linux/percpu.h>
#include <linux/vm_event_item.h>
#include <linux/time.h>
#include <linux/kernel_stat.h>