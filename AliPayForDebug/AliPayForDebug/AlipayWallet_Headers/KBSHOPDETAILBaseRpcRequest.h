//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBSHOPDETAILToString.h"

@class NSDictionary, NSString;

@interface KBSHOPDETAILBaseRpcRequest : KBSHOPDETAILToString
{
    NSString *_cityId;
    double _x;
    double _y;
    NSString *_src;
    NSString *_monitorParams;
    NSString *_systemType;
    NSString *_countyId;
    NSString *_businessAreaId;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *businessAreaId; // @synthesize businessAreaId=_businessAreaId;
@property(retain, nonatomic) NSString *countyId; // @synthesize countyId=_countyId;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
@property(retain, nonatomic) NSString *monitorParams; // @synthesize monitorParams=_monitorParams;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;

@end

