/*
 * Random I/O benchmark.
 *
 * Process reads blocks from a
 * file in a random order.
 */
#include <sys/file.h>
#include <sys/stat.h>
#include <sys/types.h>

char *malloc();

main(argc, argv) char *argv[];
{
	char *buf;
	int size, fd, bn, maxblocks;
	struct stat sb;
	register int i, niter;

	if (argc < 3) {
		printf("usage: %s file read-size #reads\n", argv[0]);
		exit(1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0) {
		perror(argv[1]);
		exit(2);
	}
	fstat(fd, &sb);
	buf = malloc(sb.st_blksize);
	if (buf == (char *)0) {
		printf("Couldn't allocate i/o buffer.\n");
		exit(3);
	}
	size = atoi(argv[2]);
	if (size > sb.st_blksize) {
		printf("Reads must be no larger than block size (%d)\n",
		       sb.st_blksize);
		exit(4);
	}
	niter = atoi(argv[3]);
	printf("%d random %d byte reads, file size %d kb (bsize %d)\n", niter,
	       size, sb.st_size / 1024, sb.st_blksize);
	for (i = 0; i < niter; i++) {
		lseek(fd, random() % sb.st_size, L_SET);
		read(fd, buf, size);
	}
}
