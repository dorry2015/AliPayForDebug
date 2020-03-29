//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AULoadingIndicatorView, NSDictionary, NSString, PaladinView;

@interface PLDContainerView : UIView <UIGestureRecognizerDelegate>
{
    NSString *_componentId;
    NSDictionary *_params;
    PaladinView *_renderView;
    AULoadingIndicatorView *_loadingIndicatorView;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) AULoadingIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(nonatomic) __weak PaladinView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
- (void).cxx_destruct;
- (id)renderViewWithVC:(id)arg1 appId:(id)arg2 options:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)loadingFinished:(id)arg1;
- (void)exitComponent;
- (void)addGestureRecognizerIfNeed;
- (void)startLoadWithVC:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
