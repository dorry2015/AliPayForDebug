//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, mobilelbsResidentDistrictInfoPB, mobilelbsResidentStatusPB;

@interface mobilelbsResidentResponsePB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) double confidence; // @dynamic confidence;
@property(readonly) _Bool hasConfidence; // @dynamic hasConfidence;
@property(readonly) _Bool hasLatitude; // @dynamic hasLatitude;
@property(readonly) _Bool hasLongitude; // @dynamic hasLongitude;
@property(readonly) _Bool hasResidentDistrictInfo; // @dynamic hasResidentDistrictInfo;
@property(readonly) _Bool hasStatus; // @dynamic hasStatus;
@property(readonly) _Bool hasWhereis; // @dynamic hasWhereis;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) mobilelbsResidentDistrictInfoPB *residentDistrictInfo; // @dynamic residentDistrictInfo;
@property(retain, nonatomic) mobilelbsResidentStatusPB *status; // @dynamic status;
@property(retain, nonatomic) NSString *whereis; // @dynamic whereis;

@end
