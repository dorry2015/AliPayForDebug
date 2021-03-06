//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFRBaseCell.h"

#import "ThemeChangeObserver-Protocol.h"

@class DTRpcAsyncCaller, NSArray, NSString;

@interface AFWStockMarketBaseCell : TFRBaseCell <ThemeChangeObserver>
{
    _Bool _onScreen;
    _Bool _hasHeaderExpo;
    NSArray *_contentExpoArray;
    DTRpcAsyncCaller *_caller;
    NSString *_r_templateId;
}

@property(retain, nonatomic) NSString *r_templateId; // @synthesize r_templateId=_r_templateId;
@property(retain, nonatomic) DTRpcAsyncCaller *caller; // @synthesize caller=_caller;
@property(nonatomic) _Bool hasHeaderExpo; // @synthesize hasHeaderExpo=_hasHeaderExpo;
@property(retain, nonatomic) NSArray *contentExpoArray; // @synthesize contentExpoArray=_contentExpoArray;
- (void).cxx_destruct;
- (void)setThemeColor;
- (void)handleChangeTheme:(id)arg1;
- (id)templateName;
- (id)cardId;
- (id)midPageId;
- (void)stopUpdateSchedule;
- (void)startUpdateSchedule;
- (void)cellExpoFrame:(struct CGRect)arg1;
- (void)updateItemView;
- (void)updateCellContext;
- (void)refreshUIWithModel:(id)arg1;
- (void)sendRequest;
- (void)autoQueryData;
- (void)queryData;
- (void)cancelContentData;
- (void)loadContentData;
- (id)getCellmodel;
- (void)setCellmodel:(id)arg1;
- (void)cellHideLoading_juhua;
- (void)cellShowLoading_juhua;
- (void)setupView;
- (void)setupModel;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)refreshExpoArray;
- (id)jobName;
- (id)schedulerKey;
- (_Bool)isModelVaild;
- (id)modelDao;
- (void)cancleAllJobQueue;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

