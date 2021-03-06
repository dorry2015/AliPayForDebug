//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FHHighlightClickExposureProtocol-Protocol.h"

@class CAGradientLayer, FHCellNewsBattleItemModel, FHHighlightLabel, NSString, UIImageView, UILabel;
@protocol FHTemplateNewsBattleInfoViewProtocol;

@interface FHTemplateNewsBattleInfoView : UIView <FHHighlightClickExposureProtocol>
{
    _Bool _showSeperatorLine;
    id <FHTemplateNewsBattleInfoViewProtocol> _delegate;
    UILabel *_titleLabel;
    FHHighlightLabel *_highlightLabel;
    UIImageView *_contentImageView;
    UIImageView *_videoIconImageView;
    UIView *_separateLineView;
    UILabel *_featureLabel;
    CAGradientLayer *_columnLayer;
    UILabel *_columnLabel;
    UIImageView *_columnBg;
    UILabel *_forumLabel;
    FHCellNewsBattleItemModel *_itemModel;
}

@property(retain, nonatomic) FHCellNewsBattleItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) UILabel *forumLabel; // @synthesize forumLabel=_forumLabel;
@property(retain, nonatomic) UIImageView *columnBg; // @synthesize columnBg=_columnBg;
@property(retain, nonatomic) UILabel *columnLabel; // @synthesize columnLabel=_columnLabel;
@property(retain, nonatomic) CAGradientLayer *columnLayer; // @synthesize columnLayer=_columnLayer;
@property(retain, nonatomic) UILabel *featureLabel; // @synthesize featureLabel=_featureLabel;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) UIImageView *videoIconImageView; // @synthesize videoIconImageView=_videoIconImageView;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) FHHighlightLabel *highlightLabel; // @synthesize highlightLabel=_highlightLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showSeperatorLine; // @synthesize showSeperatorLine=_showSeperatorLine;
@property(nonatomic) __weak id <FHTemplateNewsBattleInfoViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)formatCount:(long long)arg1;
- (id)textLayerWithFrame:(struct CGRect)arg1 font:(id)arg2 fontColor:(id)arg3;
- (void)controlTouch:(id)arg1;
- (id)attributedStringWithIcon:(id)arg1 number:(long long)arg2;
- (void)updateData:(id)arg1;
- (void)updateFrameByColumn:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clickExposure;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

