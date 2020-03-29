//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2OParallaxPagingViewAnimation : NSObject
{
    long long _animationID;
    double _duration;
    CDUnknownBlockType _timingFunction;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
    double _startTime;
}

+ (long long)getNextAnimationID;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(copy, nonatomic) CDUnknownBlockType timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long animationID; // @synthesize animationID=_animationID;
- (void).cxx_destruct;
- (void)complete:(_Bool)arg1;
- (void)tick;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) double percentComplete;
- (id)init;

@end
