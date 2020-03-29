//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PKStrategyCenter : NSObject
{
    NSMutableDictionary *_UISources;
    NSObject<OS_dispatch_queue> *_loadPlistQueue;
}

+ (id)sharedPKStrategyCenter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadPlistQueue; // @synthesize loadPlistQueue=_loadPlistQueue;
@property(retain, nonatomic) NSMutableDictionary *UISources; // @synthesize UISources=_UISources;
- (void).cxx_destruct;
- (id)itemWithID:(id)arg1 subItemID:(id)arg2 source:(id)arg3;
- (id)sourceWithID:(id)arg1;
- (id)_sourceWithID:(id)arg1;
- (id)init;
- (void)removeAll;

@end
