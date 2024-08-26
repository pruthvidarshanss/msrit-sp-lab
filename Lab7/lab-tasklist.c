#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <linux/sched.h>
#include <linux/uaccess.h>
#include <linux/sched/signal.h>

static int __init task_details_lkm_init(void) {
    struct task_struct *task;

    for_each_process(task) {
        const char state = task_state_to_char(task);
        const char *state_str;

        switch (state) {
            case 'R':
                state_str = "TASK_RUNNING";
                break;
            case 'S':
                state_str = "TASK_INTERRUPTIBLE";
                break;
            case 'D':
                state_str = "TASK_UNINTERRUPTIBLE";
                break;
            case 'T':
                state_str = "TASK_STOPPED";
                break;
            case 't':
                state_str = "TASK_TRACED";
                break;
            case 'Z':
                state_str = "TASK_DEAD";
                break;
            case 'X':
                state_str = "TASK_DEAD";
                break;
            default:
                state_str = "UNKNOWN";
        }

        printk(KERN_INFO "PID: %d, Name: %s, Nice: %d, Normal Priority: %d, State: %s\n",
               task->pid, task->comm, task_nice(task), task->normal_prio, state_str);
    }

    printk(KERN_INFO "LKM initialized\n");

    return 0;
}

static void __exit task_details_lkm_exit(void) {
    printk(KERN_INFO "Exiting LKM...\n");
    printk(KERN_INFO "LKM exited\n");
}

module_init(task_details_lkm_init);
module_exit(task_details_lkm_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("LKM for printing task details in a proc file");

