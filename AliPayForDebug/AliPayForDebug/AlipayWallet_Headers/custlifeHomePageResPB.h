//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString, custlifeCardSectionPB, custlifeHeaderVOPB;

@interface custlifeHomePageResPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) custlifeCardSectionPB *content; // @dynamic content;
@property(retain, nonatomic) PBMapStringString *extInfo; // @dynamic extInfo;
@property(readonly) _Bool hasContent; // @dynamic hasContent;
@property(readonly) _Bool hasExtInfo; // @dynamic hasExtInfo;
@property(readonly) _Bool hasHeader; // @dynamic hasHeader;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultMsg; // @dynamic hasResultMsg;
@property(readonly) _Bool hasThemeContent; // @dynamic hasThemeContent;
@property(retain, nonatomic) custlifeHeaderVOPB *header; // @dynamic header;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultMsg; // @dynamic resultMsg;
@property(retain, nonatomic) NSArray *tabs; // @dynamic tabs;
@property(retain, nonatomic) custlifeCardSectionPB *themeContent; // @dynamic themeContent;

@end

