//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface aluOperationQueue : NSObject
{
    long long _myRetainCount;
    NSMutableArray *_arrayCacheBlock;
    NSMutableDictionary *_dictCacheBlock;
}

@property(retain, nonatomic) NSMutableDictionary *dictCacheBlock; // @synthesize dictCacheBlock=_dictCacheBlock;
@property(retain, nonatomic) NSMutableArray *arrayCacheBlock; // @synthesize arrayCacheBlock=_arrayCacheBlock;
@property(nonatomic) long long myRetainCount; // @synthesize myRetainCount=_myRetainCount;
- (void).cxx_destruct;
- (void)completeAction;
- (void)setOperationCache:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setDufaultOperationCache:(CDUnknownBlockType)arg1;
- (void)resetLockCount;
- (void)releaseLockCount;
- (void)retainLockCount;
- (id)init;

@end

