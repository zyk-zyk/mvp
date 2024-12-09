#ifndef _PRESENTER_H
#define _PRESENTER_H
#include "MVP/view.h"
#include "MVP/model.h"


typedef void(*PresenterBindModel)(struct PresenterBase*, struct ModelBase*);
typedef void(*PresenterTickUpadte)(struct PresenterBase*);

struct PresenterBase
{
    struct ViewBase *view;
    struct ModelBase *model;

    
    PresenterBindModel bind_model;
    PresenterTickUpadte tick_update;
};


#endif
