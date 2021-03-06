//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockDetailBaseCell.h"

@class AFWStockCellHeader, AFWStockTrackerExposureStructure, DTRpcAsyncCaller, NSMutableArray, NSString, UIView;

@interface AFWStockConcernPlateCell : AFWStockDetailBaseCell
{
    _Bool _hasHidden;
    AFWStockCellHeader *_header;
    UIView *_content;
    NSMutableArray *_modelList;
    NSMutableArray *_viewList;
    DTRpcAsyncCaller *_updateCaller;
    NSString *_moreAction;
    AFWStockTrackerExposureStructure *_expoStruct;
}

@property(retain, nonatomic) AFWStockTrackerExposureStructure *expoStruct; // @synthesize expoStruct=_expoStruct;
@property(retain, nonatomic) NSString *moreAction; // @synthesize moreAction=_moreAction;
@property(retain, nonatomic) DTRpcAsyncCaller *updateCaller; // @synthesize updateCaller=_updateCaller;
@property(retain, nonatomic) NSMutableArray *viewList; // @synthesize viewList=_viewList;
@property(retain, nonatomic) NSMutableArray *modelList; // @synthesize modelList=_modelList;
@property(retain, nonatomic) UIView *content; // @synthesize content=_content;
@property(retain, nonatomic) AFWStockCellHeader *header; // @synthesize header=_header;
@property(nonatomic) _Bool hasHidden; // @synthesize hasHidden=_hasHidden;
- (void).cxx_destruct;
- (struct CGRect)expoFrame;
- (void)cellExpoFrame:(struct CGRect)arg1;
- (void)plateListItemExp:(id)arg1 index:(long long)arg2;
- (void)updataChangeRate:(id)arg1;
- (void)dataflowWithModel:(id)arg1 isLocal:(_Bool)arg2;
- (id)getPlates;
- (id)getSymbols;
- (void)queryUpdateData;
- (void)stopUpdateSchedule;
- (void)startUpdateSchedule;
- (void)checkToStartUpdateSchedule;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (_Bool)validBizModel;
- (id)creatPlateViewItemTag:(long long)arg1;
- (long long)requestItemNum;
- (id)title;
- (void)setContentState:(long long)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)setupViews;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end

