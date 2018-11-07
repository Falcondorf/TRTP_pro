#include "record.h"

#include <stdlib.h>
#include <winsock.h>

int record_init(struct record *r)
{
    if((r = calloc(1, sizeof(struct record))) == NULL){
        return 1;
    }
    return 0;
}

void record_free(struct record *r)
{
    free(r->payload);
    free(r);
}

int record_get_type(const struct record *r)
{
    return r->type;
}

void record_set_type(struct record *r, int type)
{
    r->type = type;
}

int record_get_length(const struct record *r)
{
    return r->length;
}

int record_set_payload(struct record *r,
                       const char * buf, int n)
{
    /* Asserts. */
    if ((buf == NULL) && (0 < n)) {
        perror("Error: cannot set unallocated variable.");
        return 1;

    } else if (buf == NULL) {
        r->length = 0;
        r->payload = 0;

    } else {
        /* Malloc some space for the string. */
        r->payload = (char *) malloc(sizeof(char)*(n + 1));
        if (!r->payload) {
            perror("payload of record wasn't correctly allocated.");
            return 1;
        }
        r->length = n;
        if (!strncpy(r->payload, buf, n)) {
            perror("Strncpy inside record wasn't correctly copied.");
            return 1;
        }
    }
    return 0;
}

int record_get_payload(const struct record *r,
                       char *buf, int n)
{
    if(r == NULL || buf == NULL || n <= 0){
        return 1;
    } else {
        if (!strncpy(buf,r->payload,n)){
            perror("Strncpy inside buf wasn't correctly copied.");
            return 1;
        }
    }
    return 0;
}

int record_has_footer(const struct record *r)
{
    return r->hasFooter;
}

void record_delete_footer(struct record *r)
{
    r->hasFooter = 0;
}

void record_set_uuid(struct record *r, unsigned int uuid)
{
    r->hasFooter = 1;
    r->uuid = uuid;
}

unsigned int record_get_uuid(const struct record *r)
{
    return r->uuid; /* 0 is an invalid UUID */
}

int record_write(const struct record *r, FILE *f)
{
    if (r == NULL || f == NULL){
        perror("parameters are NULL...");
        return -1;
    }
    return fwrite(&r, sizeof(r),1,f);
}

int record_read(struct record *r, FILE *f)
{
    return 0;
}
