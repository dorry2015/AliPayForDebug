//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SocialOperationProcessor;

@interface SCBSyncHandler : NSObject
{
    NSMutableArray *syncKeys;
    double lastForceRpcCallTime;
    SocialOperationProcessor *_processor;
}

@property(nonatomic) __weak SocialOperationProcessor *processor; // @synthesize processor=_processor;
- (void).cxx_destruct;
- (id)SyncFromData:(id)arg1;
- (void)responseBiz_EXP_HALL:(id)arg1;
- (void)dealloc;
- (void)registerSyncBiz;
- (id)init;

@end
