//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NAMApp, NSData, NSString, NSURL;

@protocol NBTinyappConfigDelegate <NSObject>
- (NSData *)getSavedDataWithKey:(NSString *)arg1 business:(NSString *)arg2;
- (NAMApp *)findApp:(NSString *)arg1;
- (NSURL *)getAppexFrameworkFallbackUrl:(NSString *)arg1;
- (NSString *)SWUserAgent;
- (_Bool)shouldEventThroughWorker:(NSString *)arg1 appId:(NSString *)arg2;
@end
