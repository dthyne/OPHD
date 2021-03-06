#pragma once

#include "Core/Control.h"
#include "../ResourcePool.h"

class ResourceBreakdownPanel : public Control
{
public:
	ResourceBreakdownPanel();
	virtual ~ResourceBreakdownPanel() = default;

	void playerResources(ResourcePool* rp) { mPlayerResources = rp; }
	ResourcePool& previousResources() { return mPreviousResources; }

	void resourceCheck();

	virtual void update() final;

private:
	NAS2D::Image		mIcons;
	NAS2D::ImageList	mSkin;

	ResourcePool		mPreviousResources;
	ResourcePool*		mPlayerResources = nullptr;
};
