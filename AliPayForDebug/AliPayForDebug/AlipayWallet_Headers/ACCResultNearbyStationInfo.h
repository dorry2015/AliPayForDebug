//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ACCResultNearbyStationInfo : NSObject
{
    NSString *_stationId;
    NSString *_stationName;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_cityName;
    NSArray *_lines;
}

+ (Class)linesElementClass;
@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *stationName; // @synthesize stationName=_stationName;
@property(retain, nonatomic) NSString *stationId; // @synthesize stationId=_stationId;
- (void).cxx_destruct;

@end

