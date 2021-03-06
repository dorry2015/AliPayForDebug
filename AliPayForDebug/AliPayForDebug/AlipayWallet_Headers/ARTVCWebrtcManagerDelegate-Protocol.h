//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARTVCRealtimeStatsItem, ARTVCStatisticsData, NSError, NSString;

@protocol ARTVCWebrtcManagerDelegate <NSObject>
- (void)participant:(NSString *)arg1 didEncounterError:(NSError *)arg2;
- (void)participant:(NSString *)arg1 didChangeConnectionState:(long long)arg2;

@optional
- (void)participant:(NSString *)arg1 didAvailabeSendBandwidthBecomeLow:(_Bool)arg2 currentBandwidth:(double)arg3;
- (void)participant:(NSString *)arg1 didGenerateCallStatisticsData:(ARTVCStatisticsData *)arg2;
- (void)participant:(NSString *)arg1 didGetRealtimesStatistic:(ARTVCRealtimeStatsItem *)arg2;
- (void)participant:(NSString *)arg1 didGetStatsString:(NSString *)arg2;
- (void)didMicrophonePermissionNotAllowed;
- (void)didCameraPermissionNotAllowed;
@end

