#ifndef _VIEW_H
#define _VIEW_H

#include "MVP/presenter.h"

typedef void(*ViewBindPresenter)(struct ViewBase*, struct PresenterBase*);
typedef void(*ViewAction)(struct ViewBase*, void*);
struct ViewBase
{
    struct PresenterBase *presenter;
    ViewBindPresenter bind;
    ViewAction action;
};

void view_base_init(struct ViewBase* view_base);
struct ViewBase* view_base_create(void);
#endif
