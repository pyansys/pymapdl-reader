#include <stdio.h>
/* #include <fstream> */

void read_nodes(const char*, int64_t, int, int *, double *);
void* read_record(const char*, int64_t, int*, int*, int*, int*);
void read_record_stream(std::ifstream*, int64_t, void*, int*, int*, int*);
void* read_record_fid(std::fstream*, int64_t, int*, int*, int*, int*);
std::fstream* open_fstream(const char*);
int overwriteRecord(std::fstream*, int, double*);
int overwriteRecordFloat(std::fstream*, int, float*);
