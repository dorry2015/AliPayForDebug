//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSString;

@interface GO2OCommonInfoRequest : GO2OServiceObject
{
    int _pageIndex;
    int _pageSize;
    NSString *_infoType;
    NSString *_areaType;
    NSString *_areaCode;
    double _latitude;
    double _longitude;
    NSString *_chInfo;
}

@property(retain, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
@property(retain, nonatomic) NSString *areaType; // @synthesize areaType=_areaType;
@property(retain, nonatomic) NSString *infoType; // @synthesize infoType=_infoType;
- (void).cxx_destruct;

@end

