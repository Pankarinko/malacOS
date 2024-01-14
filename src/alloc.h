#ifndef _ALLOC
#define _ALLOC

//Initialize the list of free physical pages. Every free page stores the address of the next free page. 
void createfreelist(void);

//Allocate a page for a page table
int talloc(usize vpn);

//Allocate a page for data
usize palloc(usize vpn);
//Free a page
int pfree();

#endif
