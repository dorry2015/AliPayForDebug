//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APScanViewConfig, NSArray, NSDictionary, NSString;

@protocol APScanDelegate <NSObject>
- (void)didFind:(NSDictionary *)arg1;

@optional
- (NSArray *)handleResultArray:(NSArray *)arg1;
- (void)onTabSelected:(APScanViewConfig *)arg1;
- (void)scanUserTrack:(NSString *)arg1 args:(NSDictionary *)arg2;
- (void)exitScan;
@end
