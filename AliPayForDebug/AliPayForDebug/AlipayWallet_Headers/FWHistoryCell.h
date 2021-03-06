//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHTemplateBaseCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FWHistoryCollectionViewCell, NSArray, NSMapTable, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface FWHistoryCell : FHTemplateBaseCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    double _itemMargin;
    _Bool _isIPad;
    double _hSectionInset;
    FWHistoryCollectionViewCell *_firstCell;
    UIView *_bottomPaddingView;
    UICollectionView *_widgetConllectionView;
    NSArray *_cardContainerList;
    NSArray *_cardExtInfoList;
    NSMapTable *_cardContainerViewMap;
    UIView *_accessibilityView;
    UICollectionViewFlowLayout *_fpCollectionViewLayout;
    double _indexOfCellBeforeDragging;
}

@property(nonatomic) double indexOfCellBeforeDragging; // @synthesize indexOfCellBeforeDragging=_indexOfCellBeforeDragging;
@property(retain, nonatomic) UICollectionViewFlowLayout *fpCollectionViewLayout; // @synthesize fpCollectionViewLayout=_fpCollectionViewLayout;
@property(retain, nonatomic) UIView *accessibilityView; // @synthesize accessibilityView=_accessibilityView;
@property(retain, nonatomic) NSMapTable *cardContainerViewMap; // @synthesize cardContainerViewMap=_cardContainerViewMap;
@property(retain, nonatomic) NSArray *cardExtInfoList; // @synthesize cardExtInfoList=_cardExtInfoList;
@property(retain, nonatomic) NSArray *cardContainerList; // @synthesize cardContainerList=_cardContainerList;
@property(retain, nonatomic) UICollectionView *widgetConllectionView; // @synthesize widgetConllectionView=_widgetConllectionView;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)introDing:(id)arg1;
- (void)handleSubCard:(id)arg1 stick:(_Bool)arg2 logModel:(id)arg3;
- (id)viewsNeedExposure;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)indexOfMajorCell;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateData:(id)arg1 userStatusMap:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

