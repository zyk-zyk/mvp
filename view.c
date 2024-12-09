#include <stdlib.h>  // 包含 malloc 的头文件
#include "MVP/view.h"

static void view_bind_presenter(struct ViewBase *view, struct PresenterBase *presenter)
{
    view->presenter = presenter;
}


void view_base_init(struct ViewBase* view_base)
{
    if (view_base == NULL) {
        return;
    }
    memset(view_base, 0, sizeof(struct ViewBase));
    view_base->bind = view_bind_presenter;
}

struct ViewBase* view_base_create(void)
{
    struct ViewBase* view_base;
    view_base = malloc(sizeof(struct ViewBase));
    if (view_base == NULL) {
        return NULL;
    }
    view_base_init(view_base);
    return view_base;
}
