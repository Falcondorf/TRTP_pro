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
        printf("New Record initilized\n");
    }

    struct record another_record;

    if (record_init(&another_record)) {
        ERROR("Couldn't initialize a record!");
        return EXIT_FAILURE;
    }else {
        printf("Another Record initilized\n");
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

    //TEST ON PAYLOAD
    record_set_payload(&new_record,"12345", 5);
    int l = record_get_length(&new_record);
    char* c = (char *) malloc(sizeof(char)*(l + 1));

    record_get_payload(&new_record,c,5);
    printf("Lenght payload = %d\n", l);
    printf("Payload content = %s\n", c);

    //TEST ON FOOTER
    printf("Before set :: Has a footer = %d\n", record_has_footer(&new_record));
    record_set_uuid(&new_record, 123456);
    printf("UUID = %d\n", record_get_uuid(&new_record));
    printf("After set :: Has a footer = %d\n", record_has_footer(&new_record));
    record_delete_footer(&new_record);
    printf("After delete :: Has a footer = %d\n", record_has_footer(&new_record));

    //TEST ON FILES
    FILE * f = NULL;
    int nb_byte = 0;
    if ((f = fopen("test.dat", "w+b")) == NULL){
        perror("Stream NULL...");
        return -1;
    }
    nb_byte = record_write(&new_record,f);
    printf("Nb byte ecrits = %d\n", nb_byte);
    record_read(&another_record,f);
    printf("New record length = %d\n",record_get_length(&another_record));

    if (fclose(f) != 0){
        perror("File closing error...");
        return -1;
    }

    record_free(&new_record); // Free memory alloction
    record_free(&another_record);
    free(c);
    return EXIT_SUCCESS;
}