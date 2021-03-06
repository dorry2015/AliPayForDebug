//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol O2OTipCollectionViewDelegate;

@interface O2OTipCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSMutableArray *_tipArray;
    id <O2OTipCollectionViewDelegate> _tipDelegate;
    NSMutableArray *_cellArrays;
    NSMutableArray *_selectedTagAtrrays;
    NSMutableDictionary *_cellDic;
}

@property(retain, nonatomic) NSMutableDictionary *cellDic; // @synthesize cellDic=_cellDic;
@property(retain, nonatomic) NSMutableArray *selectedTagAtrrays; // @synthesize selectedTagAtrrays=_selectedTagAtrrays;
@property(retain, nonatomic) NSMutableArray *cellArrays; // @synthesize cellArrays=_cellArrays;
@property(nonatomic) __weak id <O2OTipCollectionViewDelegate> tipDelegate; // @synthesize tipDelegate=_tipDelegate;
@property(retain, nonatomic) NSMutableArray *tipArray; // @synthesize tipArray=_tipArray;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)isContains:(id)arg1 tagString:(id)arg2;
- (_Bool)isContainsWidth:(id)arg1 tagString:(id)arg2;
- (void)resumeCellSelected:(id)arg1;
- (void)resetCellStauts;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

