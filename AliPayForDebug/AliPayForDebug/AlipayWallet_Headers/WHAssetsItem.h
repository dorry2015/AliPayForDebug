//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WHExposureModel;

@interface WHAssetsItem : NSObject
{
    NSString *_title;
    NSString *_money;
    NSString *_desc;
    NSString *_actionUrl;
    WHExposureModel *_exposureModel;
}

@property(retain, nonatomic) WHExposureModel *exposureModel; // @synthesize exposureModel=_exposureModel;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

