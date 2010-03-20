#ifndef _UHTTPD_FILE_

#include <fcntl.h>
#include <time.h>
#include <strings.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <linux/limits.h>

struct mimetype {
	const char *extn;
	const char *mime;
};

void uh_file_request(
	struct client *cl, struct http_request *req, struct uh_path_info *pi
);

#endif
