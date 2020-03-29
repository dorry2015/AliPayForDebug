//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTService-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol OnsiteOtpService <DTService>
- (void)verifyDevice:(void (^)(_Bool))arg1;
- (void)firstLoadData;
- (void)clearUserOtpInfo;
- (NSString *)getBarcodeOtp:(NSString *)arg1 seed:(NSString *)arg2 index:(NSString *)arg3 interval:(NSString *)arg4;
- (void)launchService;
- (NSData *)getOtpItemWithChannelInfo:(NSDictionary *)arg1;
- (NSString *)getSeedMD5;
- (NSString *)getMonitorPointSeed;
- (void)setOnsitePaySwitch:(_Bool)arg1;
- (_Bool)getOnsitePaySwitch;
- (NSString *)calculateNum:(NSString *)arg1;
- (void)getBarcodeValue:(void (^)(NSString *, NSString *, NSString *))arg1;
- (double)getTimeOffset;
- (NSString *)getBarcodeOtp:(NSString *)arg1;
- (NSString *)getBarcodeOtp;
- (NSString *)getOtp;
- (NSString *)getWaveOtp;
- (NSString *)getOtpIndex;
- (void)invalidLocalOtp;
- (NSString *)calculateNum;
- (void)generateOtp:(void (^)(_Bool))arg1;
@end
