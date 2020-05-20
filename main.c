#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define LEN 1024
#define VERSION 1

int main() {
	int fd;
	void *buf;


	fprintf(stdout, "Version: %d.0.0\n\n", VERSION);

	fd = open("/dev/cat", O_RDONLY);
	if (fd < 0) {
		fprintf(stderr, "Failed to open /dev/cat.\n");
		return -1;
	}
	fprintf(stdout, "Open /dev/cat successfully, fd: %d\n\n", fd);

	buf = (void *) malloc(1024);
	memset(buf, 0, LEN);

	read(fd, buf, LEN);
	fprintf(stdout, "%s", (char*)buf);

	fflush(stdout);
	sleep(3600);

	close(fd);
}
