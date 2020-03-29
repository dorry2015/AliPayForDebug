//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MFWidgetPluginProtocol-Protocol.h"

@class CADisplayLink, NSString, UIImage;
@protocol MFWidgetPluginProtocol;

@interface NotificationCenterLogo : UIView <MFWidgetPluginProtocol>
{
    _Bool _hasNewMessages;
    _Bool _isAnimatingWithNewMessages;
    _Bool _isAnimatingWithoutNewMessages;
    id <MFWidgetPluginProtocol> _delegate;
    UIImage *_antLogo;
    UIView *_animateView;
    CADisplayLink *_displayLink;
    NSString *_vcIdentifer;
    long long _currentFrameIndex;
    long long _loopIndex;
    long long _endIndex;
}

+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
@property(nonatomic) long long endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) long long loopIndex; // @synthesize loopIndex=_loopIndex;
@property(nonatomic) long long currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property(retain, nonatomic) NSString *vcIdentifer; // @synthesize vcIdentifer=_vcIdentifer;
@property(nonatomic) _Bool isAnimatingWithoutNewMessages; // @synthesize isAnimatingWithoutNewMessages=_isAnimatingWithoutNewMessages;
@property(nonatomic) _Bool isAnimatingWithNewMessages; // @synthesize isAnimatingWithNewMessages=_isAnimatingWithNewMessages;
@property(nonatomic) _Bool hasNewMessages; // @synthesize hasNewMessages=_hasNewMessages;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *animateView; // @synthesize animateView=_animateView;
@property(retain, nonatomic) UIImage *antLogo; // @synthesize antLogo=_antLogo;
@property(nonatomic) __weak id <MFWidgetPluginProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setMFDelegate:(id)arg1;
- (void)dealloc;
- (void)updateImage;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (void)startAnimatingWithoutNewMessages;
- (void)startAnimatingWithNewMessages;
- (void)startAnimating;
- (void)continueAnimating;
- (void)pausedAnimating;
- (_Bool)isAnimating;
- (void)removeFromRunLoop;
- (void)addNotificationCenterObserver;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
