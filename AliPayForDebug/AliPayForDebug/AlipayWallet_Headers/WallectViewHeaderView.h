//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton, UILabel;

@interface WallectViewHeaderView : UITableViewHeaderFooterView
{
    CDUnknownBlockType _blockExpand;
    UILabel *_labelTitle;
    UIButton *_btnExpand;
}

@property(retain, nonatomic) UIButton *btnExpand; // @synthesize btnExpand=_btnExpand;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(copy, nonatomic) CDUnknownBlockType blockExpand; // @synthesize blockExpand=_blockExpand;
- (void).cxx_destruct;
- (void)actionExpaned:(id)arg1;
- (void)reloadWithTitle:(id)arg1;
- (void)reloadWithType:(unsigned long long)arg1 title:(id)arg2;
- (void)createSubview;
- (id)initWithReuseIdentifier:(id)arg1;

@end

