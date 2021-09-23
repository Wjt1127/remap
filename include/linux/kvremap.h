#ifndef _KVREMAP_H_
#define _KVREMAP_H_

struct kvremap_range{
	unsigned long saddr;
	unsigned long len;
	unsigned long daddr;
    unsigned long cow;
	int pid;
};

extern struct kvremap_range g_kvremap_range;

#endif