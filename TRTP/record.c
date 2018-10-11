#include "record.h"

#include <stdlib.h>

int record_init(struct record *r)
{
    r->uuid = 0;
    r->type = 0;
    r->length = 0;
    r->hasFooter = 0;
    return 0;
}

void record_free(struct record *r)
{

}

int record_get_type(const struct record *r)
{
    return 0;
}

void record_set_type(struct record *r, int type)
{

}

int record_get_length(const struct record *r)
{
    return 0;
}

int record_set_payload(struct record *r,
                       const char * buf, int n)
{
    return 0;
}

int record_get_payload(const struct record *r,
                       char *buf, int n)
{
    return 0;
}

int record_has_footer(const struct record *r)
{
    return 0;
}

void record_delete_footer(struct record *r)
{

}

void record_set_uuid(struct record *r, unsigned int uuid)
{

}

unsigned int record_get_uuid(const struct record *r)
{
    return 0xFFFFFFFF; /* 0 is an invalid UUID */
}

int record_write(const struct record *r, FILE *f)
{
    return 0;
}

int record_read(struct record *r, FILE *f)
{
    return 0;
}
