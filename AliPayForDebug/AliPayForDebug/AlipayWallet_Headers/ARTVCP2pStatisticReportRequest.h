//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCRoomBasicRequest.h"

@class ARTVCStatisticReportBase, NSString;

@interface ARTVCP2pStatisticReportRequest : ARTVCRoomBasicRequest
{
    ARTVCStatisticReportBase *_report;
    NSString *_roomId;
    NSString *_token;
    NSString *_sessionId;
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) ARTVCStatisticReportBase *report; // @synthesize report=_report;
- (void).cxx_destruct;
- (id)jsonString;

@end

