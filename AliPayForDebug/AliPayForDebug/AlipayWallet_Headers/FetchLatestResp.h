//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, ZHomeBaseRpcResult;

@interface FetchLatestResp : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) ZHomeBaseRpcResult *base; // @dynamic base;
@property(retain, nonatomic) NSArray *cardConfigs; // @dynamic cardConfigs;
@property(retain, nonatomic) NSString *ext; // @dynamic ext;
@property(retain, nonatomic) NSArray *feed; // @dynamic feed;
@property(retain, nonatomic) NSString *fullUpgrade; // @dynamic fullUpgrade;
@property(readonly) _Bool hasBase; // @dynamic hasBase;
@property(readonly) _Bool hasExt; // @dynamic hasExt;
@property(readonly) _Bool hasFullUpgrade; // @dynamic hasFullUpgrade;
@property(readonly) _Bool hasInstallFiles; // @dynamic hasInstallFiles;
@property(readonly) _Bool hasLastQueryTime; // @dynamic hasLastQueryTime;
@property(readonly) _Bool hasOldVersion; // @dynamic hasOldVersion;
@property(readonly) _Bool hasPb_hasMore; // @dynamic hasPb_hasMore;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSString *installFiles; // @dynamic installFiles;
@property(nonatomic) long long lastQueryTime; // @dynamic lastQueryTime;
@property(nonatomic) long long oldVersion; // @dynamic oldVersion;
@property(nonatomic) _Bool pb_hasMore; // @dynamic pb_hasMore;
@property(retain, nonatomic) NSArray *topFeeds; // @dynamic topFeeds;
@property(nonatomic) long long version; // @dynamic version;

@end

