//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMConfigService : NSObject
{
}

+ (int)intValueWithConfigKey:(id)arg1 jsonKey:(id)arg2;
+ (id)getConfigWithKey:(id)arg1;
+ (_Bool)allowRefreshingSignatureUnderBackground;
+ (id)websocketConfig;
+ (_Bool)enableDetectRpcGateway;
+ (int)rpcTimeout;
+ (int)timeToleraneBetweenTwoCalls;

@end

