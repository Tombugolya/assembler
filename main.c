#include "main.h"
#include "src/UtilFunctions/functions.h"
#include "src/FirstIteration/first_iteration.h"

int main(int argc, char *argv[]) {
    int i;
    file_management(argc, argv);
    return 0;
}

void file_management(int argc, char *argv[]){
    if (argc > 1)
        process_files(argc, argv);
    else
        errorReport(NO_FILES, 0);
}

void process_files(int argc, char *argv[]){
    int i;
    char * filename;
    FILE * file;
    for (i = INPUT ; i < argc ; i++){
        filename = get_filename(argv[i]);
        file = get_file(argv[i]);
        if (filename && file)
            first_iteration(filename, file);
    }
}
