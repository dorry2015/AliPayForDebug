//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, PaladinView, UIViewController;

@protocol PLDAppProtocol <NSObject>
@property(copy, nonatomic) NSString *jsfmError;
- (void)sendAppEvent:(NSString *)arg1 params:(NSDictionary *)arg2 callback:(void (^)(_Bool, NSDictionary *))arg3;
- (PaladinView *)createView:(NSString *)arg1 frame:(struct CGRect)arg2 container:(UIViewController *)arg3 option:(NSDictionary *)arg4;
- (NSString *)appInstanceID;
@end

