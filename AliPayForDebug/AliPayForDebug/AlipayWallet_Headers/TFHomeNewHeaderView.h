//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol TFHomeNewHeaderViewDelegate;

@interface TFHomeNewHeaderView : UIView
{
    id <TFHomeNewHeaderViewDelegate> _delegate;
    UIView *_colorBgView;
    UIView *_shadowBackgroundView;
    UIView *_contentView;
    UIView *_separatorLine;
    NSMutableArray *_arrHeaderItemModel;
    NSMutableArray *_arrHeaderItemViews;
}

+ (id)defaultHeaderView;
@property(retain, nonatomic) NSMutableArray *arrHeaderItemViews; // @synthesize arrHeaderItemViews=_arrHeaderItemViews;
@property(retain, nonatomic) NSMutableArray *arrHeaderItemModel; // @synthesize arrHeaderItemModel=_arrHeaderItemModel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *shadowBackgroundView; // @synthesize shadowBackgroundView=_shadowBackgroundView;
@property(retain, nonatomic) UIView *colorBgView; // @synthesize colorBgView=_colorBgView;
@property(nonatomic) __weak id <TFHomeNewHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickHeaderItem:(id)arg1;
- (void)customLayoutItemViews;
- (void)setupItemViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

