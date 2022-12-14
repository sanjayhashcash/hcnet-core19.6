// Copyright 2022 Hcnet Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#pragma once

#include "work/Work.h"

namespace hcnet
{

struct HistoryArchiveState;

class AssumeStateWork : public Work
{
    HistoryArchiveState const& mHas;
    uint32_t const mMaxProtocolVersion;
    bool mWorkSpawned{false};

  public:
    AssumeStateWork(Application& app, HistoryArchiveState const& has,
                    uint32_t maxProtocolVersion);

  protected:
    State doWork() override;
    void doReset() override;
};
}