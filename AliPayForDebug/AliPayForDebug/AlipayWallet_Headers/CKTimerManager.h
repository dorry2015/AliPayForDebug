//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CKTimerManager : NSObject
{
    NSMutableDictionary *_timers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeAllTimersForInstance:(id)arg1;
- (id)keyWithCallbackID:(id)arg1 instanceID:(id)arg2;
- (id)timers;
- (_Bool)isIntervalExist:(id)arg1 instanceId:(id)arg2;
- (void)clearInterval:(id)arg1 instanceId:(id)arg2;
- (void)createTimerWithKey:(id)arg1 time:(double)arg2 target:(id)arg3 selector:(SEL)arg4 shouldRepeat:(_Bool)arg5;
- (void)setInterval:(id)arg1 instanceId:(id)arg2 time:(double)arg3 shouldRepeat:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end

