/* magiskpolicy.h - Public API for policy patching
 */

#ifndef _MAGISKPOLICY_H
#define _MAGISKPOLICY_H

#include <stdlib.h>

#define ALL NULL

// Handy functions
int sepol_allow(char *s, char *t, char *c, char *p);
int sepol_deny(char *s, char *t, char *c, char *p);
int sepol_auditallow(char *s, char *t, char *c, char *p);
int sepol_auditdeny(char *s, char *t, char *c, char *p);
int sepol_typetrans(char *s, char *t, char *c, char *d, char *o);
int sepol_create(char *s);
int sepol_permissive(char *s);
int sepol_enforce(char *s);
int sepol_attradd(char *s, char *a);
int sepol_exists(char *source);

// Built in rules
void sepol_full_rules();
void sepol_min_rules();

#endif
