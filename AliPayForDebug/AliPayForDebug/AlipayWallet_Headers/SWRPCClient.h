//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SWRPCClient : NSObject
{
    NSString *_sessionId;
}

+ (id)sendQueryDeviceBindRequest:(id)arg1 callback:(CDUnknownBlockType)arg2 exceptionCallback:(CDUnknownBlockType)arg3;
+ (id)sendRequest:(id)arg1 callback:(CDUnknownBlockType)arg2 exceptionCallback:(CDUnknownBlockType)arg3;
+ (void)cleanSession;
+ (id)sharedClient;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)sendQueryDeviceBindRequest:(id)arg1 callback:(CDUnknownBlockType)arg2 exceptionCallback:(CDUnknownBlockType)arg3;
- (id)sendRequest:(id)arg1 callback:(CDUnknownBlockType)arg2 exceptionCallback:(CDUnknownBlockType)arg3;

@end
