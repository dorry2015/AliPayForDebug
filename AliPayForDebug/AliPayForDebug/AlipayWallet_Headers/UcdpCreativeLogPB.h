//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class PBMapStringString;

@interface UcdpCreativeLogPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasLogInfo; // @dynamic hasLogInfo;
@property(readonly) _Bool hasServerTimestamp; // @dynamic hasServerTimestamp;
@property(retain, nonatomic) PBMapStringString *logInfo; // @dynamic logInfo;
@property(nonatomic) long long serverTimestamp; // @dynamic serverTimestamp;

@end
