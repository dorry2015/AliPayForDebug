//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockBaseModel.h"

@class NSArray, NSString;

@interface AFWStockIndexCompanyListModel : AFWStockBaseModel
{
    NSString *_actionURL;
    NSArray *_companyItemList;
}

+ (id)modelWithfinscbffIndexInfoCompanyResultPB:(id)arg1;
@property(readonly, nonatomic) NSArray *companyItemList; // @synthesize companyItemList=_companyItemList;
@property(readonly, copy, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
- (void).cxx_destruct;
- (id)transformModelFromPrototype:(id)arg1;
- (id)initWithfinscbffIndexInfoCompanyResultPB:(id)arg1;
- (id)init;

@end
