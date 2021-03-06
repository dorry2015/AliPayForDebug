//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDTaskFactory, NSMutableArray;

@interface IDTaskManager : NSObject
{
    NSMutableArray *_taskQueue;
    NSMutableArray *_shadowTaskQueue;
    IDTaskFactory *_taskFactory;
}

+ (id)defaultManager;
@property(retain, nonatomic) IDTaskFactory *taskFactory; // @synthesize taskFactory=_taskFactory;
@property(retain, nonatomic) NSMutableArray *shadowTaskQueue; // @synthesize shadowTaskQueue=_shadowTaskQueue;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void).cxx_destruct;
- (void)checkAndRunShadowTask;
- (void)checkAndClearDB;
- (void)taskDidCallback:(id)arg1;
- (_Bool)hasTryRulesWithContext:(id)arg1;
- (void)checkAndGenerateShadowTaskWithContext:(id)arg1 id:(id)arg2 type:(unsigned long long)arg3;
- (id)taskWithContext:(id)arg1 id:(id)arg2 type:(unsigned long long)arg3;
- (_Bool)isRunnableTask:(id)arg1;
- (void)removeTask:(id)arg1;
- (_Bool)addTask:(id)arg1;
- (id)init;

@end

