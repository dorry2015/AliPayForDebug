//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TATinyappMenuRPC : NSObject
{
    NSMutableDictionary *_waitingRPCActionList;
}

+ (void)callNaviMenuRPC:(id)arg1;
+ (id)getCachedRPCMenusWith:(id)arg1 timeout:(long long)arg2;
+ (void)asyncTinyappMenuRPCResponseWith:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)tinyappMenuRPCResponseWith:(id)arg1;
+ (id)shareInstance;
+ (id)actionsRPC:(id)arg1;
+ (void)configActions:(id)arg1;
+ (void)configActionsByRpc:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableDictionary *waitingRPCActionList; // @synthesize waitingRPCActionList=_waitingRPCActionList;
- (void).cxx_destruct;
- (void)handleRemoveRecentlyUsedTinyAppNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end
