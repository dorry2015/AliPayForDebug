//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WKFlyBirdCellProtocol-Protocol.h"

@class FBDocument, NSString, UILabel, UIView, VADottedLineView, WKTableCellModel;

@interface VATrainGroupCell : UITableViewCell <WKFlyBirdCellProtocol>
{
    UILabel *_startLabel;
    UILabel *_timeLabel;
    VADottedLineView *_leftDotLine;
    VADottedLineView *_rightDotLine;
    UIView *_cellContentView;
}

+ (double)cellHeight:(id)arg1 viewBuilder:(id)arg2;
@property(retain, nonatomic) UIView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(retain, nonatomic) VADottedLineView *rightDotLine; // @synthesize rightDotLine=_rightDotLine;
@property(retain, nonatomic) VADottedLineView *leftDotLine; // @synthesize leftDotLine=_leftDotLine;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *startLabel; // @synthesize startLabel=_startLabel;
- (void).cxx_destruct;
- (void)buildCell:(id)arg1 viewBuilder:(id)arg2;
- (void)addCellSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) WKTableCellModel *cellModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBDocument *document;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
