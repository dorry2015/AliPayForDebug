//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OTemplateController.h"

@class NSMutableArray;

@interface O2OPGoodsDiscountController : O2OTemplateController
{
    NSMutableArray *_status;
}

@property(retain, nonatomic) NSMutableArray *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)showToast:(id)arg1;
- (void)updateCollectingState:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)updateReceivedState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)requestReceivedVoucherOfId:(id)arg1 index:(unsigned long long)arg2;
- (void)didTapReceivedVoucherAtIndex:(id)arg1 sender:(id)arg2;

@end
