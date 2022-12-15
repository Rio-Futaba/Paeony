#include <iostream>
#include <spdlog/spdlog.h>
#include <event2/event.h>

int main() {

    struct event_base *base = event_base_new();               // 创建base
    int i;

    const char **buff1;
    buff1 = event_get_supported_methods();       // 查看支持哪些多路io
    for (i = 0; i < 10; i++) {
        spdlog::info("buff1[i] = %s\n", buff1[i]);
    }
    return 0;
}
