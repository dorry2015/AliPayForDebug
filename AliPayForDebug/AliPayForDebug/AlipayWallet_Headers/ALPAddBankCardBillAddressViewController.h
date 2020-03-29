//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWTableController.h"

@class APInputBoxCell, APTableViewBaseCell, NSDictionary, NSString;
@protocol ALPAddBankCardBillAddressViewControllerDelegate;

@interface ALPAddBankCardBillAddressViewController : WWTableController
{
    APInputBoxCell *_addressCell;
    APInputBoxCell *_postCodeCell;
    APInputBoxCell *_phoneCell;
    APTableViewBaseCell *_contryCell;
    NSString *_contry;
    NSString *_provice;
    NSString *_city;
    NSString *_address;
    NSString *_phone;
    NSString *_fullCode;
    id <ALPAddBankCardBillAddressViewControllerDelegate> _clickDelegate;
    NSDictionary *_info;
}

@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(nonatomic) __weak id <ALPAddBankCardBillAddressViewControllerDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
- (void).cxx_destruct;
- (void)checkSaveBtnStatus:(id)arg1;
- (void)didClickSave:(id)arg1;
- (_Bool)doCheckInput;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
