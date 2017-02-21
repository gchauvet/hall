/*
 * The MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "deimos.h"

void help(home_data *data)
{
    int x;

    printf("Usage: %s [-options...] [{main}.jar] [args...]\n", log_prog);
    printf("\n");
    printf("Where options include:\n");
    printf("\n");
    printf("    -help | --help | -?\n");
    printf("        show this help page (implies -nodetach)\n");
    printf("    -jvm <JVM name>\n");
    printf("        use a specific Java Virtual Machine. Available JVMs:\n");
    printf("           ");
    for (x = 0; x < data->jnum; x++) {
        printf(" '%s'", PRINT_NULL(data->jvms[x]->name));
    }
    printf("\n");
    printf("    -client\n");
    printf("        use a client Java Virtual Machine.\n");
    printf("    -server\n");
    printf("        use a server Java Virtual Machine.\n");
    printf("    -cp | -classpath <directories and zip/jar files>\n");
    printf("        set additional search path for classes not defined in MANIFEST.MF\n");
    printf("    -java-home | -home <directory>\n");
    printf("        set the path of your JDK or JRE installation (or set\n");
    printf("        the JAVA_HOME environment variable)\n");

    printf("    -version\n");
    printf("        show the current Java environment version (to check\n");
    printf("        correctness of -home and -jvm. Implies -nodetach)\n");
    printf("    -showversion\n");
    printf("        show the current Java environment version (to check\n");
    printf("        correctness of -home and -jvm) and continue execution.\n");
    printf("    -nodetach\n");
    printf("        don't detach from parent process and become a daemon\n");
    printf("    -debug\n");
    printf("        verbosely print debugging information\n");
    printf("    -check\n");
    printf("        only check service (implies -nodetach)\n");
    printf("    -user <user>\n");
    printf("        user used to run the daemon (defaults to current user)\n");
    printf("    -verbose[:class|gc|jni]\n");
    printf("        enable verbose output\n");
    printf("    -cwd </full/path>\n");
    printf("        set working directory to given location (defaults to /)\n");
    printf("    -outfile </full/path/to/file>\n");
    printf("        Location for output from stdout (defaults to /dev/null)\n");
    printf("        Use the value '&2' to simulate '1>&2'\n");
    printf("    -errfile </full/path/to/file>\n");
    printf("        Location for output from stderr (defaults to /dev/null)\n");
    printf("        Use the value '&1' to simulate '2>&1'\n");
    printf("    -pidfile </full/path/to/file>\n");
    printf("        Location for output from the file containing the pid of deimos\n");
    printf("        (defaults to /var/run/deimos.pid)\n");
    printf("    -D<name>=<value>\n");
    printf("        set a Java system property\n");
    printf("    -X<option>\n");
    printf("        set Virtual Machine specific option\n");
    printf("    -ea[:<packagename>...|:<classname>]\n");
    printf("    -enableassertions[:<packagename>...|:<classname>]\n");
    printf("        enable assertions\n");
    printf("    -da[:<packagename>...|:<classname>]\n");
    printf("    -disableassertions[:<packagename>...|:<classname>]\n");
    printf("        disable assertions\n");
    printf("    -esa | -enablesystemassertions\n");
    printf("        enable system assertions\n");
    printf("    -dsa | -disablesystemassertions\n");
    printf("        disable system assertions\n");
    printf("    -agentlib:<libname>[=<options>]\n");
    printf("        load native agent library <libname>, e.g. -agentlib:hprof\n");
    printf("    -agentpath:<pathname>[=<options>]\n");
    printf("        load native agent library by full pathname\n");
    printf("    -javaagent:<jarpath>[=<options>]\n");
    printf("        load Java programming language agent, see java.lang.instrument\n");
    printf("    -procname <procname>\n");
    printf("        use the specified process name\n");
    printf("    -wait <waittime>\n");
    printf("        wait waittime seconds for the service to start\n");
    printf("        waittime should multiple of 10 (min=10)\n");
    printf("    -stop\n");
    printf("        stop the service using the file given in the -pidfile option\n");
    printf("    -keepstdin\n");
    printf("        does not redirect stdin to /dev/null\n");
    printf("\nDeimos (Hall Project) " DEIMOS_VERSION_STRING "\n");
    printf("Copyright 2017 Zatarox.\n");

    printf("\n");
}
