//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcAsyncCaller, PSDSession;

@interface H5RPCCaller : NSObject
{
    DTRpcAsyncCaller *_jsRpc;
    PSDSession *_session;
}

@property(nonatomic) __weak PSDSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (void)dealloc;
- (void)cancel;
- (id)getAppKeyWithGateWay:(id)arg1;
- (void)callRPC:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;

@end
