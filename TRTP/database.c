#include <stdlib.h>
#include <stdio.h>


#include "macros.h"
#include "record.h"

int main(int argc, const char **argv)
{
    struct record new_record;

    if (record_init(&new_record)) {
        ERROR("Couldn't initialize a record!");
        return EXIT_FAILURE;
    }else {
        printf("Record initilized\n");
    }

    /* Some debug code be guarded in ifdef's
     * Enable it compiling with `make debug`
     */
#ifdef DEBUG
    LOG("Content of the record after initialization:");
	LOG("\tType= %d", record_get_type(&new_record));
	if (record_has_footer(&new_record))
		LOG("\tUUID= %d", record_get_uuid(&new_record));
	else
		LOG("\tNo footer");
	LOG("\tLength= %d", record_get_length(&new_record));
#endif

    /* Do something with the record, e.g. write it in a file, load one from
     * a file, ...
     * You should test your implementation here.
     * Think on using the program arguments
     * as an easy way to script a lot of tests.
     */

    //TEST ON TYPE
    record_set_type(&new_record, 21);
    int t = record_get_type(&new_record);
    printf("type = %d\n", t);

    //TODO TEST ON LENGHT

    record_set_payload(&new_record,"12345", 5);
    int l = record_get_length(&new_record);
    char* c = (char *) malloc(sizeof(char)*(l + 1));

    record_get_payload(&new_record,c,5);
    printf("Lenght payload = %d\n", l);
    printf("Payload content = %s\n", c);

    record_free(&new_record); // Free memory alloction
    free(c);
    return EXIT_SUCCESS;
}