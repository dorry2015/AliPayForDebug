//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface mobilechatBCCancelMessageReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSString *clientVersion; // @dynamic clientVersion;
@property(readonly) _Bool hasClientMsgId; // @dynamic hasClientMsgId;
@property(readonly) _Bool hasClientVersion; // @dynamic hasClientVersion;
@property(readonly) _Bool hasMsgId; // @dynamic hasMsgId;
@property(readonly) _Bool hasSessionId; // @dynamic hasSessionId;
@property(readonly) _Bool hasSessionType; // @dynamic hasSessionType;
@property(nonatomic) long long msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *sessionType; // @dynamic sessionType;

@end
