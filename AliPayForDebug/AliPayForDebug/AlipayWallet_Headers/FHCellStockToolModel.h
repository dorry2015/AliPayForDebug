//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FHLogModel, NSString;

@interface FHCellStockToolModel : NSObject
{
    NSString *_name;
    NSString *_icon;
    NSString *_followAction;
    NSString *_assetType;
    FHLogModel *_logModel;
}

@property(retain, nonatomic) FHLogModel *logModel; // @synthesize logModel=_logModel;
@property(copy, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(copy, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

