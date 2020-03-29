//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, VZFNode, VZFThrottler;
@protocol VZFAppearProtocol;

@interface VZFAppearManager : NSObject
{
    UIView<VZFAppearProtocol> *_parentScrollView;
    UIView<VZFAppearProtocol> *_parentSwiper;
    CDUnknownBlockType _removeParentScrollListener;
    CDUnknownBlockType _removeParentSwiperListener;
    CDUnknownBlockType _removePageScrollListener;
    _Bool _viewAppear;
    _Bool _firstAppeared;
    VZFThrottler *_checkVisibleThrottler;
    VZFNode *_node;
}

@property(nonatomic) __weak VZFNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (double)getRectArea:(struct CGRect)arg1;
- (struct CGRect)getIntersectRectForAppear:(struct CGRect)arg1 withRect:(struct CGRect)arg2 offset:(double)arg3;
- (struct CGRect)getIntersectRect:(struct CGRect)arg1 withRect:(struct CGRect)arg2 offset:(double)arg3;
- (id)getParentScrollView;
- (id)getParentSwiper;
- (void)handleAppear;
- (void)realCheckVisible;
- (void)checkVisible;
- (_Bool)hasAppearEvent;
- (void)removeAppearListener;
- (id)init;

@end
