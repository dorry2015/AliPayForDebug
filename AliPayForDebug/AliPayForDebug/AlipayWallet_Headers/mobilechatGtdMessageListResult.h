//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface mobilechatGtdMessageListResult : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *gtdEnabled; // @dynamic gtdEnabled;
@property(readonly) _Bool hasGtdEnabled; // @dynamic hasGtdEnabled;
@property(readonly) _Bool hasMemo; // @dynamic hasMemo;
@property(readonly) _Bool hasResultStatus; // @dynamic hasResultStatus;
@property(retain, nonatomic) NSString *memo; // @dynamic memo;
@property(retain, nonatomic) NSArray *messageList; // @dynamic messageList;
@property(nonatomic) int resultStatus; // @dynamic resultStatus;

@end
