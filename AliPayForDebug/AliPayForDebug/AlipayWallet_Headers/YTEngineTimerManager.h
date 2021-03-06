//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface YTEngineTimerManager : NSObject
{
    NSMutableDictionary *_timerContainer;
}

+ (id)shareInstance;
@property(retain) NSMutableDictionary *timerContainer; // @synthesize timerContainer=_timerContainer;
- (void).cxx_destruct;
- (void)resumeTimerWithName:(id)arg1;
- (void)suspendTimerWithName:(id)arg1;
- (void)cancelAllTimer;
- (void)cancelTimerWithName:(id)arg1;
- (void)scheduledTimerWithName:(id)arg1 interval:(double)arg2 queue:(id)arg3 repeats:(_Bool)arg4 action:(CDUnknownBlockType)arg5;
- (void)scheduledTimerWithItem:(id)arg1;

@end

