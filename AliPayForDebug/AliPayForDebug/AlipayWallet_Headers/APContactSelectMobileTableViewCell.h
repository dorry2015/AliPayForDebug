//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactMobileTableViewCell.h"

@class UIImageView;

@interface APContactSelectMobileTableViewCell : APContactMobileTableViewCell
{
    UIImageView *_alipayIcon;
}

@property(retain, nonatomic) UIImageView *alipayIcon; // @synthesize alipayIcon=_alipayIcon;
- (void).cxx_destruct;
- (double)titleTextValidWidth:(double)arg1;
- (void)refreshAliPayIcon;
- (void)refreshCellWithItem:(id)arg1;
- (void)setupUI;
- (void)setupAliPayIcon;
- (void)refreshDetail;

@end
