
#include <poll.h>

server_poll(struct pollfd *fds, int max_len) {
    while (!done) {
        int nreadable = poll(fds, len, 100);
        if nreadable == 0
            continue;
        if nreadable == -1
            continue
            
        for (int i = 0; i < max_len; i++) {
            if (fds[i]->revents & POLLIN) {
                fds[i]->fd is the listener
                    accept() and add new fd
                else
                    handle http request
                    close
                    fds[i].fd = -1
            }
        }
    }
}

// append a new fd to the array of fds
listener setup or accept {
    arr[len].fd = new_fd
    arr[len].events = POLLIN
}

main() {
    int num_polls = 50;
    struct pollfd arr[num_polls];

    server_poll(arr, num_polls)
}
