#ifndef _MODEL_H
#define _MODEL_H
#include "MVP/presenter.h"
#include "MVP/view.h"


typedef void(*ModelBindPresenter)(struct ModelBase*, struct PresenterBase*);
typedef void(*ModelTick)(struct ModelBase*);
struct ModelBase
{
    struct PresenterBase *presenter;
    ModelBindPresenter  bind;
    ModelTick   tick;
};

#endif
