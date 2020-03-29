//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WKFlyBirdCellProtocol-Protocol.h"
#import "WKNormalCellProtocol-Protocol.h"

@class FBDocument, NSString, UIImageView, UILabel, UIView, WKTableCellModel;

@interface APGSuggestDefaultTableViewCell : UITableViewCell <WKFlyBirdCellProtocol, WKNormalCellProtocol>
{
    CDUnknownBlockType _directAction;
    UIImageView *_leftIcon;
    UILabel *_titleLabel;
    UIView *_bottomLine;
    UIView *_topLine;
    id _model;
    UIImageView *_markImageView;
    UIView *_directTagsView;
    WKTableCellModel *_cellModel;
}

+ (double)cellHeight:(id)arg1 viewBuilder:(id)arg2;
+ (double)searchCellHeight;
+ (double)cellHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(retain, nonatomic) WKTableCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UIView *directTagsView; // @synthesize directTagsView=_directTagsView;
@property(retain, nonatomic) UIImageView *markImageView; // @synthesize markImageView=_markImageView;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(copy, nonatomic) CDUnknownBlockType directAction; // @synthesize directAction=_directAction;
- (void).cxx_destruct;
- (void)buildCell:(id)arg1 viewBuilder:(id)arg2;
- (void)directTagsAction:(id)arg1;
- (void)resetDirectTagsView:(id)arg1;
- (void)resetMarkImageView:(id)arg1;
- (void)layoutSubviews;
- (void)setSearchModel:(id)arg1;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBDocument *document;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
